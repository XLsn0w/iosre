//
//  ELAppManange.m
//  ELWeChatDylib
//
//  Created by Eli on 2018/10/10.
//  Copyright © 2018年 eli. All rights reserved.
//

#import "ELAppManage.h"

#import <objc/runtime.h>
@implementation ELAppManage

+(id)sharedManage
{
    static ELAppManage *manage = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manage = [ELAppManage new];
    });
    return manage;
}

- (id)init
{
    if (self = [super init])
    {
        //读取保存在本地的App配置信息
        self.appConfig = [NSKeyedUnarchiver unarchiveObjectWithFile:kAppDataPath];
        //判断本地是否有配置信息
        if (!self.appConfig)
        {
            //没有配置信息，初始化
            self.appConfig = [[ELWeChatConfig alloc] init];
        }
        
        
        //获取本地红包信息
        self.redInfo = [NSKeyedUnarchiver unarchiveObjectWithFile:kRedInfoPath];
    }
    
    return self;
    
}






@end
