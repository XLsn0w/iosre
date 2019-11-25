//
//  ELSettingViewController.m
//  ELWeChat
//
//  Created by Eli on 2018/10/9.
//  Copyright © 2018年 eli. All rights reserved.
//

#import "ELSettingViewController.h"
#import <objc/runtime.h>
#import "ELWeChatConfig.h"
#import "ELWeChatHeaderinfo.h"
#import "WBMultiSelectGroupsViewController.h"
#import "WechatMapViewController.h"

@interface ELSettingViewController ()<MultiSelectGroupsViewControllerDelegate>

@property (nonatomic, strong) MMTableViewInfo *tableViewInfo;

@end

@implementation ELSettingViewController

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        _tableViewInfo = [[objc_getClass("MMTableViewInfo") alloc] initWithFrame:[UIScreen mainScreen].bounds style:UITableViewStyleGrouped];
    }
    return self;
}


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    //设置标题
    self.title = @"微信助手";
    
    //重新加载数据
    [self reloadTableViewData];
    
    MMTableView *tableView = [self.tableViewInfo getTableView];
    [self.view addSubview:tableView];
}

- (void)reloadTableViewData
{
    //清除所有的分组
    [self.tableViewInfo clearAllSection];
    //添加自动抢红包分组
    [self addRedEnvelopSection];
    //添加群管理分组
    [self addGroupManageSection];
    //添加防撤回分组
    [self addMessageSection];
    //添加修改步数分组
    [self addStepSection];
    //TODO：添加修改定位分组
    [self addEditLocationSection];
    
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    
    MMTableView *tableView = [self.tableViewInfo getTableView];
    [tableView reloadData];
    
}


/**
 添加修改定位分组
 */
- (void)addEditLocationSection
{
    //获取分组信息
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    //将修改定位cell添加到分组
    [sectionInfo addCell:[self addLocationSectionCell]];
    //判断是否开起了修改步数
    if ([ELAppManage sharedManage].appConfig.Location)
    {
        //添加修改定位cell到分组
        [sectionInfo addCell:[self addEditLocationSectionCell]];
    }
    //将分组给UITableView
    [self.tableViewInfo addSection:sectionInfo];
}


/**
 添加是否开起定位分组cell

 @return 是否开起定位cell
 */
- (MMTableViewCellInfo *)addLocationSectionCell
{
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(LocationClick:) target:self title:@"是否开启修改定位" on:[ELAppManage sharedManage].appConfig.Location];
}


/**
 添加修改定位分组cell
 
 @return 修改定位cell
 */
- (MMTableViewCellInfo *)addEditLocationSectionCell
{
    return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(EditLocation) target:self title:@"修改定位" accessoryType:1];
}

-(void)EditLocation
{
    WechatMapViewController *mapVC = [[WechatMapViewController alloc] init];
    MMUINavigationController *navigationController = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:mapVC];

    [self presentViewController:navigationController animated:YES completion:nil];
}


/**
 是否开起修改定位选择事件
 
 @param LocationSwitch 选择器对象
 */
- (void)LocationClick:(UISwitch *)LocationSwitch
{
    //设置配置文件中自动抢红包的值为选择器的值
    [ELAppManage sharedManage].appConfig.Location = LocationSwitch.on;
    //重新显示TableView数据
    [self reloadTableViewData];
}


/**
 添加修改步数分组
 */
- (void)addStepSection
{
    //获取分组信息
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    //将步数cell添加到分组
    [sectionInfo addCell:[self addStepSectionCell]];
    //判断是否开起了修改步数
    if ([ELAppManage sharedManage].appConfig.StepManage)
    {
        //添加输入步数cell到分组
        [sectionInfo addCell:[self addStepNumberSectionCell]];
    }
    //将分组给UITableView
    [self.tableViewInfo addSection:sectionInfo];
    
}


- (MMTableViewCellInfo *)addStepSectionCell
{
    
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(SetpClick:) target:self title:@"修改步数" on:[ELAppManage sharedManage].appConfig.StepManage];
    
}

- (void)SetpClick:(UISwitch *)setpSwitch
{
    [ELAppManage sharedManage].appConfig.StepManage = setpSwitch.on;
    
    [self reloadTableViewData];
}



- (MMTableViewCellInfo *)addStepNumberSectionCell
{
    
    
    WCDeviceBrandMgr *BrandMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("WCDeviceBrandMgr")];
    
    
    NSInteger LastSetp = [BrandMgr getLastM7Step];
    
    NSInteger curSetp = LastSetp > [ELAppManage sharedManage].appConfig.ResetStepNum ? LastSetp : [ELAppManage sharedManage].appConfig.ResetStepNum;
    
    
    return [objc_getClass("MMTableViewCellInfo")  normalCellForSel:@selector(setStepNumber) target:self title:@"微信运动步数" rightValue:[NSString stringWithFormat:@"%ld",(long)curSetp] accessoryType:1];
}


/**
 添加自动抢红包组
 */
- (void)addRedEnvelopSection
{
    //获取分组
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    //添加自动抢红包cell
    [sectionInfo addCell:[self addRedEnvelopSectionCell]];
    //判断是否开起自动抢红包
    if ([ELAppManage sharedManage].appConfig.autoRedEnvelop)
    {
        //TODO：添加延时抢红包cell
        [sectionInfo addCell:[self addDelayRedEnvelopSectionCell]];
        //添加黑名单cell
        [sectionInfo addCell:[self addBlackListCell]];
    }
    //将分组添加到TableView
    [self.tableViewInfo addSection:sectionInfo];

}


/**
 添加延时抢红包cell

 @return 延时抢红包cell
 */
