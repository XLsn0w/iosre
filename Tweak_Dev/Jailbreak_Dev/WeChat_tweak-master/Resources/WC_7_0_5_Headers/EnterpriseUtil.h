//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EnterpriseUtil : MMObject
{
}

+ (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
+ (id)FormTextMsg:(id)arg1 withText:(id)arg2;
+ (id)GetPathOfMesAudio:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3 DocPath:(id)arg4;
+ (id)GetPathOfMesAudioTrans:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3 DocPath:(id)arg4;
+ (id)batchConvertEnterpriseMsgDBItem2MsgWrap:(id)arg1;
+ (id)convertAddMemberPageResToContact:(id)arg1 extContact:(id)arg2 brand:(id)arg3;
+ (id)convertAddMemberPageResToContactList:(id)arg1 brand:(id)arg2;
+ (id)convertCreateChatPageResToContact:(id)arg1 brand:(id)arg2;
+ (id)convertCreateChatPageResToContactList:(id)arg1 brand:(id)arg2;
+ (id)convertEnterpriseMsgDBItem2MsgWrap:(id)arg1;
+ (id)convertMsgWrap2EnterpriseDBItem:(id)arg1 brandUserName:(id)arg2;
+ (id)convertSvrFullBizChat2EnterpirseContact:(id)arg1;
+ (id)fillMsgSource:(id)arg1 chatId:(id)arg2 brand:(id)arg3;
+ (id)getEnterpriseChatBrandUserName:(id)arg1;
+ (id)getEnterpriseChatCachePath;
+ (id)getEnterpriseSenderOfMsgWrap:(id)arg1;
+ (id)getPathOfEnterpriseMessageDB:(id)arg1;
+ (_Bool)isChatRoomMsg:(id)arg1;
+ (_Bool)isMsgWrapAtAll:(id)arg1;
+ (_Bool)isMsgWrapAtMe:(id)arg1;
+ (_Bool)isMsgWrapFromMe:(id)arg1;

@end

