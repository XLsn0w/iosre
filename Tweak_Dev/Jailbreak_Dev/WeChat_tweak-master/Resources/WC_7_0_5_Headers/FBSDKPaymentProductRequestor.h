//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class NSDateFormatter, NSMutableSet, NSSet, NSString, SKPaymentTransaction, SKProductsRequest;

@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate>
{
    NSMutableSet *_originalTransactionSet;
    NSSet *_eventsWithReceipt;
    NSDateFormatter *_formatter;
    SKPaymentTransaction *_transaction;
    SKProductsRequest *_productRequest;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)appendOriginalTransactionID:(id)arg1;
- (void)cleanUp;
- (void)clearOriginalTransactionID:(id)arg1;
- (id)durationOfSubscriptionPeriod:(id)arg1;
- (id)fetchDeviceReceipt;
- (id)getEventParametersOfProduct:(id)arg1 withTransaction:(id)arg2;
- (id)getTruncatedString:(id)arg1;
- (_Bool)hasStartTrial:(id)arg1;
- (id)initWithTransaction:(id)arg1;
- (_Bool)isStartTrial:(id)arg1 ofProduct:(id)arg2;
- (_Bool)isSubscription:(id)arg1;
- (void)logImplicitPurchaseTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)logImplicitSubscribeTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)logImplicitTransactionEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
- (void)logTransactionEvent:(id)arg1;
@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resolveProducts;
@property(retain, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

