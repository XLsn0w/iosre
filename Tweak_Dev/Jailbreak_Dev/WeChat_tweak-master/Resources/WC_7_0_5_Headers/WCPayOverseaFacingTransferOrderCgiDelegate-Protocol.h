//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayOverseaFacingTransferOrderResponse;

@protocol WCPayOverseaFacingTransferOrderCgiDelegate <NSObject>
- (void)onWCPayOverseaFacingTransferOrderResponseBizError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseCgiError:(int)arg1 errorMsg:(NSString *)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseOK:(WCPayOverseaFacingTransferOrderResponse *)arg1;
@end

