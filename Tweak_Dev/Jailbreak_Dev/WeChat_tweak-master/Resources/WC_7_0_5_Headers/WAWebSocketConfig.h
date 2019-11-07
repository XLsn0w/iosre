//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WANetworkConfigBase.h"

#import "WANetworkConfigBaseDataSource.h"

@class NSString;

@interface WAWebSocketConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>
{
    _Bool _TLSSkipHostnameCheck;
    unsigned int _webSocketMaxConcurrentCount;
}

@property(nonatomic) _Bool TLSSkipHostnameCheck; // @synthesize TLSSkipHostnameCheck=_TLSSkipHostnameCheck;
- (unsigned int)configDefaultTimeoutMS;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (void)loadConfig:(id)arg1;
@property(nonatomic) unsigned int webSocketMaxConcurrentCount; // @synthesize webSocketMaxConcurrentCount=_webSocketMaxConcurrentCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

