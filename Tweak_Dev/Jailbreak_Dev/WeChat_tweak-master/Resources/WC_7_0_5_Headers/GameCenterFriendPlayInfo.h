//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface GameCenterFriendPlayInfo : MMObject <PBCoding>
{
    NSString *brief;
    NSArray *friendPlayList;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brief; // @synthesize brief;
@property(retain, nonatomic) NSArray *friendPlayList; // @synthesize friendPlayList;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)parseFromResp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

