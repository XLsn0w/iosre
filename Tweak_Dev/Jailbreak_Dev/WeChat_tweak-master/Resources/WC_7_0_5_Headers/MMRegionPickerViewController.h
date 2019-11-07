//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "LocationRetrieveDelegate.h"
#import "MMRegionPickerReturnDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LocationRetriever, MMRegionCodeMgr, MMTableView, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIViewController;

@interface MMRegionPickerViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate, MMRegionPickerReturnDelegate>
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    _Bool m_isInitRegionCode;
    NSString *m_selectedRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    NSArray *arrCurRegionCodes;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    _Bool m_bInCurrent;
    NSIndexPath *m_oCurrentIndexPath;
    _Bool _isTopLevel;
    int _regionType;
    UIViewController *topController;
    id <MMRegionPickerViewControllerDelegate> _delegate;
    id <MMRegionPickerReturnDelegate> _returnDelegate;
    NSMutableArray *_pickedRegionAry;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDataChange;
- (void)OnDone;
- (void)OnNeedReturn;
- (void)OnReturn;
@property(retain, nonatomic) NSArray *arrCurRegionCodes; // @synthesize arrCurRegionCodes;
- (void)clarifyCurrentPickedRegionsWith:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <MMRegionPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initData;
- (void)initTableView;
- (void)initView;
- (id)initWithArray:(id)arg1;
- (_Bool)isLocationRetrieving;
- (_Bool)isLocationSection:(long long)arg1;
@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
@property(retain, nonatomic) NSMutableArray *pickedRegionAry; // @synthesize pickedRegionAry=_pickedRegionAry;
@property(nonatomic) int regionType; // @synthesize regionType=_regionType;
@property(nonatomic) __weak id <MMRegionPickerReturnDelegate> returnDelegate; // @synthesize returnDelegate=_returnDelegate;
- (void)scrollToRegion:(id)arg1;
@property(retain, nonatomic) NSString *selectedRegionCode; // @synthesize selectedRegionCode=m_selectedRegionCode;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

