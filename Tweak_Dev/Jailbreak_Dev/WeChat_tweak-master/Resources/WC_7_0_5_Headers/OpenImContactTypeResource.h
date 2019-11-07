//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface OpenImContactTypeResource : NSObject <PBCoding>
{
    unsigned int updateTime;
    NSString *acctType;
    NSString *language;
    NSMutableDictionary *wordings;
    NSMutableDictionary *urls;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *acctType; // @synthesize acctType;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *language; // @synthesize language;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSMutableDictionary *urls; // @synthesize urls;
@property(retain, nonatomic) NSMutableDictionary *wordings; // @synthesize wordings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

