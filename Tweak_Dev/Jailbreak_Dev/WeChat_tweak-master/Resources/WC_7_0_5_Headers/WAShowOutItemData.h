//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAShowOutItemData : MMObject <PBCoding>
{
    unsigned int appType;
    unsigned int appVersion;
    NSString *userName;
    NSString *appId;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) unsigned int appType; // @synthesize appType;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

