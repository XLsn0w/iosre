//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString;

@interface DeviceInfoData : NSObject
{
    NSString *_deviceName;
    NSString *_deviceID;
    NSNumber *_RSSI;
    NSData *_manuData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSData *manuData; // @synthesize manuData=_manuData;

@end

