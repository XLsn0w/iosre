#import "LLRedEnvelopesMgr.h"

@interface NSString (XMLParse)

- (NSString *)substringForXMLKey:(NSString *)key;

@end

@implementation NSString (XMLParse)

- (NSString *)substringForXMLKey:(NSString *)key{
	@try {
	    NSRange startRange = [self rangeOfString:[NSString stringWithFormat:@"<%@>",key]];
	    NSRange endRange = [self rangeOfString:[NSString stringWithFormat:@"</%@>",key]];
	    NSRange range = NSMakeRange(startRange.location+startRange.length, endRange.location-startRange.location-startRange.length);
	    return [self substringWithRange:range];
	} @catch (NSException *exception) {
	    return nil;
	}
}

@end

%hook CMessageMgr

- (void)onRevokeMsg:(id)message{
	if([LLRedEnvelopesMgr shared].isOpenAvoidRevokeMessage){
		CMessageWrap *msgWrap = message;
		NSString *xmlStr = msgWrap.m_nsContent;
		NSString *sessionStr = [xmlStr substringForXMLKey:@"session"];
		NSString *replaceStr = [xmlStr substringForXMLKey:@"replacemsg"];
		if(!sessionStr || !replaceStr){
			%orig;
			return;
		}
		CContactMgr *contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:%c(CContactMgr)];
		CContact *senderContact = [contactMgr getContactByName:msgWrap.m_nsFromUsr];
		NSRange range = [replaceStr rangeOfString:@"\"([^<]+)\"" options:NSRegularExpressionSearch];
		NSString *name = nil;
		@try{
			name = [replaceStr substringWithRange:range];
		} @catch(NSException *exception){}
		BOOL isSender = [%c(CMessageWrap) isSenderFromMsgWrap:msgWrap];
		CMessageWrap *revokeMsg = [[%c(CMessageWrap) alloc] initWithMsgType:0x2710];
		revokeMsg.m_nsFromUsr = isSender ? msgWrap.m_nsToUsr : msgWrap.m_nsFromUsr;
		revokeMsg.m_nsToUsr   = isSender ? msgWrap.m_nsFromUsr : msgWrap.m_nsToUsr;
		revokeMsg.m_nsContent = isSender ? @"你撤回了一条消息" : [NSString stringWithFormat:@"已阻止%@撤回消息",name?:senderContact.m_nsNickName?:senderContact.m_nsAliasName?:senderContact.m_nsUsrName];
		revokeMsg.m_uiStatus  = 0x4;
		revokeMsg.m_uiCreateTime = msgWrap.m_uiCreateTime;
		[self AddLocalMsg:sessionStr MsgWrap:revokeMsg fixTime:NO NewMsgArriveNotify:NO];
		return;
	}
	%orig;
}

%end

%hook TypingController

- (void)trySendTyping:(NSString *)arg{
	if(![LLRedEnvelopesMgr shared].isOpenBlockSendInputStatus){
		%orig;
	}
}

%end
