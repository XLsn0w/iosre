//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayVerifyTouchLockViewController;

@protocol WCPayVerifyTouchLockViewControllerDelegate <NSObject>
- (void)shouldVerifyPassword:(WCPayVerifyTouchLockViewController *)arg1;
- (void)shouldVerifyTouchLock:(WCPayVerifyTouchLockViewController *)arg1;
- (void)verifyViewControllerBack:(WCPayVerifyTouchLockViewController *)arg1;

@optional
- (_Bool)needBlockBack:(WCPayVerifyTouchLockViewController *)arg1;
@end

