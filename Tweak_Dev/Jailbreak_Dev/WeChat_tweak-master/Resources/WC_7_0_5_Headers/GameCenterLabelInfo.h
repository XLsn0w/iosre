//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameCenterLabelInfo : MMObject <PBCoding>
{
    NSString *labelName;
    NSString *labelBgColor;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *labelBgColor; // @synthesize labelBgColor;
@property(retain, nonatomic) NSString *labelName; // @synthesize labelName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

