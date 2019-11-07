//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMDiskUsageStatus : NSObject <PBCoding>
{
    unsigned int m_lastStartScanTime;
    unsigned int m_lastReportTime;
}

+ (void)initialize;
+ (id)loadStausDataFromFile;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) unsigned int m_lastReportTime; // @synthesize m_lastReportTime;
@property(nonatomic) unsigned int m_lastStartScanTime; // @synthesize m_lastStartScanTime;
- (_Bool)saveStatusDataToFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

