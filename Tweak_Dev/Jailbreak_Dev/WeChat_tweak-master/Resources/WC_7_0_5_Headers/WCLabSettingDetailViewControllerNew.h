//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCLabSettingDetailFooterViewDelegate.h"
#import "WCLabSettingDetailImagesCellDelegate.h"
#import "WCLabSettingDetailVisitWeAppCellDelegate.h"

@class NSString, UISwitch, UITableView, WCLabsAppItem;

@interface WCLabSettingDetailViewControllerNew : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCLabSettingDetailFooterViewDelegate, WCLabSettingDetailVisitWeAppCellDelegate, WCLabSettingDetailImagesCellDelegate>
{
    WCLabsAppItem *_labItem;
    UITableView *_tableView;
    UISwitch *_labSwitch;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)genFeedbackFromStr;
- (void)initTableView;
- (id)initWithLabItem:(id)arg1;
@property(nonatomic) __weak UISwitch *labSwitch; // @synthesize labSwitch=_labSwitch;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickExposeButton:(id)arg1;
- (void)onClickImage:(id)arg1;
- (void)onClickVisisWeAppWithLabItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

