//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface ReportStrategyCtrlMgr : MMService <PBMessageObserverDelegate, MMService, MMKernelExt>
{
}

- (void)HandleReportStrategyResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendReportStrategyRequest;
- (void)dealloc;
- (id)init;
- (void)onAuthOK;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

