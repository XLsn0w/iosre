//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface ShakeProductItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString *title;
    NSString *thumbUrl;
    NSString *productId;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *productId; // @synthesize productId;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

