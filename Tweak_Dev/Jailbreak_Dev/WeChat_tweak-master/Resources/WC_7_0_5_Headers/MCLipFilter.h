//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBaseFilter.h"

@interface MCLipFilter : MCBaseFilter
{
    char *vertexSamplingCoordinates;
    struct CGSize previousInputTextureSize;
    double _strength;
}

- (void)dealloc;
- (id)init;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
@property double strength; // @synthesize strength=_strength;

@end

