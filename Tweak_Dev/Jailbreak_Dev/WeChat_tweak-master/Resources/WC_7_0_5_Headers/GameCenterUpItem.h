//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameCenterUpItem : MMObject <PBCoding>
{
    NSString *fromUserName;
    NSString *timeDesc;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)parseFromResp:(id)arg1;
@property(retain, nonatomic) NSString *timeDesc; // @synthesize timeDesc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

