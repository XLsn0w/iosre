//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIAlertView;

@interface CPushMailContactInfoAssist : PluginContactInfoAssist <PBMessageObserverDelegate, UIAlertViewDelegate>
{
    map_f8690629 m_mapPushMailCellToCellType;
    UIAlertView *m_pwdAlertView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)doSwitchPushMail:(id)arg1;
- (void)doSwitchPushMailByAlertView:(id)arg1;
- (id)getLoadingText;
- (id)getPluginIntro;
- (id)getPushMailErrorTitle;
- (void)handleSwitchPushMailOk:(unsigned int)arg1;
- (_Bool)isShowOpenPushMailBtn;
- (void)onSendPushMailPwd:(id)arg1;
- (void)onSwitchViewOff;
- (void)onSwitchViewOn;
- (void)onWrite;
- (void)openPushNoDisturbView;
- (void)reloadInstalledTableViewData;
- (void)reloadPushMailTableView;
- (void)showClosePushMailAlert;
- (void)showFolderConfigPage;
- (void)showInputPwdAlert:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

