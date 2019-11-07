//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, QMapContext, TBIndoorBuilding;

@protocol QMapContextDelegate <NSObject>

@optional
- (void)mapContext:(QMapContext *)arg1 didChangeActiveBuilding:(TBIndoorBuilding *)arg2;
- (void)mapContext:(QMapContext *)arg1 downloadTileWithUrl:(NSString *)arg2;
- (void)mapContext:(QMapContext *)arg1 mapStatusChange:(int)arg2;
- (void)mapContext:(QMapContext *)arg1 saveTileData:(NSData *)arg2 withUrl:(NSString *)arg3;
- (void)mapContextDidMapStatusChangedAfterDraw:(QMapContext *)arg1;
- (void)mapContextDidMapStatusChangedBeforeDraw:(QMapContext *)arg1;
- (void)mapContextMapLoadFinish:(QMapContext *)arg1;
@end

