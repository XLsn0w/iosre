//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HoneyPayPayerCardDetailViewController, WCPayBindCardInfo;

@protocol HoneyPayPayerCardDetailViewControllerDelegate <NSObject>
- (void)payerCardDetailVC:(HoneyPayPayerCardDetailViewController *)arg1 changePayWay:(WCPayBindCardInfo *)arg2;
- (void)payerCardDetailVCDidClickChangeMaximumAmount:(HoneyPayPayerCardDetailViewController *)arg1;
- (void)payerCardDetailVCDidClickCreatedDoneButton:(HoneyPayPayerCardDetailViewController *)arg1;
- (void)payerCardDetailVCDidClickUnbindCard:(HoneyPayPayerCardDetailViewController *)arg1;
@end

