#import "RevealUtil.h"
#import "WeChatRedEnvelop.h"

%hook MicroMessengerAppDelegate
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {
	%orig;
	RevealUtil *ru = [[RevealUtil alloc] init];
	[ru startReveal];
	return YES;
}
%end

%hook MainFrameSightViewController
- (float)sightCaptureMaxDuration{
	return 30.0; 
}
%end

%hook SightMovieWriter
- (void)setMaxMovieDuration:(float)duration{
	%orig(30);
}
%end

/*
%hook CContact
- (BOOL)hasContactDisplayUsrName{
	return NO;
}
%end

%hook SettingUtil
+ (BOOL)isCurUsrHasAliasName{
	return NO;
}
%end

%hook TextMessageNodeView
- (BOOL)canShowRevokeMenu{
	return YES;
}
%end
*/


%hook CMessageMgr
- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(CMessageWrap *)wrap {
	%orig;	
	switch(wrap.m_uiMessageType) {
	case 49: {
		CContactMgr *contactManager = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("CContactMgr") class]];
		CContact *selfContact = [contactManager getSelfContact];
		if (![wrap.m_nsFromUsr isEqualToString:selfContact.m_nsUsrName]) {
			UIViewController *curCtrl = [[[[objc_getClass("CAppViewControllerManager") topMostController] currentViewController] viewControllers] lastObject];
			if ([curCtrl isKindOfClass:[objc_getClass("BaseMsgContentViewController") class]]) {
				BaseMsgContentViewController *msgCtrl = (BaseMsgContentViewController *)curCtrl;
				if ([msg isEqualToString:[msgCtrl getCurrentChatName]]) {
					WCRedEnvelopesControlData *ctrlData = [[objc_getClass("WCRedEnvelopesControlData") alloc] init];
					[ctrlData setM_oSelectedMessageWrap:wrap];
					WCRedEnvelopesReceiveControlLogic *logic = [[objc_getClass("WCRedEnvelopesReceiveControlLogic") alloc] initWithData:ctrlData];
					[logic WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes];
				}
			}
		}
		break;
	}
	default:
		break;
	}
	
}
%end
