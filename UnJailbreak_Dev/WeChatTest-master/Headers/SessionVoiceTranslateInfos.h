//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SessionVoiceTranslateInfos : MMObject <PBCoding>
{
    NSString *userName;
    NSMutableDictionary *dicVoiceTransInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dicVoiceTransInfo; // @synthesize dicVoiceTransInfo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
