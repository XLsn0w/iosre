//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageCropFilter, Singleton, StretchLegParameters;

@interface MCLegStretchManager : NSObject
{
    _Bool legLineStable;
    double timesForChangeToStable;
    double previousTimeForChangeToStable;
    double timesForChangeToUnstable;
    double previousTimeForChangeToUnstable;
    float lineMax;
    float lineMin;
    float rangeMax;
    double usePreviousIfWithin;
    double previousLostWaistTime;
    float previousValidWaistLine;
    _Bool hasSeenValidPoints;
    _Bool _enable;
    _Bool _forcedY0;
    float _currentSmoothedWaistLine;
    GPUImageCropFilter *_cropFilter;
    Singleton *_wrapper;
    unsigned long long _currentFrame;
    StretchLegParameters *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPUImageCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(nonatomic) unsigned long long currentFrame; // @synthesize currentFrame=_currentFrame;
@property(nonatomic) float currentSmoothedWaistLine; // @synthesize currentSmoothedWaistLine=_currentSmoothedWaistLine;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool forcedY0; // @synthesize forcedY0=_forcedY0;
- (id)init;
- (float)legLineToset:(float)arg1;
@property(retain, nonatomic) StretchLegParameters *params; // @synthesize params=_params;
- (void)resetState;
- (void)setFixedLine:(float)arg1;
@property(retain, nonatomic) Singleton *wrapper; // @synthesize wrapper=_wrapper;
- (void)setupCropRegionWithRatio:(float)arg1;
- (void)setupLegFilterWithNormalizedPoints:(id)arg1 toFilter:(id)arg2;

@end

