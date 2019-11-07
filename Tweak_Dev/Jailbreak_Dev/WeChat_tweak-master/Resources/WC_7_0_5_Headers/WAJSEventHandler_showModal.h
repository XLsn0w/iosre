//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWAWebViewPluginDelegate.h"

@class NSString, WAWebViewPlugin_InputKeyboard, WAWebViewPlugin_NativeView;

@interface WAJSEventHandler_showModal : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>
{
    WAWebViewPlugin_InputKeyboard *_keyboardPlugin;
    WAWebViewPlugin_NativeView *_nativeInstance;
}

- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1;
@property(nonatomic) __weak WAWebViewPlugin_InputKeyboard *keyboardPlugin; // @synthesize keyboardPlugin=_keyboardPlugin;
@property(nonatomic) __weak WAWebViewPlugin_NativeView *nativeInstance; // @synthesize nativeInstance=_nativeInstance;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

