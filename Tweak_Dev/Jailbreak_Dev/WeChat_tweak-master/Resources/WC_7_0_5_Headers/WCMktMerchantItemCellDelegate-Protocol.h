//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CardElementCouponLabel, CardElementMchLabel, NSString;

@protocol WCMktMerchantItemCellDelegate <NSObject>
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(CardElementCouponLabel *)arg1 merchantID:(NSString *)arg2;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(NSString *)arg1 mchID:(NSString *)arg2 cardIndex:(unsigned int)arg3;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(NSString *)arg1;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(NSString *)arg1;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(CardElementMchLabel *)arg1 merchantID:(NSString *)arg2;
@end