- (MMTableViewCellInfo *)addDelayRedEnvelopSectionCell
{
    float sec = [ELAppManage sharedManage].appConfig.Sec;
    return [objc_getClass("MMTableViewCellInfo")  normalCellForSel:@selector(setSecNumber) target:self title:@"延时抢红包" rightValue:[NSString stringWithFormat:@"%.1f",sec] accessoryType:1];
}


/**
 添加是否开起自动抢红包cell

 @return 自动抢红包cell
 */
- (MMTableViewCellInfo *)addRedEnvelopSectionCell
{
    
     return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(RedEnvelopClick:) target:self title:@"自动抢红包" on:[ELAppManage sharedManage].appConfig.autoRedEnvelop];
    
}


/**
 添加黑名单cell

 @return 黑名单cell
 */
- (MMTableViewCellInfo *)addBlackListCell
{
    
    if ([ELAppManage sharedManage].appConfig.blackList.count == 0) {
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:@"已关闭" accessoryType:1];
    } else {
        NSString *blackListCountStr = [NSString stringWithFormat:@"已选择 %lu 个群", (unsigned long)[ELAppManage sharedManage].appConfig.blackList.count];
        return [objc_getClass("MMTableViewCellInfo") normalCellForSel:@selector(showBlackList) target:self title:@"群聊过滤" rightValue:blackListCountStr accessoryType:1];
    }

    
}


/**
 显示黑名单列表
 */
- (void)showBlackList {
    WBMultiSelectGroupsViewController *contactsViewController = [[WBMultiSelectGroupsViewController alloc] initWithBlackList:[ELAppManage sharedManage].appConfig.blackList];
    contactsViewController.delegate = self;
    
    MMUINavigationController *navigationController = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:contactsViewController];
    
    [self presentViewController:navigationController animated:YES completion:nil];
}


/**
 自动抢红包选择点击事件

 @param RedEnvelopSwitch 选择器对象
 */
- (void)RedEnvelopClick:(UISwitch *)RedEnvelopSwitch
{
    //设置配置文件中自动抢红包的值为选择器的值
    [ELAppManage sharedManage].appConfig.autoRedEnvelop = RedEnvelopSwitch.on;
    //重新显示TableView数据
    [self reloadTableViewData];
}

- (void)addGroupManageSection
{
    
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    
    [sectionInfo addCell:[self addGroupManageSectionCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}


/**
 添加群管理cell

 @return 群管理cell
 */
- (MMTableViewCellInfo *)addGroupManageSectionCell
{
    
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(GroupManageClick:) target:self title:@"群管理" on:[ELAppManage sharedManage].appConfig.groupManage];
    
}


/**
 是否开起群管理s选择事件

 @param GroupManageSwitch 选择器对象
 */
- (void)GroupManageClick:(UISwitch *)GroupManageSwitch
{
    //将选择器对象的值给配置文件用于保存配置信息
    [ELAppManage sharedManage].appConfig.groupManage = GroupManageSwitch.on;
}


- (void)addMessageSection
{
    
    MMTableViewSectionInfo *sectionInfo = [objc_getClass("MMTableViewSectionInfo") sectionInfoDefaut];
    
    [sectionInfo addCell:[self addMessageSectionCell]];
    
    [self.tableViewInfo addSection:sectionInfo];
}


/**
 添加消息防撤回cell

 @return 防撤回cell
 */
- (MMTableViewCellInfo *)addMessageSectionCell
{
    
    return [objc_getClass("MMTableViewCellInfo") switchCellForSel:@selector(MessageClick:) target:self title:@"消息防撤回" on:[ELAppManage sharedManage].appConfig.Message];
    
}



- (void)MessageClick:(UISwitch *)MessageSwitch
{
    
    [ELAppManage sharedManage].appConfig.Message = MessageSwitch.on;
    
    
}


- (void)setStepNumber
{

    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"微信运动设置" message:@"微信最大步数98800,请输入比当前步数更大的步数" preferredStyle:UIAlertControllerStyleAlert];
    
    [alertController addTextFieldWithConfigurationHandler:^(UITextField * _Nonnull textField) {
        textField.placeholder = @"请输入步数";
        textField.keyboardType = UIKeyboardTypePhonePad;
    }];
    
    UIAlertAction *sure = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
        NSString *step = alertController.textFields[0].text;
        
        [ELAppManage sharedManage].appConfig.ResetStepNum = [step integerValue];
        
        [self reloadTableViewData];
        
    }];
    
    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
    }];

    [alertController addAction:cancel];
    
    [alertController addAction:sure];
    
    [self presentViewController:alertController animated:YES completion:nil];
}


- (void)setSecNumber
{
    
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"延时抢红包设置" message:@"请输入延时时长，单位为 秒 （比如：输入1，那么为1秒）" preferredStyle:UIAlertControllerStyleAlert];
    
    [alertController addTextFieldWithConfigurationHandler:^(UITextField * _Nonnull textField) {
        textField.placeholder = @"请输入时长";
        textField.keyboardType = UIKeyboardTypeDecimalPad;
    }];
    
    UIAlertAction *sure = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
        NSString *sec = alertController.textFields[0].text;
        
        [ELAppManage sharedManage].appConfig.Sec = [sec floatValue];
        
        [self reloadTableViewData];
        
    }];
    
    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
    }];
    
    [alertController addAction:cancel];
    
    [alertController addAction:sure];
    
    [self presentViewController:alertController animated:YES completion:nil];
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - MultiSelectGroupsViewControllerDelegate
- (void)onMultiSelectGroupCancel {
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (void)onMultiSelectGroupReturn:(NSArray *)arg1 {
    [ELAppManage sharedManage].appConfig.blackList = arg1;
    
    [self reloadTableViewData];
    
    [self dismissViewControllerAnimated:YES completion:nil];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
