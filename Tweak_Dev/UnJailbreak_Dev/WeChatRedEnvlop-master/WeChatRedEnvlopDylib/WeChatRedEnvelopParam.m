//
//  WeChatRedEnvelopParam.m
//  WeChatRedEnvelop
//
//  Created by 杨志超 on 2017/1/22.
//  Copyright © 2017年 swiftyper. All rights reserved.
//

#import "WeChatRedEnvelopParam.h"

@implementation WeChatRedEnvelopParam

- (instancetype)initWithDictionary:(NSDictionary *)params {
    self = [super init];
    if (self) {
        self.msgType = [params objectForKey:@"msgType"];
        self.sendId = [params objectForKey:@"sendId"];
        self.channelId = [params objectForKey:@"channelId"];
        self.nickName = [params objectForKey:@"nickName"];
        self.headImg = [params objectForKey:@"headImg"];
        self.nativeUrl = [params objectForKey:@"nativeUrl"];
        self.sessionUserName = [params objectForKey:@"sessionUserName"];
    }
    
    return self;
}

- (NSDictionary *)toParams {
    return @{
             @"msgType": self.msgType,
             @"sendId": self.sendId,
             @"channelId": self.channelId,
             @"nickName": self.nickName,
             @"headImg": self.headImg,
             @"nativeUrl": self.nativeUrl,
             @"sessionUserName": self.sessionUserName,
             @"timingIdentifier": self.timingIdentifier
             };
}



@end
