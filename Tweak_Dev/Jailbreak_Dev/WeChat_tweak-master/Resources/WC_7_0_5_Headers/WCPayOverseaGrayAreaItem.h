//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface WCPayOverseaGrayAreaItem : NSObject <PBCoding>
{
    NSData *name;
    NSData *logoUrl;
    NSData *clickUrl;
    NSData *extraInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *clickUrl; // @synthesize clickUrl;
@property(retain, nonatomic) NSData *extraInfo; // @synthesize extraInfo;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSData *logoUrl; // @synthesize logoUrl;
@property(retain, nonatomic) NSData *name; // @synthesize name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

