//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasCurrencyReqHandler, MidasIAPPayResp, MidasIAPProductInfoReq;

@protocol MidasCurrencyReqHandlerDelegate <NSObject>
- (void)onCurrencyInfoObjGetResp:(MidasIAPPayResp *)arg1 req:(MidasIAPProductInfoReq *)arg2 obj:(MidasCurrencyReqHandler *)arg3 isOpenKeyExpire:(_Bool)arg4;
@end
