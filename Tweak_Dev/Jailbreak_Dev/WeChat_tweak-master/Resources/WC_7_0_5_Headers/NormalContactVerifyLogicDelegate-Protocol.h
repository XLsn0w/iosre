//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseResponse, NSString;

@protocol NormalContactVerifyLogicDelegate <NSObject>

@optional
- (void)onNormalContactVerifyDone:(NSString *)arg1;
- (void)onNormalContactVerifyFail:(BaseResponse *)arg1;
@end

