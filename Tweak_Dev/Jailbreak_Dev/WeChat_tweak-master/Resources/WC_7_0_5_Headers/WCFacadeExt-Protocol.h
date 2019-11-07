//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCGroupMgrExt.h"

@class NSArray, NSString, WCDataItem, WCMediaItem, WCSNSMessage;

@protocol WCFacadeExt <WCGroupMgrExt>

@optional
- (void)onAddDownloadQueue:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onBGStorageUpdated;
- (void)onBeginDownload:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(NSString *)arg2 dataItemID:(NSString *)arg3;
- (void)onCommentReturn:(WCDataItem *)arg1;
- (void)onDataChangedWithAdded:(NSArray *)arg1 andChanged:(NSArray *)arg2 andDeleted:(NSArray *)arg3;
- (void)onDataItem:(WCDataItem *)arg1 likeFlagChanged:(_Bool)arg2;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onDataItemExposeFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
- (void)onDatabaseReloaded;
- (void)onDeleteUploadFailedHBDataItem:(WCDataItem *)arg1;
- (void)onDownloadFail:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(WCMediaItem *)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onHomepageTotalCountChanged:(long long)arg1;
- (void)onHomepageUpdate:(int)arg1 withAdded:(NSArray *)arg2 andChanged:(NSArray *)arg3 andDeleted:(NSArray *)arg4 andTip:(NSString *)arg5;
- (void)onLatestWCObjectChanged:(WCDataItem *)arg1;
- (void)onMediaItemSizeDidChange:(WCMediaItem *)arg1;
- (void)onMediaVideoDownloadSuccess:(WCMediaItem *)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onNetworkActivityStatusChanged;
- (void)onNoMoreTimelineData;
- (void)onNotificationShowSettingChanged;
- (void)onReveiceWCDeleteMessage:(NSArray *)arg1;
- (void)onReveiceWCMessage:(WCSNSMessage *)arg1;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onSetWCMessageNotifyFinished:(int)arg1 dataItemID:(NSString *)arg2 opFlag:(_Bool)arg3;
- (void)onSnsNewCommitFinished:(WCDataItem *)arg1;
- (void)onTimeLineVcWillAppear;
- (void)onTimeLineVcWillPop;
- (void)onTimelineVideoAutoPlayCfgChange;
- (void)onUpdateDataItemDetailFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
- (void)onWCBackgroundChanged;
- (void)onWCPostPrivacyChanged;
- (void)shouldCurrentAdSphereCardStartMonitoring:(NSString *)arg1 completeBlock:(void (^)(int))arg2;
@end

