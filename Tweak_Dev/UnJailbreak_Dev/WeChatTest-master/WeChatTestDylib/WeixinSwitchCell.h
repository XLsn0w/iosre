//
//  WeixinSwitchCell.h
//  WeixinHookDylib
//
//  Created by caony on 2018/5/18.
//  Copyright © 2018年 com.guazi. All rights reserved.
//

#import <UIKit/UIKit.h>

#define WXUserDefault [NSUserDefaults standardUserDefaults]
#define WXOpenSwitchKey @"WXOpenSwitchKey"
#define WXAutoOpenRedEnvelopesDelayTimeKey @"WXAutoOpenRedEnvelopesDelayTimeKey"

typedef enum : NSUInteger {
    SettingCellTypeNormal,
    SettingCellTypeSwitch,
    SettingCellTypeTextField,
} SettingCellType;

@interface WeixinSwitchCell : UITableViewCell

@property (nonatomic, assign) SettingCellType cellType;
@property (nonatomic, assign, getter=isOpen) BOOL open;
@property (nonatomic, copy) NSString *delayTime;

@end
