//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBarItemCustomView.h"

#import "MMConfigMgrExt.h"
#import "WCLazyInitObjectProtocol.h"
#import "WCPayLogicMgrExt.h"

@class MMBarButton, NSMutableDictionary, NSString, RightTopMenuData, UIImageView;

@interface NewMainFrameRightTopMenuBtn : MMBarItemCustomView <MMConfigMgrExt, WCPayLogicMgrExt, WCLazyInitObjectProtocol>
{
    UIImageView *m_showNewView;
    RightTopMenuData *m_data;
    NSMutableDictionary *m_dicItems;
    MMBarButton *m_addButton;
    _Bool haveLazyInit;
    id <NewMainFrameRightTopMenuBtnDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnGetReceiveOrPayReddotData;
- (void)ReloadWallet;
- (void)checkRedDot;
- (void)dealloc;
@property(nonatomic) __weak id <NewMainFrameRightTopMenuBtnDelegate> delegate; // @synthesize delegate=_delegate;
- (void)goToLazyInitObject;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (void)hideRightTopMenuBtn;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isRedDotShowed;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (void)onItemAction:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)reloadAllItems;
- (void)reloadData;
- (void)reloadMenuItems;
- (void)saveArchive;
- (void)showRedDot:(_Bool)arg1;
- (void)showRightTopMenuBtn;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)updateImageColor:(id)arg1 alpha:(double)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

