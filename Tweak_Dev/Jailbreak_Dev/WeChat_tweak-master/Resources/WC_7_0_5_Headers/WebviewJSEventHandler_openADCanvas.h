//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCCanvasDynamicDataLoaderDelegate.h"

@class NSString, WCCanvasDynamicDataLoader;

@interface WebviewJSEventHandler_openADCanvas : WebviewJSEventHandlerBase <WCCanvasDynamicDataLoaderDelegate>
{
    WCCanvasDynamicDataLoader *_dataLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (unsigned long long)getUInt64ForKey:(id)arg1 inParams:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

