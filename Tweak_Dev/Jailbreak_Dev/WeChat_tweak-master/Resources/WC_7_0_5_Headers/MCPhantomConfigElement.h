//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTriggerElement.h"

@class GLKTextureInfo, NSArray, NSString;

@interface MCPhantomConfigElement : MCTriggerElement
{
    _Bool _couldPreloadResource;
    _Bool _texturesLoadFinished;
    int _blendMode;
    float _scale;
    float _opacity;
    float _xK;
    float _xAsin;
    float _xBcos;
    float _xPhase;
    float _xOffset;
    float _xStep;
    float _xTime;
    float _yK;
    float _yAsin;
    float _yBcos;
    float _yPhase;
    float _yOffset;
    float _yStep;
    float _yTime;
    NSString *_elementID;
    NSString *_maskImage;
    NSArray *_xRange;
    NSArray *_yRange;
    double _frameDuration;
    long long _frames;
    NSString *_folderPath;
    GLKTextureInfo *_maskTextureInfo;
}

- (void).cxx_destruct;
- (void)advanceTime:(double)arg1;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
- (void)clearResource;
@property _Bool couldPreloadResource; // @synthesize couldPreloadResource=_couldPreloadResource;
- (void)dealloc;
@property(retain, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) long long frames; // @synthesize frames=_frames;
- (id)initWithDictionary:(id)arg1 item:(id)arg2;
@property(retain, nonatomic) NSString *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) GLKTextureInfo *maskTextureInfo; // @synthesize maskTextureInfo=_maskTextureInfo;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
- (void)preloadResource;
- (void)resetTime;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property _Bool texturesLoadFinished; // @synthesize texturesLoadFinished=_texturesLoadFinished;
@property(nonatomic) float xAsin; // @synthesize xAsin=_xAsin;
@property(nonatomic) float xBcos; // @synthesize xBcos=_xBcos;
@property(nonatomic) float xK; // @synthesize xK=_xK;
@property(nonatomic) float xOffset; // @synthesize xOffset=_xOffset;
@property(nonatomic) float xPhase; // @synthesize xPhase=_xPhase;
@property(retain, nonatomic) NSArray *xRange; // @synthesize xRange=_xRange;
@property(nonatomic) float xStep; // @synthesize xStep=_xStep;
@property(nonatomic) float xTime; // @synthesize xTime=_xTime;
@property(nonatomic) float yAsin; // @synthesize yAsin=_yAsin;
@property(nonatomic) float yBcos; // @synthesize yBcos=_yBcos;
@property(nonatomic) float yK; // @synthesize yK=_yK;
@property(nonatomic) float yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) float yPhase; // @synthesize yPhase=_yPhase;
@property(retain, nonatomic) NSArray *yRange; // @synthesize yRange=_yRange;
@property(nonatomic) float yStep; // @synthesize yStep=_yStep;
@property(nonatomic) float yTime; // @synthesize yTime=_yTime;

@end

