//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCFilter.h"

@interface TXCVEFRockLightFilter : TXCFilter
{
    int mZMinLocation;
    int mZMaxLocation;
    int mDurationLocation;
    int mCurrentLocation;
    int mCenterLocation;
    int mOffsetRLocation;
    int mOffsetGLocation;
    int mOffsetBLocation;
}

- (id)init;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setCurrent:(float)arg1;
- (void)setDuration:(float)arg1;
- (void)setOffset:(struct CGPoint)arg1:(struct CGPoint)arg2:(struct CGPoint)arg3;
- (void)setZoom:(float)arg1:(float)arg2;

@end

