//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString;

@interface WCPayOpeniOSTouchLockCgi : WCPayBaseTenPayCgi
{
    NSString *_usertoken;
    NSString *_model;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *usertoken; // @synthesize usertoken=_usertoken;
- (void)startRequest;

// Remaining properties
@property(nonatomic) __weak id <WCPayOpeniOSTouchLockCgiDelegate> delegate; // @dynamic delegate;

@end

