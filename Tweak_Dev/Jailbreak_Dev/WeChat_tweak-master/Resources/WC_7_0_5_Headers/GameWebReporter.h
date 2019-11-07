//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMWebViewControllerExtention.h"

@class GameWebViewTimeRecord, NSMutableArray, NSString;

@interface GameWebReporter : MMObject <MMWebViewControllerExtention>
{
    GameWebViewTimeRecord *_webViewTimeRecord;
    NSString *_url;
    NSString *_pageKey;
    NSString *_wepkgVersion;
    NSString *_jsCommonLibVersion;
    _Bool _isManualLoad;
    _Bool _isRealtime16142;
    NSMutableArray *_reportItems16142;
}

+ (id)createWithWebView:(id)arg1 andUrl:(id)arg2;
- (void).cxx_destruct;
- (void)EX_WebViewControllerDealloc:(id)arg1 someInfo:(id)arg2;
- (void)appendParams:(id)arg1 toReportItems:(id)arg2;
- (void)assembleLocalItems:(id)arg1 lessFields:(_Bool)arg2;
- (void)commitGameWebData:(id)arg1 Type:(id)arg2 Realtime:(_Bool)arg3;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 andUrl:(id)arg2;
- (id)networkTypeString;
- (void)notifyWebViewA8KeyFinished;
- (void)notifyWebViewA8KeyStarted;
- (void)notifyWebViewCreate;
- (void)notifyWebViewDidCreated;
- (void)notifyWebViewDidFinishLoad;
- (void)notifyWebViewDidStartLoad;
- (void)notifyWebViewPreverifyFinished;
- (void)notifyWebViewPreverifyStarted;
- (void)notifyWebViewWillLoad;
- (void)prepareReport16142:(id)arg1 realTime:(_Bool)arg2;
- (void)report16145:(id)arg1 realTime:(_Bool)arg2;
@property(retain, nonatomic) NSMutableArray *reportItems16142; // @synthesize reportItems16142=_reportItems16142;
- (void)reportWithItems:(id)arg1 toProtoNumber:(int)arg2 realTime:(_Bool)arg3;
- (int)searchInsertPositionInItem:(id)arg1 ForOrder:(int)arg2 current:(int)arg3;
- (void)setJsCommonLibVersion:(id)arg1;
- (void)setManualLoad:(_Bool)arg1;
- (void)setWepkgVersion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

