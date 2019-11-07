//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, EAGLSharegroup, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, TXCFramebufferCache, TXCProgram;

@interface TXCContext : NSObject
{
    NSMutableDictionary *shaderProgramCache;
    NSMutableArray *shaderProgramUsageHistory;
    EAGLSharegroup *_sharegroup;
    EAGLContext *_context;
    TXCProgram *_currentShaderProgram;
    NSObject<OS_dispatch_queue> *_contextQueue;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    TXCFramebufferCache *_framebufferCache;
}

+ (void *)contextKey;
+ (_Bool)deviceSupportsFramebufferReads;
+ (_Bool)deviceSupportsOpenGLESExtension:(id)arg1;
+ (_Bool)deviceSupportsRedTextures;
+ (int)maximumTextureSizeForThisDevice;
+ (int)maximumTextureUnitsForThisDevice;
+ (int)maximumVaryingVectorsForThisDevice;
+ (void)setActiveShaderProgram:(id)arg1;
+ (id)sharedContextQueue;
+ (id)sharedFramebufferCache;
+ (id)sharedImageProcessingContext;
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;
+ (_Bool)supportsFastTextureUpload;
+ (void)useImageProcessingContext;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(readonly) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
- (id)createContext;
@property(retain, nonatomic) TXCProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
@property(readonly) TXCFramebufferCache *framebufferCache; // @synthesize framebufferCache=_framebufferCache;
- (id)init;
- (void)presentBufferForDisplay;
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)setContextShaderProgram:(id)arg1;
- (void)useAsCurrentContext;
- (void)useSharegroup:(id)arg1;

@end

