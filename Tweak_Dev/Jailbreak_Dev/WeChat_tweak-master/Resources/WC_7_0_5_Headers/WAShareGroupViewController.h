//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactLabelMgrExt.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCreateNewGroupDemoViewControllerDelegate.h"
#import "WCFacadeExt.h"

@class MMTableView, NSArray, NSMutableArray, NSMutableSet, NSString, WCCreateNewGroupDemoViewController;

@interface WAShareGroupViewController : MMUIViewController <WCCreateNewGroupDemoViewControllerDelegate, WCFacadeExt, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    NSMutableArray *m_arrAllLabelName;
    MMTableView *m_tableView;
    _Bool m_bShowDetail;
    WCCreateNewGroupDemoViewController *newGroup;
    NSMutableSet *m_contactSetImportFromGroup;
    NSMutableSet *m_contactSetNotImportFromGroup;
    int m_privacy;
    unsigned int _createTagEventId;
    id <WAShareGroupViewControllerDelegate> m_delegate;
    NSString *m_title;
    NSArray *m_cells;
    NSMutableSet *m_labelNameSet;
    NSArray *m_contactList;
    NSString *_createTagName;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) unsigned int createTagEventId; // @synthesize createTagEventId=_createTagEventId;
@property(retain, nonatomic) NSString *createTagName; // @synthesize createTagName=_createTagName;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)editContactLabels;
- (int)getCellType:(id)arg1;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)init;
- (void)initData;
- (void)initView;
- (id)initWithCells:(id)arg1 title:(id)arg2;
- (id)initWithCells:(id)arg1 title:(id)arg2 privacy:(int)arg3 labelNameList:(id)arg4 contactList:(id)arg5;
- (_Bool)isSelected:(int)arg1 postPrivacy:(int)arg2 indexPath:(id)arg3;
- (id)loadAllTagNameList;
@property(retain, nonatomic) NSArray *m_cells; // @synthesize m_cells;
@property(retain, nonatomic) NSArray *m_contactList; // @synthesize m_contactList;
@property(nonatomic) __weak id <WAShareGroupViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableSet *m_labelNameSet; // @synthesize m_labelNameSet;
@property(nonatomic) int m_privacy; // @synthesize m_privacy;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllTagNameUpdate;
- (void)onDataChange;
- (void)onDone;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onReturn;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)onWCGroupUpdated;
- (void)reloadAllTableView;
- (void)selectContacts;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

