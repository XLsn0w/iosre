//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QIndoorBuilding, QIndoorLevel, QPoiInfo, WAMapView;

@protocol WAMapViewDelegate <NSObject>

@optional
- (void)onControlClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMapCalloutClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onMapIndoorChange:(WAMapView *)arg1 building:(QIndoorBuilding *)arg2 level:(QIndoorLevel *)arg3;
- (void)onMapPoiClick:(WAMapView *)arg1 poi:(QPoiInfo *)arg2;
- (void)onMapTap:(WAMapView *)arg1;
- (void)onMarkerClick:(WAMapView *)arg1 data:(NSString *)arg2;
- (void)onRegionDidChange:(WAMapView *)arg1 reason:(unsigned long long)arg2 byAnimate:(_Bool)arg3 byGesture:(_Bool)arg4;
- (void)onRegionWillChange:(WAMapView *)arg1 byAnimate:(_Bool)arg2 byGesture:(_Bool)arg3;
@end

