//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface EmoticonDownloadMd5ListObject : MMObject <PBCoding>
{
    unsigned int m_lastUpdateTime;
    NSMutableArray *m_md5List;
    unsigned long long _m_type;
}

+ (id)GetEmoticonDownloadMd5ListObjectWithType:(unsigned long long)arg1;
+ (_Bool)IsEmoticonDownloadMd5ListExistWithType:(unsigned long long)arg1;
+ (unsigned int)extFlagForCustomEmoticonType:(unsigned long long)arg1;
+ (id)getEmoticonBackupRootDir;
+ (id)getEmoticonDownloadMd5ListPathWithType:(unsigned long long)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)addMd5ObjectList:(id)arg1;
- (void)addMd5ObjectList:(id)arg1 atFirst:(_Bool)arg2;
- (void)checkComplete;
- (unsigned long long)checkCompleteAndReturnNeedMd5DownloadCount;
- (void)checkCompleteForMd5Object:(id)arg1;
- (void)clearMd5List;
- (unsigned long long)completeCount;
- (id)completeMd5:(id)arg1;
- (void)dealloc;
- (void)failedMd5:(id)arg1;
- (id)getMd5List;
- (id)getNextUncompleteMd5Object;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (unsigned long long)indexOfMd5ObjectWithMd5:(id)arg1;
- (id)init;
@property(nonatomic) unsigned int m_lastUpdateTime; // @synthesize m_lastUpdateTime;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List;
@property(nonatomic) unsigned long long m_type; // @synthesize m_type=_m_type;
- (_Bool)moreThanADaySinceLastUpdateTime;
- (void)removeMd5:(id)arg1;
- (void)saveToFile;
- (id)sortedAndUnionWithEmoticonWraps:(id)arg1;
- (void)stickyMd5List:(id)arg1;
- (unsigned long long)totalCount;
- (void)updateLastUpdateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

