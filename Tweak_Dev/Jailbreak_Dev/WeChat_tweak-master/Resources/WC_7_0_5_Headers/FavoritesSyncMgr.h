//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "CNetworkStatusExt.h"
#import "PBMessageObserverDelegate.h"

@class FavoritesItemDB, NSData;

@interface FavoritesSyncMgr : MMObject <PBMessageObserverDelegate, CNetworkStatusExt>
{
    NSData *_syncKeyBuffer;
    FavoritesItemDB *_favItemDB;
    id <FavoritesSyncMgrDelegate> _delegate;
    _Bool _isSendingReq;
}

- (void).cxx_destruct;
- (void)HandleFavoritesSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)SyncByNotify:(unsigned int)arg1;
- (void)aysncHandleFavoritesSyncRespCmdList:(id)arg1 Response:(id)arg2;
- (void)clearSyncKey;
- (void)dealloc;
@property(nonatomic) __weak id <FavoritesSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getSyncKeyBufferFilePath;
- (id)init;
- (void)initDB:(id)arg1;
- (void)loadSyncKeyBuffer;
- (void)reloadSyncKeyBuffer;
- (_Bool)saveSyncKeyBuffer:(id)arg1;

@end

