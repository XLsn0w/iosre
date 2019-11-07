//
//  LLSettingEntryController.m
//  WeChatRedEnvelopesHelper
//
//  Created by EzioChiu on 2018/2/28.
//  Copyright © 2018年 EzioChiu. All rights reserved.
//

#import "LLSettingEntryController.h"
#import "WCRedEnvelopesHelper.h"
#import "LLRedEnvelopesMgr.h"
#import "LLSettingController.h"

@interface LLSettingEntryController ()

@property (nonatomic, strong) MMTableViewInfo *tableViewInfo;

@end

@implementation LLSettingEntryController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self setNavigationBar];
    [self setTableView];
    [self reloadTableData];
}

- (void)setNavigationBar{
    self.title = @"微信助手设置";
}

- (void)setTableView{
    _tableViewInfo = [[NSClassFromString(@"MMTableViewInfo") alloc] initWithFrame:[UIScreen mainScreen].bounds style:0];
    [self.view addSubview:[_tableViewInfo getTableView]];
    [_tableViewInfo setDelegate:self];
    if (@available(iOS 11, *)) {
        [_tableViewInfo getTableView].contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAlways;
    }else{
        self.automaticallyAdjustsScrollViewInsets = YES;
    }
}

- (void)reloadTableData{
    MMTableViewCellInfo *redEnvelopesCell = [NSClassFromString(@"MMTableViewCellInfo") normalCellForSel:@selector(onRedEnvelopesCellClicked) target:self title:@"微信助手设置" rightValue:nil accessoryType:1];
    MMTableViewCellInfo *totalAssistAmountCell = [NSClassFromString(@"MMTableViewCellInfo") normalCellForSel:nil target:self title:@"累计帮您领取红包" rightValue:[NSString stringWithFormat:@"%.2f元",[LLRedEnvelopesMgr shared].totalAssistAmount / 100.0f] accessoryType:0];

    MMTableViewSectionInfo *wechatSection = [NSClassFromString(@"MMTableViewSectionInfo") sectionInfoDefaut];
    [wechatSection setHeaderView:[[UIView alloc] initWithFrame:CGRectMake(0,0,0,20)]];
    [wechatSection addCell:redEnvelopesCell];
    [wechatSection addCell:totalAssistAmountCell];

    MMTableViewCellInfo *githubCell = [NSClassFromString(@"MMTableViewCellInfo") normalCellForSel:@selector(onGithubCellClicked) target:self title:@"我的Github" rightValue:@"欢迎⭐️" accessoryType:1];

    MMTableViewSectionInfo *aboutMeSection = [NSClassFromString(@"MMTableViewSectionInfo") sectionInfoDefaut];
    [aboutMeSection setHeaderView:[[UIView alloc] initWithFrame:CGRectMake(0,0,0,20)]];
    [aboutMeSection addCell:githubCell];
    
    [_tableViewInfo clearAllSection];
     [_tableViewInfo addSection:wechatSection];
    [_tableViewInfo addSection:aboutMeSection];

    [[_tableViewInfo getTableView] reloadData];
}

- (void)onRedEnvelopesCellClicked{
    LLSettingController *settingVC = [[LLSettingController alloc] init];
    [self.navigationController PushViewController:settingVC animated:YES];
}

- (void)onGithubCellClicked{
    NSURL *myGithubURL = [NSURL URLWithString:@"https://github.com/eziochiu/WeChatRedEnvelopes"];
    MMWebViewController *githubWebVC = [[NSClassFromString(@"MMWebViewController") alloc] initWithURL:myGithubURL presentModal:NO extraInfo:nil delegate:nil];
    [self.navigationController PushViewController:githubWebVC animated:YES];
}

@end
