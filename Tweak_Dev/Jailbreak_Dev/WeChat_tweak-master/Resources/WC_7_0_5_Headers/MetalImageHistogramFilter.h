//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MetalImageFilter.h"

@interface MetalImageHistogramFilter : MetalImageFilter
{
    int histogramType;
    unsigned long long _downsamplingFactor;
    id <MTLBuffer> _pixelBuffer;
}

- (void).cxx_destruct;
- (void)createTextureCoordinateBuffer;
- (void)createTextureVertexBuffer;
- (void)dealloc;
@property(nonatomic) unsigned long long downsamplingFactor; // @synthesize downsamplingFactor=_downsamplingFactor;
- (id)init;
- (id)initWithHistogramType:(int)arg1;
- (void)newTextureReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
@property(retain, nonatomic) id <MTLBuffer> pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (_Bool)prepareRenderPipeline;
- (void)renderToTexture;
- (struct MTLUInt2)textureSizeForOutput;

@end

