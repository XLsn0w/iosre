//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FavoritesUploadProccessorDelegate.h"
#import "IFavoritesRepairSvrDataExt.h"

@class FavoritesCDNInfoDB, FavoritesItemDB, FavoritesUploadBaseProccessor, FavoritesUploadFileSaver, FavoritesUploadVideoCompressor, NSMutableArray, NSString;

@interface FavoritesUploadMgr : MMObject <IFavoritesRepairSvrDataExt, FavoritesUploadProccessorDelegate>
{
    NSMutableArray *m_failedQueue;
    FavoritesCDNInfoDB *m_favCdnDB;
    FavoritesItemDB *m_favItemDB;
    unsigned long long m_type;
    FavoritesUploadVideoCompressor *m_videoCompressor;
    FavoritesUploadFileSaver *m_fileSaver;
    FavoritesUploadBaseProccessor *m_uploador;
    id <FavoritesUploadMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addUploadItem:(id)arg1 isPrior:(_Bool)arg2;
- (unsigned long long)cleanCache;
- (void)clearCdnInfoInDataList:(id)arg1;
- (void)dealloc;
- (void)delUploadItem:(id)arg1;
@property(nonatomic) __weak id <FavoritesUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getUploadFailedItemList;
- (void)initDB:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (_Bool)isUploading:(id)arg1;
- (void)loadFailedQueue;
- (void)loadUploadingItems;
- (_Bool)needUploadData:(id)arg1 ofType:(int)arg2;
- (void)onProccessItem:(id)arg1 inType:(unsigned long long)arg2 ErrCode:(int)arg3;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(_Bool *)arg2;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (unsigned long long)preCleanGetCacheSize;
- (void)reUploadFavItem:(id)arg1;
- (void)realAddUploadItem:(id)arg1 isPrior:(_Bool)arg2;
- (void)realStopUploadItem:(id)arg1;
- (_Bool)restartAllUploadFailedItems;
- (void)saveCdnInfoInData:(id)arg1 forItem:(id)arg2 isThumb:(_Bool)arg3 withState:(int)arg4;
- (void)stopUploadAllFavItem;
- (void)stopUploadItem:(id)arg1;
- (_Bool)tryFixUrlThumbPath:(id)arg1;
- (_Bool)updateCdnInfo:(id)arg1;
- (void)updateCdnInfoInDataList:(id)arg1;
- (void)updateFavoritesItemCDNInfo:(id)arg1 withDataList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

