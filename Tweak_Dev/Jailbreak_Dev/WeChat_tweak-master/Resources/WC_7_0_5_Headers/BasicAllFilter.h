//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@class MyCamGPUFilter, PortraitBeautyForBasicAllFilter;

@interface BasicAllFilter : MultiFilterConnect
{
    MyCamGPUFilter *horizontal;
    MyCamGPUFilter *vertical;
    PortraitBeautyForBasicAllFilter *process;
    double blurRadius;
    _Bool needUpdate;
}

- (void).cxx_destruct;
- (void)NewFilter;
- (void)setBlurRadius:(double)arg1;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setProperty:(id)arg1 value:(id)arg2;

@end

