//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, WADynamicBackgroundGLSceneRenderTexture;

@interface BlurContext : NSObject
{
    unsigned int _framebuffer;
    unsigned int _framebufferColorTexture;
    WADynamicBackgroundGLSceneRenderTexture *_displayFramebufferPlane;
    EAGLContext *_glContext;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) WADynamicBackgroundGLSceneRenderTexture *displayFramebufferPlane; // @synthesize displayFramebufferPlane=_displayFramebufferPlane;
@property(nonatomic) unsigned int framebuffer; // @synthesize framebuffer=_framebuffer;
@property(nonatomic) unsigned int framebufferColorTexture; // @synthesize framebufferColorTexture=_framebufferColorTexture;
@property(nonatomic) __weak EAGLContext *glContext; // @synthesize glContext=_glContext;

@end

