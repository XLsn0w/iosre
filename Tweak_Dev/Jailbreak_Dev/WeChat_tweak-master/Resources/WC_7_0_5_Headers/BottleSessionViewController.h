//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FloatBottleContentLogicDelegate.h"
#import "IBottleSessionExt.h"
#import "IMMNewSessionMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSArray, NSMutableDictionary, NSString, UILabel;

@interface BottleSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IBottleSessionExt, FloatBottleContentLogicDelegate, IMMNewSessionMgrExt>
{
    MMTableView *m_tableView;
    UILabel *m_tipLabel;
    NSMutableDictionary *m_dicSessionCellCache;
    NSArray *m_arrNewArriveList;
    _Bool m_bFromMainFrame;
}

- (void).cxx_destruct;
- (void)BottleNeedReload;
- (void)BottleSessionChanged:(id)arg1;
- (void)OnLeave:(id)arg1;
- (void)UpdateHeaderView;
- (void)UpdateTableView;
- (void)UpdateTipLabel;
- (void)UpdateTitle;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)deleteThrowBackBottle:(id)arg1;
- (void)goToInfoViewController:(id)arg1;
- (id)init;
- (void)initData;
- (void)initRightButton;
- (void)initTableView;
- (void)initView;
- (_Bool)isNewArrive:(id)arg1;
@property(retain, nonatomic) NSArray *m_arrNewArriveList; // @synthesize m_arrNewArriveList;
@property(nonatomic) _Bool m_bFromMainFrame; // @synthesize m_bFromMainFrame;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onEditContact:(id)arg1;
- (void)onJumpToBottleMainFrame:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)pluginsChanged:(id)arg1;
- (void)reloadNewArrList;
- (void)showTips:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateLeftBarButtonItem;
- (void)updateRightButtonState;
- (void)updateSessionByName:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

