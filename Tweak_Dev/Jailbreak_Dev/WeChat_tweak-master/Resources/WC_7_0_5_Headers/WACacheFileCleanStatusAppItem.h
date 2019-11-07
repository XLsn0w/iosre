//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WACacheFileCleanStatusAppItem : NSObject <PBCoding>
{
    unsigned int totalFileNum;
    unsigned int contentModifyTime;
    unsigned int lastScanTime;
    unsigned long long totalFileSize;
}

+ (void)initialize;
- (long long)compareByContentModifyTime:(id)arg1;
@property(nonatomic) unsigned int contentModifyTime; // @synthesize contentModifyTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int lastScanTime; // @synthesize lastScanTime;
@property(nonatomic) unsigned int totalFileNum; // @synthesize totalFileNum;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

