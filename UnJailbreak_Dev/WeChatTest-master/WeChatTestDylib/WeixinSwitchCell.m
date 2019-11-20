//
//  WeixinSwitchCell.m
//  WeixinHookDylib
//
//  Created by caony on 2018/5/18.
//  Copyright © 2018年 com.guazi. All rights reserved.
//

#import "WeixinSwitchCell.h"

@interface WeixinSwitchCell ()<UITextFieldDelegate>

@property (nonatomic, strong) UISwitch *openSwitch;
@property (nonatomic, strong) UITextField *timeTextField;

@end

@implementation WeixinSwitchCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self.openSwitch addTarget:self action:@selector(openAction:) forControlEvents:UIControlEventValueChanged];
    }
    return self;
}

- (void)setCellType:(SettingCellType)cellType{
    _cellType = cellType;
    if (cellType == SettingCellTypeSwitch) {
        self.accessoryView = self.openSwitch;
    } else if (cellType == SettingCellTypeTextField) {
        self.accessoryView = self.timeTextField;
    } else {
        self.accessoryView = nil;
    }
    
}

- (void)setOpen:(BOOL)open{
    _open = open;
    _openSwitch.on = _open;
    NSDictionary *dict;
    NSArray *arr = [dict allKeys];
    for (int i = 0; i< arr.count; i++) {
        NSLog(@"%@:%@",arr[i],dict[arr[i]]);
    }
}

- (void)setDelayTime:(NSString *)delayTime{
    _delayTime = delayTime;
    _timeTextField.text = _delayTime;
}

- (void)openAction:(UISwitch *)openSwitch{
    openSwitch.on = !openSwitch.on;
    [WXUserDefault setBool:openSwitch.on forKey:WXOpenSwitchKey];
    [WXUserDefault synchronize];
}

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (UISwitch *)openSwitch{
    if (!_openSwitch) {
        _openSwitch = [UISwitch new];
    }
    return _openSwitch;
}

- (void)textFieldDidEndEditing:(UITextField *)textField{
    if ([textField.text floatValue]) {
        [WXUserDefault setFloat:[textField.text floatValue] forKey:WXAutoOpenRedEnvelopesDelayTimeKey];
        [WXUserDefault synchronize];
    }
}

- (UITextField *)timeTextField{
    if (!_timeTextField) {
        _timeTextField = [[UITextField alloc] initWithFrame:CGRectMake(0, 7, 200, 30)];
        _timeTextField.borderStyle = UITextBorderStyleRoundedRect;
        _timeTextField.placeholder = @"请设置抢红包的延时";
        _timeTextField.font = [UIFont systemFontOfSize:17];
        _timeTextField.textAlignment = NSTextAlignmentRight;
        _timeTextField.textColor = [UIColor redColor];
        _timeTextField.text = @"0.5";
        _timeTextField.delegate = self;
    }
    return _timeTextField;
}

@end
