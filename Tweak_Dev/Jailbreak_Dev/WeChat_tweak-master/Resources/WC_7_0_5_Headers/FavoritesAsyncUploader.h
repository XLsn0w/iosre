//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoritesUploadBaseProccessor.h"

#import "CNetworkStatusExt.h"
#import "ICdnComMgrExt.h"
#import "MsgDataDownloadDelegate.h"
#import "PBMessageObserverDelegate.h"

@class FavoritesCDNInfo, MsgDataDownloadLogic, NSMutableArray, NSMutableSet, NSString;

@interface FavoritesAsyncUploader : FavoritesUploadBaseProccessor <MsgDataDownloadDelegate, CNetworkStatusExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray *m_waitingQueue;
    NSMutableArray *m_needDownloadMsgList;
    NSMutableSet *m_downloadedMsg;
    unsigned long long m_currentState;
    FavoritesCDNInfo *m_uploadingInfo;
    MsgDataDownloadLogic *m_msgDataDownloadLogic;
    _Bool m_msgFileDownloadedFail;
    _Bool m_hasMsgToDownload;
}

- (void).cxx_destruct;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)addItem:(id)arg1 isPrior:(_Bool)arg2;
- (_Bool)checkFavItemOccupiedByFavId:(unsigned int)arg1;
- (void)chectNeedDownloadMsgInDataList:(id)arg1;
- (void)dealloc;
- (void)downloadMsg;
- (id)initWithDelegate:(id)arg1;
- (void)onAsyncUploadEndWithErrCode:(int)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)reportSameUrlAndKeyWithDataList:(id)arg1;
- (void)resetUpload;
- (void)run;
- (void)tryProccess;
- (void)updateXml;
- (void)uploadFavMedia:(id)arg1;
- (void)uploadFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

