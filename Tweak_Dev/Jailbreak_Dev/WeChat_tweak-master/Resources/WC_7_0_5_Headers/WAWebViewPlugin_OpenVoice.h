//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

@interface WAWebViewPlugin_OpenVoice : WAWebViewPlugin_embedView
{
}

- (void)dealloc;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;
- (void)insertView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onStartRecord;
- (void)onStopRecord;
- (void)removeView:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateView:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

