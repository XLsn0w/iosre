//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAJSCoreService, WAWebViewController;

@interface WAPreloadAppTask : NSObject
{
    WAWebViewController *webView;
    WAJSCoreService *appService;
}

@property(retain, nonatomic) WAJSCoreService *appService; // @synthesize appService;
@property(retain, nonatomic) WAWebViewController *webView; // @synthesize webView;
- (void).cxx_destruct;

@end

