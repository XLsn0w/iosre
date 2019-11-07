//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "IAddressBookMgrExt.h"

@class AccountUploadAddressInfo, UIView;

@interface WCAccountAlertUploadAddressbookViewController : WCAccountBaseViewController <IAddressBookMgrExt>
{
    id <WCAccountAlertUploadAddressbookViewControllerDelegate> m_delegate;
    AccountUploadAddressInfo *m_info;
    UIView *m_backgroundView;
    _Bool m_bShowMore;
    _Bool m_bShowInfo;
}

- (void).cxx_destruct;
- (void)OnConfirmAddressBookStatus:(unsigned int)arg1;
- (void)addSubTitle:(id)arg1 To:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)onEnableButtonClicked;
- (void)onMore;
- (void)setDelegate:(id)arg1;
- (void)showDeniedTip;
- (void)showUploadAddressAlert:(id)arg1;
- (void)showUploadAddressMoreDetail;
- (_Bool)useCustomNavibar;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

