//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WADynamicBackgroundGLObject.h"

@interface WADynamicBackgroundGLSceneRenderTexture : WADynamicBackgroundGLObject
{
    unsigned int vbo;
    unsigned int vao;
    unsigned int diffuseTexture;
    _Bool _needBlend;
    unsigned int _directionX;
    unsigned int _needColorMatrix;
    union _GLKMatrix4 _colorMatrix;
}

@property(nonatomic) union _GLKMatrix4 colorMatrix; // @synthesize colorMatrix=_colorMatrix;
- (void)dealloc;
@property(nonatomic) unsigned int directionX; // @synthesize directionX=_directionX;
- (void)draw:(id)arg1;
- (void)genVAO;
- (void)genVBO;
- (id)initWithGLContext:(id)arg1 texture:(unsigned int)arg2;
@property(nonatomic) _Bool needBlend; // @synthesize needBlend=_needBlend;
@property(nonatomic) unsigned int needColorMatrix; // @synthesize needColorMatrix=_needColorMatrix;
- (float *)planeData;
- (void)update:(double)arg1;

@end

