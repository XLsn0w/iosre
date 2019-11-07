//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface MyInvoiceLogicMgr : MMService <MMService, PBMessageObserverDelegate>
{
}

+ (_Bool)getSettingData;
+ (_Bool)saveSettingData:(_Bool)arg1;
+ (id)getInvoiceSettingConfinPath;
+ (id)getInvoiceSettingConfigRootDir;
+ (void)ReportInvoiceClick:(long long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)DeleteInvoiceInfo:(unsigned int)arg1;
- (void)SaveInvoiceInfo:(id)arg1;
- (void)GetInvoiceInfo:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

