//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCGaussianBlurFilter.h"

@interface TXCBilateralFilter : TXCGaussianBlurFilter
{
    double firstDistanceNormalizationFactorUniform;
    double secondDistanceNormalizationFactorUniform;
    double _distanceNormalizationFactor;
}

@property(nonatomic) double distanceNormalizationFactor; // @synthesize distanceNormalizationFactor=_distanceNormalizationFactor;
- (id)init;
- (void)setTexelSpacing:(double)arg1;

@end

