//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "MMAppAttachFileMgrExt.h"

@class CdnTaskInfo, NSMutableArray, NSMutableDictionary, NSString;

@interface OpenDownloadCDNMgr : NSObject <MMAppAttachFileMgrExt, ICdnComMgrExt>
{
    NSMutableArray *_arrFileInfo;
    CdnTaskInfo *_curTaskInfo;
    id <OpenDownloadCDNMgrDelegate> m_delegate;
    NSMutableDictionary *_msgInfoDict;
    NSMutableDictionary *_dicDownloadFileCache;
}

- (void).cxx_destruct;
- (_Bool)CheckForLocalCache:(id)arg1;
- (void)CheckQueue;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)DownloadFail:(int)arg1 expired:(_Bool)arg2;
- (void)DownloadOk;
- (id)GetFileCachePath;
- (id)GetTop;
- (_Bool)InDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)IsCurrentDownloading:(id)arg1 MsgWrap:(id)arg2;
- (void)LoadCacheData;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)Pop;
- (void)RemoveCacheByLRU;
- (void)SaveCacheData;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)StartDownload:(id)arg1 MsgWrap:(id)arg2 Silent:(_Bool)arg3;
- (void)StopCurDownload;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownload:(id)arg1 MsgWrap:(id)arg2 needNotify:(_Bool)arg3;
- (void)StopDownloadByUsr:(id)arg1;
- (void)checkBigFileDownload:(id)arg1;
- (void)dealloc;
- (void)deleteCacheForChatName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dicDownloadFileCache; // @synthesize dicDownloadFileCache=_dicDownloadFileCache;
- (void)handleCheckDownloadError:(id)arg1;
- (void)handleCheckDwonloadOK:(id)arg1 withResp:(id)arg2;
- (id)init;
- (void)localCacheDownloadSuccess;
@property(nonatomic) __weak id <OpenDownloadCDNMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)modMsgByBitSetInMainQueue:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
@property(retain, nonatomic) NSMutableDictionary *msgInfoDict; // @synthesize msgInfoDict=_msgInfoDict;
- (void)onCheckBigFileDownloadResult:(_Bool)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)updateFileAndCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

