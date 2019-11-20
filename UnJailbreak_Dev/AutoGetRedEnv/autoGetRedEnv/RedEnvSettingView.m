//
//  RedEnvSettingView.m
//  autoGetRedEnv
//
//  Created by jianglan.jl on 17/1/15.
//
//

#import "RedEnvSettingView.h"
#import "RedEnvSettingMgr.h"

#define STATUSBAR_HEIGHT 20
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

#define kPluginEnableSwitchTag                      1000
#define kCanGetRedEnvForMyselfSwitchTag             1001
#define kCanGetRedEnvForMySelfFromChatroomSwitchTag 1002
#define kGetRedEnvTimeIntervaTextFieldlTag          2000

@interface RedEnvSettingView ()

@property (nonatomic, assign, readonly) BOOL hasShown;
@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UIButton *contentButton;

@end

@implementation RedEnvSettingView

- (id)init
{
    if (self = [super init]) {
        [self loadUI];
    }
    return self;
}

- (void)loadUI
{
    //增加监听，当键盘出现或改变时收出消息
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillShow:)
                                                 name:UIKeyboardWillShowNotification
                                               object:nil];
    
    //增加监听，当键退出时收出消息
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillHide:)
                                                 name:UIKeyboardWillHideNotification
                                               object:nil];
    
    self.frame = CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT + STATUSBAR_HEIGHT);
    
    self.backgroundView = [[UIView alloc] initWithFrame:self.frame];
    self.backgroundView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.6];
    [self addSubview:self.backgroundView];
    
    self.contentView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH - 20 * 2, 240)];
    self.contentView.center = self.center;
    self.contentView.backgroundColor = [UIColor colorWithRed:245/255.0 green:245/255.0 blue:245/255.0 alpha:1];
    self.contentView.layer.cornerRadius = 3.0;
    self.contentView.layer.masksToBounds = YES;
    [self addSubview:self.contentView];
    
    // 功能控件
    UILabel *pluginEnableLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, 20, 180, 30)];
    pluginEnableLabel.text = @"是否开启抢红包插件";
    pluginEnableLabel.font = [UIFont systemFontOfSize:15];
    UISwitch *pluginEnableSwitch = [[UISwitch alloc] initWithFrame:CGRectMake(SCREEN_WIDTH - 110, 20, 0, 0)];
    pluginEnableSwitch.tag = kPluginEnableSwitchTag;
    pluginEnableSwitch.on = [RedEnvSettingMgr shareInstance].redEnvPluginEnable;
    [pluginEnableSwitch addTarget:self action:@selector(switchValueChanged:) forControlEvents:UIControlEventValueChanged];
    
    UILabel *canGetRedEnvForMyselfLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, 60, 180, 30)];
    canGetRedEnvForMyselfLabel.text = @"是否抢自己的红包";
    canGetRedEnvForMyselfLabel.font = [UIFont systemFontOfSize:15];
    UISwitch *canGetRedEnvForMyselfSwitch = [[UISwitch alloc] initWithFrame:CGRectMake(SCREEN_WIDTH - 110, 60, 0, 0)];
    canGetRedEnvForMyselfSwitch.tag = kCanGetRedEnvForMyselfSwitchTag;
    canGetRedEnvForMyselfSwitch.on = [RedEnvSettingMgr shareInstance].canGetRedEnvForMyself;
    
    UILabel *canGetRedEnvForMySelfFromChatroomLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, 100, 180, 30)];
    canGetRedEnvForMySelfFromChatroomLabel.text = @"是否抢群里自己发的红包";
    canGetRedEnvForMySelfFromChatroomLabel.font = [UIFont systemFontOfSize:15];
    UISwitch *canGetRedEnvForMySelfFromChatroomSwitch = [[UISwitch alloc] initWithFrame:CGRectMake(SCREEN_WIDTH - 110, 100, 0, 0)];
    canGetRedEnvForMySelfFromChatroomSwitch.tag = kCanGetRedEnvForMySelfFromChatroomSwitchTag;
    canGetRedEnvForMySelfFromChatroomSwitch.on = [RedEnvSettingMgr shareInstance].canGetRedEnvForMySelfFromChatroom;
    
    UILabel *desLabel1 = [[UILabel alloc] initWithFrame:CGRectMake(20, 150, 0, 30)];
    desLabel1.text = @"收到红包时，";
    desLabel1.font = [UIFont systemFontOfSize:15];
    [desLabel1 sizeToFit];
    UITextField *timeTextField = [[UITextField alloc] initWithFrame:CGRectMake(12 + desLabel1.frame.size.width + 5, 144, 60, 30)];
    timeTextField.text = [NSString stringWithFormat:@"%ld", (long)[RedEnvSettingMgr shareInstance].timeInterval];
    timeTextField.font = [UIFont systemFontOfSize:15];
    timeTextField.textAlignment = NSTextAlignmentCenter;
    timeTextField.tag = kGetRedEnvTimeIntervaTextFieldlTag;
    timeTextField.borderStyle = UITextBorderStyleRoundedRect;
    timeTextField.keyboardType = UIKeyboardTypeNumberPad;
    UILabel *desLabel2 = [[UILabel alloc] initWithFrame:CGRectMake(timeTextField.frame.origin.x + timeTextField.frame.size.width + 5, 150, 0, 30)];
    desLabel2.text = @"秒后开抢。";
    desLabel2.font = [UIFont systemFontOfSize:15];
    [desLabel2 sizeToFit];
    
    [self.contentView addSubview:pluginEnableLabel];
    [self.contentView addSubview:pluginEnableSwitch];
    [self.contentView addSubview:canGetRedEnvForMyselfLabel];
    [self.contentView addSubview:canGetRedEnvForMyselfSwitch];
    [self.contentView addSubview:canGetRedEnvForMySelfFromChatroomLabel];
    [self.contentView addSubview:canGetRedEnvForMySelfFromChatroomSwitch];
    [self.contentView addSubview:desLabel1];
    [self.contentView addSubview:timeTextField];
    [self.contentView addSubview:desLabel2];
    
    self.contentButton = [[UIButton alloc] initWithFrame:CGRectMake(0, self.contentView.frame.size.height - 45, self.contentView.frame.size.width, 45)];
    self.contentButton.backgroundColor = [UIColor colorWithRed:66/255.0 green:135/255.0 blue:255/255.0 alpha:1];
    self.contentButton.titleLabel.font = [UIFont systemFontOfSize:17];
    [self.contentButton setTitle:@"确定" forState:UIControlStateNormal];
    [self.contentButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [self.contentButton addTarget:self action:@selector(contentButtonClicked:) forControlEvents:UIControlEventTouchUpInside];
    [self.contentView addSubview:self.contentButton];
    
    [self checkUIValidity];
}

