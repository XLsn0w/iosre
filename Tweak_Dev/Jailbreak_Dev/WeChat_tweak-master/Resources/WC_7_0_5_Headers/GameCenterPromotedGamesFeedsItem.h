//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface GameCenterPromotedGamesFeedsItem : MMObject <PBCoding>
{
    NSArray *usernameList;
    NSString *detail;
    NSArray *nicknameList;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detail; // @synthesize detail;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSArray *nicknameList; // @synthesize nicknameList;
@property(retain, nonatomic) NSArray *usernameList; // @synthesize usernameList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

