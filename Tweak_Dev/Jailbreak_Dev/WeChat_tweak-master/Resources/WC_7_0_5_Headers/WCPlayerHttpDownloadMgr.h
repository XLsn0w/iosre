//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "MMService.h"
#import "WCPlayerDownloadMgrInterface.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface WCPlayerHttpDownloadMgr : MMService <MMService, WCPlayerDownloadMgrInterface, ICdnComMgrExt>
{
    NSMutableArray *_preloadingArray;
    NSMutableArray *_preloadQueue;
    NSObject<OS_dispatch_queue> *_handleQueue;
    NSMutableDictionary *_dicDownloadingTask;
}

- (void).cxx_destruct;
- (void)CheckPreloadQueue;
- (_Bool)IsDownlingWithMediaWrap:(id)arg1;
- (_Bool)IsPreloadingVideoUrl:(id)arg1;
- (_Bool)IsPreloadingWithMediaWrap:(id)arg1;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadPartialData:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (_Bool)RemovePreLoadWithVideoUrl:(id)arg1;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (void)StartDownloadWithMediaWrap:(id)arg1;
- (void)StartDownloadWithMediaWrap:(id)arg1 ConcurrentPlay:(_Bool)arg2;
- (void)StartOnePreloadVideoWithMediaWrap:(id)arg1;
- (void)StartPreloadVideoWithMediaWraps:(id)arg1;
- (struct C2CDownloadResult)StopDownloadTaskWithMediaWrap:(id)arg1;
- (struct C2CDownloadResult)StopDownloadTaskWithUrl:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dicDownloadingTask; // @synthesize dicDownloadingTask=_dicDownloadingTask;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleQueue; // @synthesize handleQueue=_handleQueue;
- (void)onServiceInit;
@property(retain, nonatomic) NSMutableArray *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(retain, nonatomic) NSMutableArray *preloadingArray; // @synthesize preloadingArray=_preloadingArray;
- (void)removeHttpMediaWrapWithKey:(id)arg1;
- (void)setHttpMediaWrap:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

