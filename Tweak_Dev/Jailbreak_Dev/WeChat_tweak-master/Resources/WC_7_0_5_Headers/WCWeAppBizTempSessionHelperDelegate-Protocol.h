//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol WCWeAppBizTempSessionHelperDelegate <NSObject>

@optional
- (void)bizTempSessionEndWithError:(NSString *)arg1;
- (void)bizTempSessionEndWithSuccess:(NSDictionary *)arg1;
- (void)bizTempSessionJumpWithSuccess:(NSDictionary *)arg1;
- (void)startBizTempSessionLoadingView;
- (void)stopBizTempSessionLoadingView;
@end

