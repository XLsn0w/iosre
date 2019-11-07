//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PreEnterBaseStep.h"

#import "IAppViewControllerManagerExt-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"
#import "WCAccountSetPasswordViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, PasswordLogic, WCAccountBindPhoneControlLogic;

@interface PreEnterShowGlobalAlertStep : PreEnterBaseStep <WCAccountBindPhoneControlLogicDelegate, PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate, IAppViewControllerManagerExt>
{
    PasswordLogic *m_changePasswdLogic;
    WCAccountBindPhoneControlLogic *m_changePhoneLogic;
    NSString *m_title;
    NSString *m_msg;
    NSString *m_nsID;
    NSMutableArray *m_arrBtns;
}

- (void).cxx_destruct;
- (void)onTabBarRootViewControllerDidAppear;
- (void)showSetPasswordView:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordFail:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)startChangePassward;
- (void)showScan;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)showChangePhone;
- (void)showWebView:(id)arg1;
- (void)globalAlertReport:(id)arg1 Btn:(id)arg2;
- (void)showGlobalAlert;
- (void)parseGlobalAlert:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