- (void)checkUIValidity
{
    UISwitch *pluginEnableSwitch = [self.contentView viewWithTag:kPluginEnableSwitchTag];
    UISwitch *canGetRedEnvForMyselfSwitch = [self.contentView viewWithTag:kCanGetRedEnvForMyselfSwitchTag];
    UISwitch *canGetRedEnvForMySelfFromChatroomSwitch = [self.contentView viewWithTag:kCanGetRedEnvForMySelfFromChatroomSwitchTag];
    UITextField *timeTextField = [self.contentView viewWithTag:kGetRedEnvTimeIntervaTextFieldlTag];
    
    canGetRedEnvForMyselfSwitch.enabled = pluginEnableSwitch.isOn;
    canGetRedEnvForMySelfFromChatroomSwitch.enabled = pluginEnableSwitch.isOn;
    timeTextField.enabled = pluginEnableSwitch.isOn;
}

- (void)showAnimated:(BOOL)animated
{
    if (!self.hasShown) {
        UIWindow *window = [UIApplication sharedApplication].keyWindow;
        [window endEditing:YES];
        [window addSubview:self];
        _hasShown = YES;
        
        if (animated) {
            self.contentView.alpha = 0.0;
            self.backgroundView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.0];
            [UIView animateWithDuration:0.25f animations:^{
                self.contentView.alpha = 1.0;
                self.backgroundView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.6];
            } completion:^(BOOL finished) {
            }];
        }
    }
}

- (void)dismissAnimated:(BOOL)animated
{
    if (self.hasShown) {
        if (animated) {
            [UIView animateWithDuration:0.25f animations:^{
                self.contentView.alpha = 0.0;
                self.backgroundView.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.0];
            } completion:^(BOOL finished) {
                _hasShown = NO;
                [self removeFromSuperview];
            }];
        }
        else {
            _hasShown = NO;
            [self removeFromSuperview];
        }
    }
}

#pragma mark - Actions

- (void)contentButtonClicked:(id)sender
{
    UISwitch *aSwitch = [self.contentView viewWithTag:kPluginEnableSwitchTag];
    [RedEnvSettingMgr shareInstance].redEnvPluginEnable = aSwitch.isOn;
    
    aSwitch = [self.contentView viewWithTag:kCanGetRedEnvForMyselfSwitchTag];
    [RedEnvSettingMgr shareInstance].canGetRedEnvForMyself = aSwitch.isOn;
    
    aSwitch = [self.contentView viewWithTag:kCanGetRedEnvForMySelfFromChatroomSwitchTag];
    [RedEnvSettingMgr shareInstance].canGetRedEnvForMySelfFromChatroom = aSwitch.isOn;
    
    UITextField *timeTextField = [self.contentView viewWithTag:kGetRedEnvTimeIntervaTextFieldlTag];
    [RedEnvSettingMgr shareInstance].timeInterval = timeTextField.text.integerValue;
    
    [self dismissAnimated:YES];
}

- (void)switchValueChanged:(UISwitch *)aSwitch
{
    if (kPluginEnableSwitchTag == aSwitch.tag) {
        [self checkUIValidity];
    }
}

//当键盘出现或改变时调用
- (void)keyboardWillShow:(NSNotification *)aNotification
{
    //获取键盘的高度
    NSDictionary *userInfo = [aNotification userInfo];
    NSValue *frameValue = [userInfo objectForKey:UIKeyboardFrameEndUserInfoKey];
    NSValue *durationValue = [userInfo objectForKey:UIKeyboardAnimationDurationUserInfoKey];
    CGFloat keyboardHeight = [frameValue CGRectValue].size.height;
    
    NSTimeInterval animationDuration = 0;
    [durationValue getValue:&animationDuration];
    [UIView animateWithDuration:animationDuration animations:^{
        CGPoint center = self.contentView.center;
        center.y = (SCREEN_HEIGHT - keyboardHeight) / 2;
        self.contentView.center = center;
    }];
}

//当键退出时调用
- (void)keyboardWillHide:(NSNotification *)aNotification
{
    NSDictionary *userInfo = [aNotification userInfo];
    NSValue *durationValue = [userInfo objectForKey:UIKeyboardAnimationDurationUserInfoKey];
    NSTimeInterval animationDuration = 0;
    [durationValue getValue:&animationDuration];
    [UIView animateWithDuration:animationDuration animations:^{
        CGPoint center = self.contentView.center;
        center.y = SCREEN_HEIGHT / 2;
        self.contentView.center = center;
    }];
}

@end
