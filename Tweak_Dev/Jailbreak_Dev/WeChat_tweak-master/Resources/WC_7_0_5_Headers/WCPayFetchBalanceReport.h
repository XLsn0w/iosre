//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayBindCardInfo;

@interface WCPayFetchBalanceReport : NSObject
{
    NSString *_reportSessionId;
    WCPayBindCardInfo *_defaultCardBinInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindCardInfo *defaultCardBinInfo; // @synthesize defaultCardBinInfo=_defaultCardBinInfo;
- (id)init;
- (void)reportActionId:(unsigned int)arg1 cardBinInfo:(id)arg2;
@property(retain, nonatomic) NSString *reportSessionId; // @synthesize reportSessionId=_reportSessionId;

@end

