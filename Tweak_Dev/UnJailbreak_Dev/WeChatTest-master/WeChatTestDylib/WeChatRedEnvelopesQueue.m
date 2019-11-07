//
//  WeChatRedEnvelopesQueue.m
//  WeChatTestDylib
//
//  Created by caonongyun on 2018/5/30.
//  Copyright © 2018年 QSH. All rights reserved.
//

#import "WeChatRedEnvelopesQueue.h"

@interface WeChatRedEnvelopesQueue()

@property (nonatomic, strong) NSMutableArray   *queue;


@end

@implementation WeChatRedEnvelopesQueue

+ (instancetype)sharedQueue{
    static WeChatRedEnvelopesQueue *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
    });
    return instance;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _queue = [NSMutableArray array];
    }
    return self;
}

- (void)inqueue:(NSMutableDictionary *)dict{
    if (dict) {
        [_queue addObject:dict];
    }
}

- (NSMutableDictionary *)dequeue{
    if (_queue.count == 0) {
        return nil;
    }
    NSMutableDictionary *dict = _queue.firstObject;
    [_queue removeObject:dict];
    return dict;
}

@end
