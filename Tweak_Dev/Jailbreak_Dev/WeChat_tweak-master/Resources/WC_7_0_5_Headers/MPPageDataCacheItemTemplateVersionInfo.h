//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MPPageDataCacheItemTemplateVersionInfo : NSObject <PBCoding>
{
    unsigned int type;
    unsigned int version;
    NSString *versionGroup;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(copy, nonatomic) NSString *versionGroup; // @synthesize versionGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

