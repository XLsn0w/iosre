//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TenPayResponse, WCPayBaseNetworkingError, WCPayGetZeroPayTokenCgi, WCPayGetZeroPayTokenCgiResp;

@protocol WCPayGetZeroPayTokenCgiDelegate <NSObject>
- (void)onWCPayGetZeroPayTokenCgi:(WCPayGetZeroPayTokenCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)onWCPayGetZeroPayTokenCgi:(WCPayGetZeroPayTokenCgi *)arg1 didFailWithTenpayResponse:(TenPayResponse *)arg2 error:(WCPayBaseNetworkingError *)arg3;
- (void)onWCPayGetZeroPayTokenCgi:(WCPayGetZeroPayTokenCgi *)arg1 didGetResponse:(WCPayGetZeroPayTokenCgiResp *)arg2;
@end

