//
//  RedEnvSettingMgr.m
//  autoGetRedEnv
//
//  Created by jianglan.jl on 17/1/15.
//
//

#import "RedEnvSettingMgr.h"
#import <UIKit/UIKit.h>
#import "RedEnvSettingView.h"

#define RedEnvSettingFileName @"RedEnvPluginSettings.txt"

// 触发红包设置口令
static NSString * const kRedEnvSettingSecret = @"波若波罗密";

@implementation RedEnvSettingMgr

+ (instancetype)shareInstance
{
    static RedEnvSettingMgr *SettingMgr = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        SettingMgr = [[RedEnvSettingMgr alloc] init];
        [SettingMgr loadRedEnvSetting];
    });
    return SettingMgr;
}

- (void)loadRedEnvSetting
{
    _redEnvPluginEnable = [[self loadRedEnvSettingValueForKey:@"RedEnvPluginEnable"] boolValue];
    
    _canGetRedEnvForMyself = [[self loadRedEnvSettingValueForKey:@"CanGetRedEnvForMyself"] boolValue];
    
    _canGetRedEnvForMySelfFromChatroom = [[self loadRedEnvSettingValueForKey:@"CanGetRedEnvForMySelfFromChatroom"] boolValue];
    
    _timeInterval = [[self loadRedEnvSettingValueForKey:@"TimeInterval"] intValue];
}

- (NSString *)redEnvSettingSecret
{
    return kRedEnvSettingSecret;
}

- (void)setRedEnvPluginEnable:(BOOL)redEnvPluginEnable
{
    _redEnvPluginEnable = redEnvPluginEnable;
    [self saveRedEnvSettingValue:[NSNumber numberWithBool:redEnvPluginEnable] forKey:@"RedEnvPluginEnable"];
}

- (void)setCanGetRedEnvForMyself:(BOOL)canGetRedEnvForMyself
{
    _canGetRedEnvForMyself = canGetRedEnvForMyself;
    [self saveRedEnvSettingValue:[NSNumber numberWithBool:canGetRedEnvForMyself] forKey:@"CanGetRedEnvForMyself"];
}

- (void)setCanGetRedEnvForMySelfFromChatroom:(BOOL)canGetRedEnvForMySelfFromChatroom
{
    _canGetRedEnvForMySelfFromChatroom = canGetRedEnvForMySelfFromChatroom;
    [self saveRedEnvSettingValue:[NSNumber numberWithBool:canGetRedEnvForMySelfFromChatroom] forKey:@"CanGetRedEnvForMySelfFromChatroom"];
}

- (void)setTimeInterval:(NSInteger)timeInterval
{
    _timeInterval = timeInterval;
    [self saveRedEnvSettingValue:[NSNumber numberWithInteger:timeInterval] forKey:@"TimeInterval"];
}

#pragma mark - Helper

- (void)saveRedEnvSettingValue:(id)value forKey:(NSString *)key
{
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docDir = [paths objectAtIndex:0];
    if (!docDir) {
        return;
    }
    NSString *path = [docDir stringByAppendingPathComponent:RedEnvSettingFileName];
    
    NSMutableDictionary *dict = nil;
    if ([[NSFileManager defaultManager] fileExistsAtPath:path]) {
        dict = [NSMutableDictionary dictionaryWithContentsOfFile:path];
    }
    else {
        dict = [[NSMutableDictionary alloc] init];
    }
    
    [dict setObject:value forKey:key];
    [dict writeToFile:path atomically:YES];
}

- (id)loadRedEnvSettingValueForKey:(NSString *)key
{
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docDir = [paths objectAtIndex:0];
    if (!docDir){
        return nil;
    }
    NSString *path = [docDir stringByAppendingPathComponent:RedEnvSettingFileName];
    NSDictionary *dict = [[NSDictionary alloc] initWithContentsOfFile:path];
    if(!dict) {
        return nil;
    }
    return [dict objectForKey:key];
}

#pragma mark - UI

+ (void)popupSettingView
{
    RedEnvSettingView *popupSettingView = [[RedEnvSettingView alloc] init];
    [popupSettingView showAnimated:YES];
}

@end
