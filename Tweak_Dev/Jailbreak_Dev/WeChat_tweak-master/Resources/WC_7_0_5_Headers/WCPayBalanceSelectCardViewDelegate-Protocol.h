//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayBalanceSelectCardView, WCPayBindCardInfo;

@protocol WCPayBalanceSelectCardViewDelegate <NSObject>

@optional
- (void)selectCardView:(WCPayBalanceSelectCardView *)arg1 didSelectCard:(WCPayBindCardInfo *)arg2;
- (void)selectCardViewDidSelectAddNewCard:(WCPayBalanceSelectCardView *)arg1;
@end

