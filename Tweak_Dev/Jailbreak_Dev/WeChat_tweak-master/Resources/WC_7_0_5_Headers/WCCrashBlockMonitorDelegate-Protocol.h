//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol WCCrashBlockMonitorDelegate <NSObject>

@optional
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (void)onCrashBlockMonitorDumpType:(unsigned long long)arg1 filter:(unsigned long long)arg2;
- (void)onCrashBlockMonitorEnterNextCheckWithDumpType:(unsigned long long)arg1;
- (NSDictionary *)onCrashBlockMonitorGetCustomUserInfoForDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorGetDumpFile:(NSString *)arg1 withDumpType:(unsigned long long)arg2;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
@end

