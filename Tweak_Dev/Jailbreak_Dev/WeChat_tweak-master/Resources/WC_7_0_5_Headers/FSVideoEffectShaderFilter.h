//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class NSMutableDictionary;

@interface FSVideoEffectShaderFilter : GPUImageFilter
{
    NSMutableDictionary *_uniformSlot;
}

- (void).cxx_destruct;
- (void)loadUniforms:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *uniformSlot; // @synthesize uniformSlot=_uniformSlot;
- (void)setValue:(double)arg1 forUiform:(id)arg2;

@end

