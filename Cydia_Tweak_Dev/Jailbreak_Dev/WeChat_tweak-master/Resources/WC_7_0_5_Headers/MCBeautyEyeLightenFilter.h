//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBaseFilter.h"

@class TTGpuImageTexture;

@interface MCBeautyEyeLightenFilter : MCBaseFilter
{
    int filterTextureCoordinateAttribute2;
    char *FaceMeshTriangles;
    int _hasFace;
    TTGpuImageTexture *_eyeMaskTexture;
    double _eyeOpacity;
}

+ (id)complementedForeheadPoints:(float (*)[2])arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) TTGpuImageTexture *eyeMaskTexture; // @synthesize eyeMaskTexture=_eyeMaskTexture;
@property(nonatomic) double eyeOpacity; // @synthesize eyeOpacity=_eyeOpacity;
@property(nonatomic) int hasFace; // @synthesize hasFace=_hasFace;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setWidth:(int)arg1 andHeight:(int)arg2;
- (void)setupEnviroment;
- (void)setupMaterialFaceVertex:(id)arg1 imageSize:(struct CGSize)arg2;

@end
