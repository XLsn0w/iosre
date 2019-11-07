//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMKCrtService.h"
#import "WCPayGenDigitalCertCgiDelegate.h"

@class MMVoidCallback, MMVoidStringCallback, NSString, WCPayGenDigitalCertCgi;

@interface KindaCrtService : NSObject <WCPayGenDigitalCertCgiDelegate, MMKCrtService>
{
    WCPayGenDigitalCertCgi *_m_genDigitalCertCgi;
    MMVoidCallback *_m_successCallback;
    MMVoidStringCallback *_m_failCallback;
}

- (void).cxx_destruct;
- (id)getCrtNo;
- (_Bool)hasCrt;
@property(retain, nonatomic) MMVoidStringCallback *m_failCallback; // @synthesize m_failCallback=_m_failCallback;
@property(retain, nonatomic) WCPayGenDigitalCertCgi *m_genDigitalCertCgi; // @synthesize m_genDigitalCertCgi=_m_genDigitalCertCgi;
@property(retain, nonatomic) MMVoidCallback *m_successCallback; // @synthesize m_successCallback=_m_successCallback;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (id)sign:(id)arg1 data:(id)arg2;
- (void)startGenDigitalCrtImpl:(id)arg1 successCallback:(id)arg2 failCallback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

