//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, CLLocation, NSError, QLocationManager;

@protocol QLocationManagerDelegate <NSObject>
- (void)locationManager:(QLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(QLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationManager:(QLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
@end

