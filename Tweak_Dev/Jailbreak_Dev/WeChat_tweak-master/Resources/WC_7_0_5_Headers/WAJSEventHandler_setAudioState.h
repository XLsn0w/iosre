//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IJSContextPluginDelegate.h"

@class NSString;

@interface WAJSEventHandler_setAudioState : WAJSEventHandler_BaseEvent <IJSContextPluginDelegate>
{
}

- (void)handleJSEvent:(id)arg1;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

