//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface BizAttrSyncCtrl : MMObject <PBCoding>
{
    unsigned long long requestInterval;
}

+ (void)initialize;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned long long requestInterval; // @synthesize requestInterval;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

