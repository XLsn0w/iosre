//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAAppBrandNotifyModuleInfo : NSObject <PBCoding>
{
    NSMutableArray *arrModuleList;
    NSString *enteranceModule;
    NSMutableDictionary *dicModuleState;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrModuleList; // @synthesize arrModuleList;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableDictionary *dicModuleState; // @synthesize dicModuleState;
@property(retain, nonatomic) NSString *enteranceModule; // @synthesize enteranceModule;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (_Bool)isUseModule;
- (id)moduleListContainJSONDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

