//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBaseFilter.h"

@class MCFaceOffElement, NSArray;

@interface MCFaceOffFilter : MCBaseFilter
{
    int filterTextureCoordinateAttribute2;
    char *FaceMeshTriangles;
    int triangleCount;
    char *vertexSamplingCoordinates;
    struct CGSize previousInputTextureSize;
    int level1;
    int level2;
    float lineFaceVertices[2760];
    float pointFaceVertices[94][2];
    _Bool _pointobjEnable;
    unsigned int _grayTexture;
    double _sliderAlpha;
    MCFaceOffElement *_faceOffElement;
    NSArray *_faceOffItemList;
}

+ (id)complementedForeheadPoints:(float (*)[2])arg1;
- (void).cxx_destruct;
- (void)clearFaceOFFList;
- (void)dealloc;
@property(retain, nonatomic) MCFaceOffElement *faceOffElement; // @synthesize faceOffElement=_faceOffElement;
@property(retain, nonatomic) NSArray *faceOffItemList; // @synthesize faceOffItemList=_faceOffItemList;
- (void)getAverageGreen:(float [90][2])arg1 width:(double)arg2 height:(double)arg3 imageSize:(struct CGSize)arg4;
@property(nonatomic) unsigned int grayTexture; // @synthesize grayTexture=_grayTexture;
- (_Bool)hasValidmaterialTexture;
- (id)initWithVertexShaderFromFile:(id)arg1 fragmentShaderFromFile:(id)arg2;
@property(nonatomic) _Bool pointobjEnable; // @synthesize pointobjEnable=_pointobjEnable;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
@property double sliderAlpha; // @synthesize sliderAlpha=_sliderAlpha;
- (void)setupEnviroment;
- (void)setupFaceOffEnvironmentWithImage:(id)arg1 featurePoints:(id)arg2;
- (void)setupMaterialFaceVertex:(id)arg1 imageSize:(struct CGSize)arg2;

@end
