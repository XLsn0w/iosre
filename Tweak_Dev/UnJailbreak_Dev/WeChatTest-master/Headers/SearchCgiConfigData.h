//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SearchCgiConfigData : NSObject <PBCoding>
{
    unsigned int baseTime;
    unsigned int expiredTime;
    unsigned int clientVersion;
    unsigned int h5Version;
    NSString *searchID;
    NSString *lang;
    NSMutableDictionary *dicData;
    NSMutableDictionary *dicWSConfig;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dicWSConfig; // @synthesize dicWSConfig;
@property(retain, nonatomic) NSMutableDictionary *dicData; // @synthesize dicData;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
@property(nonatomic) unsigned int h5Version; // @synthesize h5Version;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime;
@property(nonatomic) unsigned int baseTime; // @synthesize baseTime;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID;
- (void).cxx_destruct;
- (_Bool)checkValid;
- (void)setCurrentContext;
- (void)reset;
- (void)updateWSConfig;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

