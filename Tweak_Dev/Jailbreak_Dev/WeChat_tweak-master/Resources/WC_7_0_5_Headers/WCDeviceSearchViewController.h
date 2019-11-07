//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCDeviceSearchLogicDelegate.h"

@class MMLoadingView, MMTableView, NSMutableArray, NSString, UILabel, WCDevice, WCDeviceSearchLogic;

@interface WCDeviceSearchViewController : MMUIViewController <WCDeviceSearchLogicDelegate, IWCDeviceBrandMgrExt, ILinkEventExt, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    UILabel *m_headerLbl;
    MMLoadingView *m_loadingView;
    NSMutableArray *m_deviceList;
    unsigned long long m_scene;
    WCDeviceSearchLogic *m_searchLogic;
    WCDevice *m_fliterDevice;
    _Bool isViewFirstLoaded;
    unsigned long long _scene;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getFooterSettingRichTextView;
- (void)getLoadingCell:(id)arg1;
- (id)init;
- (void)initFooterView;
- (void)initLoadingView;
- (void)initTableView;
- (void)initView;
- (id)initWithDevice:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithScene:(unsigned long long)arg1;
- (_Bool)isBLEConnected;
- (_Bool)isWifiConnected;
- (void)jumpToDeviceBrandContactProfile:(id)arg1;
- (void)jumpToMyDeviceProfileWithDevice:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBack:(id)arg1;
- (void)onDeviceFound:(id)arg1;
- (void)onHelpBtnClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)reloadData;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)startScan;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

