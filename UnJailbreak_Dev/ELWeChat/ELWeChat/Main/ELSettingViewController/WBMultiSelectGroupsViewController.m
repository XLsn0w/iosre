//
//  WBMultiSelectGroupsViewController.m
//  WeChatRedEnvelop
//
//  Created by 杨志超 on 2017/2/24.
//  Copyright © 2017年 swiftyper. All rights reserved.
//

#import "WBMultiSelectGroupsViewController.h"
#import "ELWeChatHeaderinfo.h"
#import <objc/runtime.h>

@interface WBMultiSelectGroupsViewController () <ContactSelectViewDelegate>

//自定义选择视图
@property (strong, nonatomic) ContactSelectView *selectView;
//黑名单数组
@property (strong, nonatomic) NSArray *blackList;

@end

@implementation WBMultiSelectGroupsViewController

- (instancetype)initWithBlackList:(NSArray *)blackList {
    if (self = [super initWithNibName:nil bundle:nil]) {
        _blackList = blackList;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self initTitleArea];
    [self initSelectView];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    MMServiceCenter *serviceCenter = [objc_getClass("MMServiceCenter") defaultCenter];
    CContactMgr *contactMgr = [serviceCenter getService:objc_getClass("CContactMgr")];
    
    for (NSString *contactName in self.blackList) {
        CContact *contact = [contactMgr getContactByName:contactName];
        [self.selectView addSelect:contact];
    }
}


/**
 初始化标题区域
 */
- (void)initTitleArea {
    //设置左上角按钮及点击事件
    self.navigationItem.leftBarButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:@"取消" target:self action:@selector(onCancel:) style:0];
    //设置右上角按钮 格式 确定（%lu）
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:self.blackList.count];
    //设置标题
    self.title = @"黑名单";
    
    //设置标题的字体及字体大小
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:18.0]}];
}


/**
 设置右上角按钮及点击事件

 @param selectCount 黑名单数量
 @return UIBarButtonItem 右上角按钮
 */
- (UIBarButtonItem *)rightBarButtonWithSelectCount:(unsigned long)selectCount {
    
    UIBarButtonItem *barButtonItem;
    //判断黑名单数量是否为0
    if (selectCount == 0) {
        //如果为0 设置按钮为确定 及 点击事件为onDone
        barButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:@"确定" target:self action:@selector(onDone:) style:2];
    } else {
        //如果不为0 设置按钮为确定(%lu) 及点击事件为onDone
        NSString *title = [NSString stringWithFormat:@"确定(%lu)", selectCount];
        barButtonItem = [objc_getClass("MMUICommonUtil") getBarButtonWithTitle:title target:self action:@selector(onDone:) style:4];
    }
    return barButtonItem;
}


/**
 取消事件

 @param item 1
 */
- (void)onCancel:(UIBarButtonItem *)item {
    if ([self.delegate respondsToSelector:@selector(onMultiSelectGroupCancel)]) {
        [self.delegate onMultiSelectGroupCancel];
    }
}


/**
 完成事件

 @param item 1
 */
- (void)onDone:(UIBarButtonItem *)item {
    if ([self.delegate respondsToSelector:@selector(onMultiSelectGroupReturn:)]) {
        NSArray *blacklist = [[self.selectView.m_dicMultiSelect allKeys] copy];
        [self.delegate onMultiSelectGroupReturn:blacklist];
    }
}


/**
 初始化选择视图
 */
- (void)initSelectView {
    //获取选择视图并初始化
    self.selectView = [[objc_getClass("ContactSelectView") alloc] initWithFrame:CGRectMake(0, self.navigationController.navigationBar.frame.size.height+[[UIApplication sharedApplication] statusBarFrame].size.height, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height) delegate:self];
    
    self.selectView.m_uiGroupScene = 5;
    self.selectView.m_bMultiSelect = YES;
    [self.selectView initData:5];
    [self.selectView initView];
    
    [self.view addSubview:self.selectView];
}

#pragma mark - ContactSelectViewDelegate

/**
 选择群组的点击事件

 @param arg1 点击的对象
 */
- (void)onSelectContact:(CContact *)arg1 {
    //将已选择的群组的数量显示在右上角
    self.navigationItem.rightBarButtonItem = [self rightBarButtonWithSelectCount:[self getTotalSelectCount]];
}


/**
 获取总的选择的群组

 @return 选择的群组的数量
 */
- (unsigned long)getTotalSelectCount {
    return (unsigned long)[self.selectView.m_dicMultiSelect count];
}

@end
