//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface ChatRoomUpgradeProductItem : NSObject <PBCoding>
{
    NSString *title;
    NSString *productID;
    NSString *desc;
    NSString *extDesc;
    NSString *price;
    NSString *priceUnit;
    unsigned int productType;
    unsigned int lifeTime;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *extDesc; // @synthesize extDesc;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int lifeTime; // @synthesize lifeTime;
@property(retain, nonatomic) NSString *price; // @synthesize price;
@property(retain, nonatomic) NSString *priceUnit; // @synthesize priceUnit;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
@property(nonatomic) unsigned int productType; // @synthesize productType;
@property(retain, nonatomic) NSString *title; // @synthesize title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

