//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MyCamGPUFilter.h"

@class NSArray;

@interface TTFaceBrightnessCurveFilter : MyCamGPUFilter
{
    unsigned int _curveTexture;
    char *_curveByteArray;
    char *_histogramColorCurve;
    NSArray *_histogramColorMap;
    double _histogramEqualizationAlpha;
    double _faceAvgBrightness;
    double _faceCurBrightness;
    NSArray *_curveValues;
}

+ (double)rgb2lab_l:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *curveValues; // @synthesize curveValues=_curveValues;
- (void)dealloc;
@property(nonatomic) double faceAvgBrightness; // @synthesize faceAvgBrightness=_faceAvgBrightness;
@property(nonatomic) double faceCurBrightness; // @synthesize faceCurBrightness=_faceCurBrightness;
@property(retain) NSArray *histogramColorMap; // @synthesize histogramColorMap=_histogramColorMap;
@property double histogramEqualizationAlpha; // @synthesize histogramEqualizationAlpha=_histogramEqualizationAlpha;
- (id)init;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setupFaceAverageColor:(id)arg1;
- (void)updateFaceCurrentColor:(_Bool)arg1;
- (void)updateToneCurveTexture;

@end

