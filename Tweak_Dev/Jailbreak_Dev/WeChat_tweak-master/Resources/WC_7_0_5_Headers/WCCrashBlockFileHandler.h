//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCrashBlockFileHandler : NSObject
{
}

+ (void)deleteCrashDataWithReportID:(id)arg1;
+ (void)deleteLagDataWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)diretoryOfUserDump;
+ (id)diretoryOfUserDumpWithType:(unsigned long long)arg1;
+ (id)getAllCrashReportID;
+ (id)getAllCrashReportPath;
+ (id)getLagDataWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)getLagDataWithReportIDArray:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)getLagReportIDWithType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)getLaunchBlockRecordFilePath;
+ (id)getPendingCrashReportInfo;
+ (id)getStackFeatFilePath;
+ (void)handleOOMDumpFile:(id)arg1;
+ (_Bool)hasCrashReport;
+ (_Bool)haveLagFiles;
+ (_Bool)haveLagFilesOnDate:(id)arg1;
+ (_Bool)haveLagFilesOnDate:(id)arg1 onType:(unsigned long long)arg2;
+ (_Bool)haveLagFilesOnType:(unsigned long long)arg1;
+ (id)loadPendingCrashReportID;
+ (id)p_getFileSuffixWithType:(unsigned long long)arg1 withDate:(id)arg2;
+ (_Bool)p_isCrashReportID:(id)arg1;

@end

