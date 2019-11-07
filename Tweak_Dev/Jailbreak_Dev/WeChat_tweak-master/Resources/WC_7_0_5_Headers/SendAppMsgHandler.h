//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "SessionSelectControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "UIAlertViewDelegate.h"

@class AppCommunicateData, CContact, CMessageWrap, ForwardMessageLogicController, MMTipsViewController, MMUINavigationController, NSArray, NSMutableDictionary, NSString, WAContactGetter, WXMediaInternalMessage;

@interface SendAppMsgHandler : MMObject <SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate, UIAlertViewDelegate, IPreEnterWechatLogicExt>
{
    NSString *m_nsAppid;
    NSString *m_nsBundleId;
    AppCommunicateData *m_appData;
    CMessageWrap *m_messageWrap;
    CContact *m_oContact;
    MMTipsViewController *_tipsViewController;
    _Bool m_bIsHiddenTarBar;
    int m_Scene;
    NSString *m_nsRedirectUrl;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned int m_uiSessionSelectConfirmType;
    _Bool m_bIsFromSysCopy;
    _Bool _m_bIsSendSpecifiedContact;
    _Bool _appBrandWithShareTicket;
    _Bool _canReturnRightShareResult;
    unsigned int _appbrandVersion;
    id <SendAppMsgHandleDelegate> m_delegate;
    MMUINavigationController *_m_navigationController;
    WXMediaInternalMessage *_mediaMessage;
    WAContactGetter *_contactGetter;
    NSString *_appbrandDisplayName;
    NSString *_appbrandIconUrl;
    NSMutableDictionary *_shareKeyInfo;
    NSString *_appbrandAppId;
    NSArray *_toContacts;
    NSMutableDictionary *_extraInfo;
}

+ (void)reportShareAppMsgInSessionMsgArr:(id)arg1 contacts:(id)arg2;
+ (void)reportShareMsg:(id)arg1 contacts:(id)arg2 openSDKVersion:(id)arg3 shareSource:(unsigned long long)arg4;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnForwardAppBrandMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)OnForwardMessageBackToApp:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageStayAtWeChat:(id)arg1;
- (void)OnForwardWeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
@property(nonatomic) _Bool appBrandWithShareTicket; // @synthesize appBrandWithShareTicket=_appBrandWithShareTicket;
@property(retain, nonatomic) NSString *appbrandAppId; // @synthesize appbrandAppId=_appbrandAppId;
@property(retain, nonatomic) NSString *appbrandDisplayName; // @synthesize appbrandDisplayName=_appbrandDisplayName;
@property(retain, nonatomic) NSString *appbrandIconUrl; // @synthesize appbrandIconUrl=_appbrandIconUrl;
@property(nonatomic) unsigned int appbrandVersion; // @synthesize appbrandVersion=_appbrandVersion;
- (void)asyncNotifySendAppMsgOk;
@property(nonatomic) _Bool canReturnRightShareResult; // @synthesize canReturnRightShareResult=_canReturnRightShareResult;
- (void)cancelAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)cancelAllHandleAndReturn3rdAppUnsupport;
- (void)cancelSendAppMsg;
- (void)checkAppOpenId;
- (void)clearAllHandle;
- (void)clearAllHandleAndReturn3rdApp:(_Bool)arg1;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
- (void)dealloc;
- (void)decryptWxWorkChatRecord;
- (void)doAppAuth;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (id)getCurrentViewController;
- (void)handleDecryptWxWorkChatRecordFail;
- (void)handleDecryptWxWorkChatRecordSuccess:(id)arg1;
- (void)handleShareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (id)init;
@property(nonatomic) int m_Scene; // @synthesize m_Scene;
@property(nonatomic) _Bool m_bIsFromSysCopy; // @synthesize m_bIsFromSysCopy;
@property(nonatomic) _Bool m_bIsSendSpecifiedContact; // @synthesize m_bIsSendSpecifiedContact=_m_bIsSendSpecifiedContact;
@property(nonatomic) __weak id <SendAppMsgHandleDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMUINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
@property(retain, nonatomic) WXMediaInternalMessage *mediaMessage; // @synthesize mediaMessage=_mediaMessage;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)removeAuthViewController;
- (void)reportShareResult:(int)arg1;
- (void)sendAppMsg:(id)arg1;
- (void)sendAppMsg:(id)arg1 bundleId:(id)arg2 withData:(id)arg3;
- (void)sendRespAndReportToApp:(id)arg1 errCode:(int)arg2 errStr:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *shareKeyInfo; // @synthesize shareKeyInfo=_shareKeyInfo;
@property(retain, nonatomic) NSArray *toContacts; // @synthesize toContacts=_toContacts;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)showAlertView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

