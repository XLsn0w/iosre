//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCStoryDataItem, WCStoryPostLimitObj;

@protocol WCStoryUploadCdnMgrDelegate <NSObject>
- (void)onStoryPostFail:(NSString *)arg1 ErrorType:(long long)arg2;
- (void)onStoryPostRetry:(NSString *)arg1;
- (void)onStoryPostSuccess:(WCStoryDataItem *)arg1 LimitObj:(WCStoryPostLimitObj *)arg2;
@end

