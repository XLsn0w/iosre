//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAPreFetchInfo : MMObject <PBCoding>
{
    unsigned int scene;
    unsigned int lastModifyTime;
    NSString *userName;
    NSString *path;
    NSString *query;
    NSString *fetchData;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fetchData; // @synthesize fetchData;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *query; // @synthesize query;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

