//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MetalImageTextureCache : NSObject
{
    NSMutableDictionary *framebufferCache;
    NSMutableDictionary *framebufferTypeCounts;
    NSMutableArray *activeImageCaptureList;
    id memoryWarningObserver;
    NSObject<OS_dispatch_queue> *framebufferCacheQueue;
}

- (void).cxx_destruct;
- (void)addFramebufferToActiveImageCaptureList:(id)arg1;
- (void)cacheTexture:(id)arg1;
- (void)dealloc;
- (id)fetchTextureWithSize:(struct MTLUInt2)arg1;
- (id)hashForSize:(struct MTLUInt2)arg1;
- (id)init;
- (void)purgeAllUnassignedTextures;
- (void)removeFramebufferFromActiveImageCaptureList:(id)arg1;

@end

