//
//  WeChatRedEnvelopesQueue.h
//  WeChatTestDylib
//
//  Created by caonongyun on 2018/5/30.
//  Copyright © 2018年 QSH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeChatRedEnvelopesQueue : NSObject

+ (instancetype)sharedQueue;

- (void)inqueue:(NSMutableDictionary *)dict;
- (NSMutableDictionary *)dequeue;

@end
