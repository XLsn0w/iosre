//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MatrixPlugin.h"

@class MemoryRecordInfo, NSObject<OS_dispatch_queue>, WCMemoryRecordManager, WCMemoryStatConfig;

@interface WCMemoryStatPlugin : MatrixPlugin
{
    WCMemoryRecordManager *m_recordManager;
    MemoryRecordInfo *m_lastRecord;
    MemoryRecordInfo *m_currRecord;
    id <WCMemoryStatPluginDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_pluginReportQueue;
}

+ (id)getTag;
- (void).cxx_destruct;
- (void)addTagToCurrentThread:(id)arg1;
@property(nonatomic) __weak id <WCMemoryStatPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteAllRecords;
- (void)deleteRecord:(id)arg1;
- (void)deplayTryReportOOMInfo;
- (void)destroy;
- (unsigned int)getMemoryUsageOfCurrentThread;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pluginReportQueue; // @synthesize pluginReportQueue=_pluginReportQueue;
- (id)recordByLaunchTime:(unsigned long long)arg1;
- (id)recordList;
- (id)recordOfLastRun;
- (void)removeTagOfCurrentThread;
- (void)reportError:(int)arg1;
- (void)reportIssue:(id)arg1;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)setCurrentRecordInvalid;
- (void)setupPluginListener:(id)arg1;
- (void)start;
- (void)stop;
- (id)uploadReport:(id)arg1 withCustomInfo:(id)arg2;

// Remaining properties
@property(retain, nonatomic) WCMemoryStatConfig *pluginConfig; // @dynamic pluginConfig;

@end

