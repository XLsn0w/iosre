//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmojiUploadCgi, NSString;

@protocol EmojiUploadCgiDelegate <NSObject>
- (void)onEmojiUploadBufferCgiFinished:(EmojiUploadCgi *)arg1 isSuccess:(_Bool)arg2 isEnd:(_Bool)arg3 activityId:(NSString *)arg4;
@end

