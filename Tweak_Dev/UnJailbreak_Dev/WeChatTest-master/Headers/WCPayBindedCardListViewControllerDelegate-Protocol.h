//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayBindedCardListViewController, WCPayControlData;

@protocol WCPayBindedCardListViewControllerDelegate <NSObject>
- (void)ONBindedCardListVCVerifyByCardNumber:(WCPayBindedCardListViewController *)arg1;
- (void)ONBindedCardListResetBankTel:(WCPayControlData *)arg1;
- (void)ONBindedCardListResetBalanceTel:(WCPayControlData *)arg1;
- (void)OnBindedCardListNewCardClicked;
- (void)OnBindedCardListBack;
@end

