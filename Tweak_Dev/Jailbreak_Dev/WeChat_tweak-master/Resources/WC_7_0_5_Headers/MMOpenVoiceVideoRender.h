//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMOpenVoiceVideoBase.h"

@class NSObject<OS_dispatch_queue>, VOIPVideoRender;

@interface MMOpenVoiceVideoRender : MMOpenVoiceVideoBase
{
    NSObject<OS_dispatch_queue> *_queue;
    VOIPVideoRender *_render;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)fpsTimerCheck;
- (id)init;
- (int)initView:(int)arg1 dic:(id)arg2 queue:(id)arg3;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) VOIPVideoRender *render; // @synthesize render=_render;
- (void)render:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4;
- (int)updateView:(int)arg1 dic:(id)arg2;

@end

