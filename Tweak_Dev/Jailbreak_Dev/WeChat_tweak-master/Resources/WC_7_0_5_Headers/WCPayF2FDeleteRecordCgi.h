//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString;

@interface WCPayF2FDeleteRecordCgi : WCPayBaseTenPayCgi
{
    NSString *_billID;
    unsigned long long _timeStamp;
    unsigned long long _timeFormat;
    id <WCPayF2FDeleteRecordCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *billID; // @synthesize billID=_billID;
@property(nonatomic) __weak id <WCPayF2FDeleteRecordCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) unsigned long long timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
- (void)startSendRequest;

@end

