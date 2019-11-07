//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMTipsViewControllerDelegate.h"
#import "WCPayGenDigitalCertCgiDelegate.h"
#import "WCPayLogicMgrExt.h"

@class NSString, UIButton, WCBizLoadingView, WCPayGenDigitalCertCgi, WCPayTenpaySecureCtrlItem, WCPayUserInfo;

@interface WCPayDigitalCertInstallViewController : WCPayBaseViewController <WCPayLogicMgrExt, MMTipsViewControllerDelegate, WCPayGenDigitalCertCgiDelegate>
{
    unsigned int _entryScene;
    UIButton *_m_verifyButton;
    WCPayTenpaySecureCtrlItem *_m_idNoTextFieldItem;
    WCBizLoadingView *_m_bizLoadingView;
    WCPayGenDigitalCertCgi *_m_genDigitalCgi;
    WCPayUserInfo *_m_userInfo;
    id <WCPayDigitalCertInstallViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(nonatomic) unsigned int entryScene; // @synthesize entryScene=_entryScene;
- (id)initWithDelegate:(id)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) WCBizLoadingView *m_bizLoadingView; // @synthesize m_bizLoadingView=_m_bizLoadingView;
@property(nonatomic) __weak id <WCPayDigitalCertInstallViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPayGenDigitalCertCgi *m_genDigitalCgi; // @synthesize m_genDigitalCgi=_m_genDigitalCgi;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *m_idNoTextFieldItem; // @synthesize m_idNoTextFieldItem=_m_idNoTextFieldItem;
@property(retain, nonatomic) WCPayUserInfo *m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property(retain, nonatomic) UIButton *m_verifyButton; // @synthesize m_verifyButton=_m_verifyButton;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onClickVerifyButton;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)reloadTableView;
- (void)showKeyboard;
- (void)startBizLoadingBlocked;
- (void)stopBizLoading;
- (void)updateBizLoadingView;
- (void)updateInputSection;
- (void)updateTextFieldItem;
- (void)updateVerifyButton;
- (void)updateVerifyButtonStatus;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

