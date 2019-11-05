//
//  RedEnvSettingMgr.h
//  autoGetRedEnv
//
//  Created by jianglan.jl on 17/1/15.
//
//

#import <Foundation/Foundation.h>

@interface RedEnvSettingMgr : NSObject

+ (instancetype)shareInstance;
+ (void)popupSettingView;

@property(nonatomic, readonly) NSString *redEnvSettingSecret;        // 触发红包设置口令
@property(nonatomic, assign) BOOL redEnvPluginEnable;                // 是否开启抢红包插件
@property(nonatomic, assign) BOOL canGetRedEnvForMyself;             // 是否抢自己的红包（非群里）
@property(nonatomic, assign) BOOL canGetRedEnvForMySelfFromChatroom; // 是否抢群里自己发的红包
@property(nonatomic, assign) NSInteger timeInterval;            // 抢红包时间间隔（单位：秒）

@end
