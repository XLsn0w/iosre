//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class NSString;

@interface WCPayF2FPayCheckCgi : WCPayBaseCgi
{
    unsigned int _amount;
    NSString *_f2fId;
    NSString *_transId;
    NSString *_extendStr;
    NSString *_receiverOpenId;
    id <WCPayF2FPayCheckCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int amount; // @synthesize amount=_amount;
@property(nonatomic) __weak id <WCPayF2FPayCheckCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
@property(retain, nonatomic) NSString *extendStr; // @synthesize extendStr=_extendStr;
@property(retain, nonatomic) NSString *f2fId; // @synthesize f2fId=_f2fId;
- (id)initWithDelegate:(id)arg1;
@property(retain, nonatomic) NSString *receiverOpenId; // @synthesize receiverOpenId=_receiverOpenId;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
- (void)startSendRequest;

@end

