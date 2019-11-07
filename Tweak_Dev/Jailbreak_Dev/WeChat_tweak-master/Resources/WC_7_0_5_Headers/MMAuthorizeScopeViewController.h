//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMAuthorizeScopeTopView, MMTableView, NSArray, NSMutableArray, NSString, OauthScopeInfo, UIButton, UIView;

@interface MMAuthorizeScopeViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _fromScene;
    NSString *_appName;
    NSString *_iconUrl;
    OauthScopeInfo *_scopeInfo;
    id <MMAuthorizeViewControllerDelegate> _delegate;
    NSMutableArray *_scopeInfoList;
    MMTableView *_tableView;
    MMAuthorizeScopeTopView *_tableHeaderView;
    UIView *_tableFooterView;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    NSMutableArray *_arrSelect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSMutableArray *arrSelect; // @synthesize arrSelect=_arrSelect;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
@property(readonly, nonatomic) NSArray *comfirmScopeInfoList;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void)initData;
- (void)initNavigationBar;
- (void)initSubViews;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (id)initWithAppName:(id)arg1 iconUrl:(id)arg2 scopeInfoList:(id)arg3;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)layoutTableFooterView;
- (void)layoutTableHeaderView;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void)onReturn;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
@property(retain, nonatomic) NSMutableArray *scopeInfoList; // @synthesize scopeInfoList=_scopeInfoList;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MMAuthorizeScopeTopView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

