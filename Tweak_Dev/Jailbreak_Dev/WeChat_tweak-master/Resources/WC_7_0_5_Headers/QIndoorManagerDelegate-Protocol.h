//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QIndoorBuilding, QIndoorLevel, QIndoorManager;

@protocol QIndoorManagerDelegate <NSObject>

@optional
- (void)indoorManager:(QIndoorManager *)arg1 didChangeActiveBuilding:(QIndoorBuilding *)arg2;
- (void)indoorManager:(QIndoorManager *)arg1 didChangeActiveLevel:(QIndoorLevel *)arg2;
@end

