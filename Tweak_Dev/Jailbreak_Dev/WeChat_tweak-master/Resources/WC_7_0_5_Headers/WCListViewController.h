//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UINavigationControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCFacadeExt.h"

@class CContact, NSMutableArray, NSString;

@interface WCListViewController : MMUIViewController <WCActionSheetDelegate, UINavigationControllerDelegate, WCFacadeExt>
{
    _Bool m_isMyWC;
    NSMutableArray *m_arrPhotoDatas;
    CContact *m_contact;
    _Bool m_isNoMoreData;
    id <WCListViewDelegate> m_view;
    unsigned int _startTime;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)forceReload;
- (void)initBarItem;
- (void)initData:(_Bool)arg1;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)onDissmiss;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onNetworkActivityStatusChanged;
- (void)onOperate:(id)arg1;
- (void)refreshFooter;
- (void)refreshHeader;
- (void)reloadData;
- (void)reloadStyle;
- (void)updateNetworkStatus;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;
- (void)willDisappear;
- (void)willDisshow;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

