//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CLLocation, NSArray, NSNumber, NSString;

@interface TencentLBSLocation : NSObject <NSSecureCoding, NSCopying>
{
    CLLocation *_location;
    long long _areaStat;
    NSString *_provider;
    NSNumber *_steps;
    NSString *_buildingId;
    NSString *_buildingFloor;
    long long _indoorLocationType;
    NSString *_name;
    NSString *_address;
    long long _nationCode;
    NSString *_code;
    NSString *_nation;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_town;
    NSString *_village;
    NSString *_street;
    NSString *_street_no;
    NSArray *_poiList;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) long long areaStat; // @synthesize areaStat=_areaStat;
@property(copy, nonatomic) NSString *buildingFloor; // @synthesize buildingFloor=_buildingFloor;
@property(copy, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)distanceFromLocation:(id)arg1;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long indoorLocationType; // @synthesize indoorLocationType=_indoorLocationType;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(nonatomic) long long nationCode; // @synthesize nationCode=_nationCode;
@property(retain, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSNumber *steps; // @synthesize steps=_steps;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *street_no; // @synthesize street_no=_street_no;
@property(copy, nonatomic) NSString *town; // @synthesize town=_town;
@property(copy, nonatomic) NSString *village; // @synthesize village=_village;

@end
