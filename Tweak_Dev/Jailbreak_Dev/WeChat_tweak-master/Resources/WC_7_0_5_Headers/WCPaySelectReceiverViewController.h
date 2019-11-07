//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSMutableArray, NSString, UILabel, WCPayTransToBankCardReceiver, WCUIAlertView;

@interface WCPaySelectReceiverViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    MMTableView *m_tableView;
    id <WCPaySelectReceiverViewControllerDelegate> _delegate;
    NSMutableArray *_m_otherHistoryArray;
    NSMutableArray *_m_myHistoryArray;
    WCUIAlertView *_m_alertView;
    WCPayTransToBankCardReceiver *_m_receiver;
    UILabel *_m_emptyTipsLabel;
}

- (void).cxx_destruct;
- (void)OnCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmComment;
- (void)confirmDeleteRecord:(id)arg1;
- (void)confirmSetRemark:(id)arg1 remark:(id)arg2;
@property(nonatomic) __weak id <WCPaySelectReceiverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isDataEmpty;
- (void)layoutCell:(id)arg1 candidate:(id)arg2;
@property(retain, nonatomic) WCUIAlertView *m_alertView; // @synthesize m_alertView=_m_alertView;
@property(retain, nonatomic) UILabel *m_emptyTipsLabel; // @synthesize m_emptyTipsLabel=_m_emptyTipsLabel;
@property(retain, nonatomic) NSMutableArray *m_myHistoryArray; // @synthesize m_myHistoryArray=_m_myHistoryArray;
@property(retain, nonatomic) NSMutableArray *m_otherHistoryArray; // @synthesize m_otherHistoryArray=_m_otherHistoryArray;
@property(retain, nonatomic) WCPayTransToBankCardReceiver *m_receiver; // @synthesize m_receiver=_m_receiver;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateEmptyTipsLabel;
- (void)updateNavigationBar;
- (void)updateTableView;
- (void)updateView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

