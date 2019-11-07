//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MetalImageFilter.h"

@interface MetalImage3x3TextureSamplingFilter : MetalImageFilter
{
    _Bool hasOverriddenImageSizeFactor;
    struct MTLUInt2 lastImageSize;
    struct MTLFloat2 _texelSize;
    id <MTLBuffer> _texelSizeBuffer;
}

- (void).cxx_destruct;
- (void)assembleRenderEncoder:(id)arg1;
- (id)initWithFragmentFunction:(id)arg1;
- (id)initWithFragmentFunctionName:(id)arg1;
- (void)setInputTexture:(id)arg1 atIndex:(long long)arg2;
@property(nonatomic) struct MTLFloat2 texelSize; // @synthesize texelSize=_texelSize;
@property(readonly, nonatomic) id <MTLBuffer> texelSizeBuffer; // @synthesize texelSizeBuffer=_texelSizeBuffer;

@end

