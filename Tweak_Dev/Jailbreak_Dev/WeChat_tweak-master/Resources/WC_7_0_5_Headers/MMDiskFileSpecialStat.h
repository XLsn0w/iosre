//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMDiskFileSpecialStat : NSObject <PBCoding>
{
    unsigned int m_fileNum;
    unsigned long long m_fileSize;
}

+ (void)initialize;
+ (void)sumDicSpecialFilStat:(id)arg1 toDic:(id)arg2;
+ (void)sumSpecialFileStat:(int)arg1 specialType:(int)arg2 withFileSize:(unsigned long long)arg3 toDic:(id)arg4;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum;
@property(nonatomic) unsigned long long m_fileSize; // @synthesize m_fileSize;
- (void)sumSpecialFileStat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

