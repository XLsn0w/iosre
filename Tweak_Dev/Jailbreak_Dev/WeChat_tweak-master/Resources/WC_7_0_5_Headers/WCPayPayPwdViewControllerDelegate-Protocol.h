//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayControlData, WCPayPayPwdViewController;

@protocol WCPayPayPwdViewControllerDelegate <NSObject>
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;

@optional
- (void)RepeatInputPayPwd:(WCPayControlData *)arg1;
- (void)SetPayPwdNext:(WCPayControlData *)arg1;
- (void)VerifyPayPwdNext:(WCPayControlData *)arg1;
- (void)VerifyPayPwdNext:(WCPayControlData *)arg1 vc:(WCPayPayPwdViewController *)arg2;
@end

