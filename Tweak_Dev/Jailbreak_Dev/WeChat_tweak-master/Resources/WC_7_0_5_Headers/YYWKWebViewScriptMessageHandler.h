//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKScriptMessageHandler.h"

@class NSString;

@interface YYWKWebViewScriptMessageHandler : NSObject <WKScriptMessageHandler>
{
    id <WKScriptMessageHandler> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WKScriptMessageHandler> delegate; // @synthesize delegate=_delegate;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

