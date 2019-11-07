//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAPackageDownloadLogicDelegate.h"

@class NSDictionary, NSString, WAPackageDownloadLogic, WAPackageInfoCacheLogic, WAPackageSweeperLogic, WAPublicResInfo, WAPublicResInfoStorage;

@interface WAPublicResCacheMgr : MMService <WAPackageDownloadLogicDelegate, MMService>
{
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    WAPackageSweeperLogic *_pkgSweeperLogic;
    NSString *_curDownloadUrlStr;
    _Bool _bIsDownloading;
    _Bool _bIsLoadedFileInfo;
    WAPublicResInfoStorage *m_resInfoStorage;
    WAPublicResInfo *_curServerRetInfo;
    NSDictionary *_pubLibVersion;
    long long _startDownloadTime;
    CDUnknownBlockType _syncUpdatePubLibHandler;
    _Bool needUnpackBeforeNewTaskBegin;
}

+ (id)extensionIMsgExtRegisterKeyList;
+ (id)getBundle;
+ (id)getPublicRelativePath:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)asyncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1;
- (void)checkUpdatePublicResPkg;
- (void)checkUpdatePublicResPkgOnAppVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)dealloc;
- (_Bool)downloadDebugPublicPkgWithInfo:(id)arg1;
- (_Bool)downloadPublicPkgWithUrl:(id)arg1 patchUrl:(id)arg2;
- (id)getCurrentPublicReleaseInfo;
- (id)getLibStringVersion;
- (id)getLocalCacheDataWithRelativePath:(id)arg1 version:(unsigned long long)arg2;
- (id)getPublicForceLocalCacheData:(unsigned long long)arg1;
- (id)getPublicLocalCacheData:(unsigned long long)arg1;
- (id)init;
- (_Bool)isDownloading;
- (_Bool)isNeedDownloadPublicDebugModePkg:(id)arg1;
- (_Bool)loadPublicPkgInfoLocalCache:(unsigned long long)arg1 version:(unsigned long long)arg2;
- (void)loadResInfoStorage;
@property _Bool needUnpackBeforeNewTaskBegin; // @synthesize needUnpackBeforeNewTaskBegin;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 taskUrl:(id)arg4;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgContent:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)parseNotifyMsg:(id)arg1;
- (void)processPublicPkgUpdateNotifyVersion:(unsigned int)arg1 pkgUrl:(id)arg2 patchUrl:(id)arg3 md5:(id)arg4 isForceUpdate:(_Bool)arg5 scene:(unsigned long long)arg6 updateType:(unsigned int)arg7;
- (void)removeDustPublicPkgWithVersion:(unsigned long long)arg1;
- (void)reportKvInfo:(_Bool)arg1 debugMode:(_Bool)arg2 downloadPercent:(unsigned int)arg3 eventID:(unsigned int)arg4;
- (void)reportPatchUpdateKvInfo:(_Bool)arg1 debugMode:(unsigned long long)arg2 errCode:(unsigned long long)arg3 publicInfo:(id)arg4 isPatch:(_Bool)arg5 pkgSize:(unsigned int)arg6 filePath:(id)arg7;
- (void)saveResInfoStorage:(id)arg1;
- (void)syncHandlerActionWithRet:(_Bool)arg1;
- (void)syncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)tryCloseBackgroundTaskAndRestartPreloadTask;
- (void)tryUnpackNewPubData;
- (void)tryUpdatePublicResPkg;
- (void)updatePublicResPkgWithScene:(unsigned long long)arg1;
- (_Bool)verifyLocalCacheChecksum:(id)arg1 debugModeType:(unsigned long long)arg2 version:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

