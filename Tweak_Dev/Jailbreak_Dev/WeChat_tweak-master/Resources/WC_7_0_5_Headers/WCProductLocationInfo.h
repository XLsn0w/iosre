//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCProductLocationInfo : NSObject
{
    float latitude;
    float longitude;
    NSString *country;
    NSString *province;
    NSString *city;
    NSString *address;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(nonatomic) float latitude; // @synthesize latitude;
@property(nonatomic) float longitude; // @synthesize longitude;
@property(retain, nonatomic) NSString *province; // @synthesize province;

@end

