//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IClearDataMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IMMFontMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "INewABTestMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCAdvertiseCommentUploadMgrDelegate-Protocol.h"
#import "WCBGImgLogicNotity-Protocol.h"
#import "WCBGRecommendMgrDelegate-Protocol.h"
#import "WCCdnDownloadImageDelegate-Protocol.h"
#import "WCCommentUploadMgrDelegate-Protocol.h"
#import "WCDownloadMgrDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCGroupMgrExt-Protocol.h"
#import "WCHomepageDelegate-Protocol.h"
#import "WCLogicMgrDelegate-Protocol.h"
#import "WCNotificationCenterMgrDelegate-Protocol.h"
#import "WCPreloadLogicDelegate-Protocol.h"
#import "WCTimelineDelegate-Protocol.h"
#import "WCUploadMgrDelegate-Protocol.h"

@class MyWCDB, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCAdvertiseCommentUploadMgr, WCAdvertiseDataHelper, WCAdvertiseLogicMgr, WCBGImgLogic, WCBGRecommendMgr, WCBrowseInfo, WCCanvasTypeMgr, WCCommentUploadMgr, WCDataItem, WCDownloadImageCdnMgr, WCDownloadMgr, WCDownloadVideoCDNMgr, WCGroupMgr, WCInputTextCacheMgr, WCLogicMgr, WCNotificationCenterMgr, WCOperationSetting, WCPatternCacheMgr, WCPreloadLogicMgr, WCSnsABTestMgr, WCSnsLocalCacheMgr, WCStrangerCommentMgr, WCTimeLineTipsMgr, WCTimelineMgr, WCUploadMgr;

@interface WCFacade : MMService <IContactMgrExt, IClearDataMgrExt, INewABTestMgrExt, PBMessageObserverDelegate, MMService, WCBGImgLogicNotity, WCDownloadMgrDelegate, WCTimelineDelegate, WCCommentUploadMgrDelegate, WCUploadMgrDelegate, WCNotificationCenterMgrDelegate, WCHomepageDelegate, WCLogicMgrDelegate, WCFacadeExt, WCBGRecommendMgrDelegate, WCGroupMgrExt, WCAdvertiseCommentUploadMgrDelegate, IMMFontMgrExt, WCPreloadLogicDelegate, IMsgExt, WCCdnDownloadImageDelegate>
{
    MyWCDB *m_database;
    WCAdvertiseDataHelper *m_adDataHelper;
    NSMutableArray *m_timelineWithLocalDatas;
    NSMutableDictionary *m_dicTimelineDataItem;
    NSMutableDictionary *m_dicTimeLineDataUICache;
    NSMutableDictionary *m_dicUserCommentsUICache;
    WCUploadMgr *m_uploadMgr;
    WCBGImgLogic *m_bgImgLogic;
    WCTimelineMgr *m_timelineMgr;
    WCPreloadLogicMgr *m_preloadLogicMgr;
    WCDownloadMgr *m_downloadMgr;
    WCDownloadImageCdnMgr *m_downloadImageCdnMgr;
    WCCommentUploadMgr *m_commentUploadMgr;
    WCAdvertiseCommentUploadMgr *m_advertiseCommentUploadMgr;
    WCNotificationCenterMgr *m_messageMgr;
    WCLogicMgr *m_logicMgr;
    WCAdvertiseLogicMgr *m_advertiseLogicMgr;
    WCBGRecommendMgr *m_bgMaster;
    WCStrangerCommentMgr *m_strangerCommentMgr;
    WCGroupMgr *m_groupMgr;
    WCPatternCacheMgr *m_patternCacheMgr;
    WCInputTextCacheMgr *m_inputTextCacheMgr;
    WCSnsABTestMgr *m_snsABTestMgr;
    WCSnsLocalCacheMgr *m_snsLocalCacheMgr;
    WCCanvasTypeMgr *m_canvasTypeMgr;
    WCDownloadVideoCDNMgr *m_downloadCDNMgr;
    WCTimeLineTipsMgr *m_timeLineTipsMgr;
    NSMutableDictionary *m_homepageMgrDic;
    NSMutableDictionary *m_networkEventDic;
    NSMutableSet *m_deletedItemSet;
    NSMutableSet *m_notShowImgTypeSet;
    NSMutableDictionary *m_dicSightStatusCache;
    NSMutableDictionary *m_dicSightDownloadProgressCache;
    NSMutableDictionary *m_dicSightViewCache;
    NSMutableSet *m_setAddedIDForClickedRatio;
    NSMutableSet *m_setAddedIDForThumbLoadedEfficency;
    NSMutableSet *m_setAddedIDForPicLoadedEfficency;
    WCBrowseInfo *m_browseInfo;
    NSMutableDictionary *m_dicStatExposureFeedId;
    int m_currentPage;
    WCDataItem *m_latestSeenDataItem;
    WCOperationSetting *m_operSetting;
    unsigned long long startEnterBackGroundTime;
    unsigned int m_clickCameraTime;
}

+ (void)reportSnsPostDragPic:(int)arg1 snsPostSave:(int)arg2;
- (void).cxx_destruct;
- (id)dataItemWithId:(id)arg1;
- (id)cdnGetSnsOperationsWithFeedId:(id)arg1;
- (void)onCdnDownloadImageFail:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageFinish:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageProcessChanged:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onCdnDownloadImageCancel:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageAddedQueue:(id)arg1 downloadType:(int)arg2;
- (void)onCdnDownloadImageBegin:(id)arg1 downloadType:(int)arg2;
- (void)StartDownloadImage:(id)arg1 DownloadType:(int)arg2;
- (void)setMessageNotificationForDataItem:(id)arg1 ignored:(_Bool)arg2;
- (void)markHasShowSnsCommitDragTip;
- (_Bool)shouldShowSnsCommitDragTip;
- (void)updateVideoDownloadModeWithMediaId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (unsigned long long)GetMediaVideoDownloadingModeWithMediaItem:(id)arg1;
- (void)delayDownloadVideoRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (_Bool)IsMediaItemInDownloadQueue:(id)arg1;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (void)StopDownloadVideoWithMediaItem:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (void)startPreloadSnsVideoForDataItem:(id)arg1;
- (unsigned long long)startDownloadSightMedia:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (unsigned long long)startDownloadSightMedia:(id)arg1;
- (unsigned long long)GetWCAlbumVideoDownloadMode:(id)arg1;
- (unsigned long long)GetWCVideoDownloadMode:(id)arg1;
- (void)onUpdateAdObjectDetail:(id)arg1;
- (_Bool)isCanvasTypesAllValid:(id)arg1;
- (void)updateSightThumbToMatchVideoIfNeededWithMediaItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBackGroundTime;
- (void)setStartEnterBackGroundTime;
- (void)logUploadFinished:(id)arg1;
- (void)logEnterBackground;
- (void)logEnterForeground;
- (int)getCurrentPage;
- (void)updateCurrentPage:(int)arg1;
- (id)getLocalSightDataItemsForWhatsNew;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)stopSightMgrHolding;
- (void)clearSightViewCache;
- (void)clearAllSightPlayStatusCache;
- (void)deleteSightViewByItemID:(id)arg1;
- (id)getSightViewByItemID:(id)arg1;
- (void)setSightView:(id)arg1 andItemID:(id)arg2;
- (void)deleteSightDownloadProgressByItemID:(id)arg1;
- (id)getSightDownloadProgressByItemID:(id)arg1;
- (void)setSightDownloadProgress:(float)arg1 andItemID:(id)arg2;
- (id)getSightPlayStatusByItemID:(id)arg1;
- (void)setSightPlayStatus:(_Bool)arg1 andItemID:(id)arg2;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onFontSizeChange;
- (id)getWCOperSetting;
- (void)trySaveWCOperSetting;
- (id)pathForWCOperationSetting;
- (_Bool)haveSeenItemForClickRatio:(id)arg1;
- (void)updateLastSeenItemForClickRatio:(id)arg1;
- (id)getLastSeenItemForClickRatio;
- (void)clearDelayShowInfoCache;
- (void)setShowTime:(unsigned int)arg1 WithFeedId:(id)arg2;
- (void)setDelayShowInfoNeedDelay:(id)arg1;
- (void)saveSnsLocalCache;
- (void)mergeSnsOperationsWithFeedId:(id)arg1 feedCreateTime:(unsigned int)arg2 snsOperationsData:(id)arg3;
- (id)getSnsOperationWrapWithFeedId:(id)arg1;
- (id)getSnsOperationsWithFeedId:(id)arg1;
- (void)onPreloadSnsVideoForDataItem:(id)arg1;
- (_Bool)isInPreloadAroundImgLimitTime;
- (_Bool)couldPreloadBigImageForUser:(id)arg1 limit:(int)arg2;
- (id)getAllAdDataItems;
- (id)getDownloadImageCdnMgr;
- (id)getDownloadMgr;
- (id)getTimelineMgr;
- (_Bool)hasPreloadDataItemForBigImage:(id)arg1;
- (_Bool)hasPreloadDataItemForSmallImage:(id)arg1;
- (void)resumePreloadImage;
- (void)pausePreloadImage;
- (_Bool)checkInvalidAdData;
- (void)increaseWCAdvertiseDataExposureCnt:(id)arg1;
- (void)SetWCAdvertiseDataIgnoreTip:(_Bool)arg1 ignoreCommengMsg:(_Bool)arg2 DataItem:(id)arg3;
- (void)SetWCAdvertiseDataIgnoreTip:(_Bool)arg1 DataItem:(id)arg2;
- (void)SpanUnInterestWCAdvertiseReasonListForData:(id)arg1;
- (void)UnInterestWCAdvertiseData:(id)arg1;
- (void)SetWCAdvertiseDataExposured:(id)arg1;
- (_Bool)hasAdvertiseInCache;
- (_Bool)hasAdvertiseData:(id)arg1;
- (id)getAdvertiseData:(id)arg1;
- (void)MergeWCAdvertiseDataAdInfo:(id)arg1;
- (void)MergeWCAdvertiseDataComments:(id)arg1;
- (void)cacheRepeatUrlAfterConfirmWithDocId:(id)arg1 snsOperationWrap:(id)arg2;
- (void)operateUrlFeed:(int)arg1 dataItem:(id)arg2;
- (_Bool)isOnRepeatUrlExperiment:(id)arg1;
- (_Bool)couldShowRepeatUrlMenuItem:(id)arg1;
- (id)getCanvasAdOutsideIconInfo;
- (void)parseSnsCanvasAdOutsideIcon:(id)arg1;
- (unsigned long long)getLatestReadMessageCreateTime;
- (void)timelineListStatusSync;
- (void)handleUnreadMsgListSyncWithCreateTime:(unsigned long long)arg1;
- (void)restartAllFailUploadFromLocalNotification;
- (id)getDataItemsByIds:(id)arg1;
- (void)onWCGroupModMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupSetMemberToGroupsReturn:(_Bool)arg1 username:(id)arg2 groupIDs:(id)arg3;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCDeleteGroupReturn:(_Bool)arg1 groupID:(id)arg2;
- (void)onWCChangeGroupNameReturn:(_Bool)arg1 groupID:(id)arg2;
- (void)onWCCreateGroupReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupUpdatedReturn:(_Bool)arg1;
- (void)onWCGroupRecommendUpdated;
- (void)onWCGroupUpdated;
- (void)setPostPrivacy:(int)arg1 withLabelNames:(id)arg2;
- (void)setPostPrivacy:(int)arg1 withGroupIDs:(id)arg2;
- (void)setPostPrivacy:(int)arg1;
- (id)getLastPostGroups;
- (int)getPostPrivacy;
- (id)getGroupsWithMember:(id)arg1;
- (void)modGroup:(id)arg1 newName:(id)arg2 members:(id)arg3 withScene:(int)arg4;
- (void)modGroup:(id)arg1 newName:(id)arg2 members:(id)arg3;
- (void)setMember:(id)arg1 toGroups:(id)arg2;
- (void)removeMembers:(id)arg1 fromGroup:(id)arg2 withScene:(int)arg3;
- (void)addMembers:(id)arg1 toGroup:(id)arg2 withScene:(int)arg3;
- (void)modifyGroupName:(id)arg1 newName:(id)arg2;
- (void)deleteGroup:(id)arg1;
- (void)createGroup:(id)arg1 withGroupName:(id)arg2;
- (void)updateAllRecommends;
- (void)setRecommendReadForGroup:(id)arg1;
- (id)getUnReadRecommendsForGroup:(id)arg1;
- (id)getReadRecommendsForGroup:(id)arg1;
- (void)localDeleteAllGroups;
- (_Bool)canUpdateAllGroups;
- (void)updateAllGroups;
- (_Bool)isUserInGroup:(id)arg1 GroupID:(id)arg2;
- (id)getGroupByID:(id)arg1;
- (id)getCustomGroups;
- (id)getAllGroups;
- (void)setShowNewTimelineEventNotification:(_Bool)arg1;
- (_Bool)isShowNewTimelineEventNotification;
- (_Bool)isNetworkActive;
- (void)endNetworkActivity:(long long)arg1 cgi:(long long)arg2;
- (void)beginNetworkActivity:(long long)arg1 cgi:(long long)arg2;
- (id)networkEventDic;
- (void)exposeDataItem:(id)arg1;
- (void)updateDataItemDetail:(id)arg1;
- (void)updateDataItemDetailWithGroupDetail:(id)arg1;
- (void)updateDataItemDetailByItem:(id)arg1;
- (void)setDataItemHate:(id)arg1;
- (void)setDataItemPublic:(id)arg1;
- (void)setDataItemPrivate:(id)arg1;
- (void)onSetWCMessageNotifyFinished:(int)arg1 dataItemID:(id)arg2 opFlag:(_Bool)arg3;
- (void)onAdvertiseItemDeleted:(id)arg1;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(id)arg2;
- (void)onDataItemExposeFinisehd:(int)arg1 dataItem:(id)arg2;
- (void)onUpdateDataItemDetailFinisehd:(int)arg1 dataItem:(id)arg2;
- (void)deleteMessage:(id)arg1;
- (void)deleteAllMessages;
- (void)markMessageAllReadWithSyncMessage:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (void)markMessageRead:(id)arg1;
- (id)getMessageFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getAllMessages;
- (id)getUnReadMessagesLimit:(int)arg1;
- (id)getUnReadMessages;
- (id)getLatestReadMessage;
- (id)getLastUnReadMessage;
- (unsigned int)getUnReadMessageCount;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceStrangerMessage:(id)arg1;
- (void)onReveiceWCMessages:(id)arg1;
- (void)onLatestWCObjectChanged:(id)arg1;
- (void)onAdvertiseCommentReturn:(id)arg1;
- (void)clickDelayShowFeed:(id)arg1;
- (void)exposureDelayShowFeed:(id)arg1;
- (_Bool)hitTheDelayShowExp:(id)arg1;
- (_Bool)couldRunSightPreload:(id)arg1;
- (void)onCommentReturn:(id)arg1;
- (void)commentObject:(id)arg1 toStranger:(id)arg2 content:(id)arg3 ref:(id)arg4 source:(long long)arg5;
- (void)likeObjectByID:(id)arg1 toStranger:(id)arg2 source:(long long)arg3;
- (_Bool)unCommentObject:(id)arg1 ofUser:(id)arg2 comment:(id)arg3;
- (_Bool)unLikeObject:(id)arg1 ofUser:(id)arg2;
- (void)commentObject:(id)arg1 ofUser:(id)arg2 content:(id)arg3 ref:(id)arg4 source:(long long)arg5 isActionAtAd:(_Bool)arg6;
- (void)commentObject:(id)arg1 ofUser:(id)arg2 content:(id)arg3 ref:(id)arg4 source:(long long)arg5;
- (void)likeObjectByID:(id)arg1 ofUser:(id)arg2 source:(long long)arg3;
- (void)likeObject:(id)arg1 ofUser:(id)arg2 source:(long long)arg3;
- (void)NotifyBackgroundChanged;
- (id)getUploadingDataItems;
- (void)NotifyToDownloadMedia:(id)arg1 downloadType:(long long)arg2;
- (void)NotifyToUploadWithTask:(id)arg1;
- (void)onBGStorageUpdated;
- (void)updateBGStorage;
- (id)getBGStorage;
- (void)setBGImgLikedForUser:(id)arg1 source:(long long)arg2;
- (_Bool)isBGImgLikedForUser:(id)arg1;
- (_Bool)hasBGImg:(id)arg1;
- (void)SetBGImgByImg:(id)arg1;
- (void)SetBGImgByMedia:(id)arg1;
- (id)backgroundImageByContact:(id)arg1;
- (void)onAddDownloadQueue:(id)arg1 downloadType:(int)arg2;
- (void)onBeginDownload:(id)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(int)arg3 total:(int)arg4;
- (void)updateDownloadConcurrentCount;
- (void)cancelDownloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)forceDownloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
- (void)forceDownloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)downloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
- (void)downloadMedia:(id)arg1 downloadType:(int)arg2;
- (void)pullDownloadMediaToFront:(id)arg1 downloadType:(int)arg2;
- (void)setDownloadScene:(int)arg1;
- (unsigned long long)getHomepageLimitFeedId:(id)arg1;
- (long long)getHomepageTotalCount:(id)arg1;
- (void)tryGetWCDataItemPattern:(id)arg1;
- (id)getStrangerDataItemByID:(id)arg1 ofPartner:(id)arg2;
- (id)getDataItemByID:(id)arg1;
- (id)getDataItemByID:(id)arg1 addLocal:(_Bool)arg2;
- (_Bool)cleanFailDataItemForSpam:(id)arg1;
- (void)onUploadRestarted:(id)arg1;
- (void)onUploadFailed:(id)arg1;
- (void)onUploadFinished:(id)arg1;
- (void)deleteFoldedSight:(id)arg1;
- (void)addFoldedSight:(id)arg1;
- (id)getFoldedSight;
- (void)deleteFailedComment:(id)arg1;
- (id)getFailedLike;
- (id)getFailedComment;
- (id)getFailedUploads;
- (void)deleteDataItemLocal:(id)arg1;
- (void)deleteDataItem:(id)arg1;
- (void)addFailDataItem:(id)arg1;
- (void)restartUploadDataItem:(id)arg1;
- (id)uploadDataItem:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkIfWeiShiGrant;
- (id)getRedEnvelopesInfoByDataItem:(id)arg1;
- (void)cacheFreeStatus:(id)arg1;
- (void)cacheRewardStatus:(id)arg1;
- (id)getCacheText:(id)arg1 refCommentItem:(id)arg2;
- (void)cacheText:(id)arg1 refDataItem:(id)arg2 refCommentItem:(id)arg3;
- (void)uncacheText:(id)arg1 refCommentItem:(id)arg2;
- (_Bool)updateTimelineTail;
- (_Bool)updateTimelineHead;
- (id)getLatestDataItem;
- (void)deleteAllTimelineDataItems;
- (id)getTimelineDataInCacheByItemID:(id)arg1;
- (id)getTimelineDataItemOfIndex:(long long)arg1;
- (long long)countOfTimelineDataItem;
- (void)reloadTimelineDataItems;
- (void)deduplicateTimelineDataItems;
- (unsigned int)getTimelineShowFlag;
- (void)endTimeline;
- (void)beginTimeline;
- (void)onRemoveCachesOfContentWithDataItemId:(id)arg1;
- (void)onRemoveCachesOfLikeUserWithDataItemId:(id)arg1;
- (void)onTimelineDataChanged:(id)arg1 andAdItems:(id)arg2;
- (void)onNoMoreTimelineData;
- (void)onTimelineDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onHomepage:(id)arg1 BGImgChanged:(id)arg2;
- (void)onHomepage:(id)arg1 totalCountChanged:(long long)arg2;
- (void)onHomepage:(id)arg1 limitFeedIdChanged:(unsigned long long)arg2;
- (void)onHomepageUpdate:(int)arg1 username:(id)arg2 withAdded:(id)arg3 andChanged:(id)arg4 andDeleted:(id)arg5;
- (id)getHomepageData:(id)arg1;
- (id)getCurrentUserHomepage;
- (id)innerGetHomepage:(id)arg1;
- (_Bool)updateHomePageTail:(id)arg1;
- (_Bool)updateHomePageHead:(id)arg1 source:(long long)arg2;
- (_Bool)updateHomePageHead:(id)arg1;
- (void)endHomepage:(id)arg1;
- (void)beginHomepage:(id)arg1;
- (id)GetRecommendUsr;
- (_Bool)isValidRecommendUsr:(id)arg1;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (void)modifyDataItem:(id)arg1 notify:(_Bool)arg2;
- (_Bool)LL_onBeforeReturnDataItem:(id)arg1;
- (_Bool)isShowThumbForType:(long long)arg1;
- (_Bool)isDataItemDeleted:(id)arg1;
- (void)markDataItemDeleted:(id)arg1;
- (id)deletedItemSet;
- (id)downloadCDNMgr;
- (id)snsLocalCacheMgr;
- (id)snsABTestMgr;
- (id)inputTextCacheMgr;
- (id)patternCacheMgr;
- (id)canvasTypeMgr;
- (id)groupMgr;
- (id)bgMaster;
- (id)preloadLogic;
- (id)bgImgLogic;
- (id)homepageMgr:(id)arg1;
- (id)advertiseLogicMgr;
- (id)logicMgr;
- (id)strangerCommentMgrWithDB;
- (id)messageMgrWithDB;
- (id)timeLineTipsMgr;
- (id)commentMgr;
- (id)uploadMgr;
- (id)timelineMgr;
- (id)downloadImageCdnMgr;
- (id)downloadMgr;
- (id)adDataHelper;
- (id)database;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)reloadDatabase;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)addAutoCleanTask;
- (id)getTimeLineWebViewExtraInfo:(id)arg1;
- (void)reportBrowseInfo;
- (void)logUserAction:(int)arg1 onScene:(int)arg2 forFeed:(id)arg3;
- (void)onAdForwardCanvasViewStateChange:(int)arg1;
- (void)onAdCanvasViewStateChange:(int)arg1;
- (void)onAdLongVideoViewStateChange:(int)arg1;
- (void)onAdForwardSteamVideoStateChange:(int)arg1;
- (void)onAdFullScreenSightStateChange:(int)arg1;
- (void)onAdDetailPageStateChange:(int)arg1;
- (void)onAdFullScreenImageViewStateChange:(int)arg1;
- (void)onPOIDetailForDataItem:(id)arg1 StateChange:(int)arg2;
- (void)onExternalArticleViewStateChange:(int)arg1;
- (void)onMPArticleViewStateChange:(int)arg1;
- (void)onWebViewForURL:(id)arg1 Ad:(_Bool)arg2 StreamVideo:(_Bool)arg3 StateChange:(int)arg4;
- (void)onFullScreenSightViewStateChange:(int)arg1;
- (void)onFullScreenImageViewStateChange:(int)arg1;
- (void)onNewPostViewStateChange:(int)arg1;
- (void)onMessageListViewStateChange:(int)arg1;
- (void)onAlbumViewForOthersStateChange:(int)arg1;
- (void)onAlbumViewForMySelfStateChange:(int)arg1;
- (void)onTimeLineViewStateChange:(int)arg1;
- (id)getBrowseInfo;
- (void)WCFacadeBrowseInfoReportOnForeground;
- (void)WCFacadeBrowseInfoReportOnBackground;
- (void)WCFacadeBrowseInfoReportOnTerminate;
- (void)WCFacadeBrowseInfoReportOnUnRegisterExt;
- (void)WCFacadeBrowseInfoReportOnRegisterExt;
@property(nonatomic) int switchInfo;
- (void)onModifyContact:(id)arg1;
- (void)removeCachesByContact:(id)arg1;
- (void)removeCachesOfContentWithUserComment:(id)arg1;
- (void)setLayoutStylesOfContent:(id)arg1 withUserComment:(id)arg2 width:(double)arg3;
- (id)layoutStylesOfContentWithUserComment:(id)arg1 width:(double)arg2;
- (void)removeContentHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)setContentHeight:(double)arg1 forWidth:(double)arg2 withUserComment:(id)arg3;
- (double)contentHeightForWidth:(double)arg1 withUserComment:(id)arg2;
- (void)removeCachesOfContentWithDataItemId:(id)arg1;
- (void)removeCachesOfLikeUserWithDataItemId:(id)arg1;
- (void)setLayoutStylesOfLikeUser:(id)arg1 withDataItem:(id)arg2 width:(double)arg3;
- (id)layoutStylesOfLikeUserWithDataItem:(id)arg1 width:(double)arg2;
- (void)setlikeUserHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3;
- (double)likeUserHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)setLayoutStylesOfContentDesc:(id)arg1 withDataItem:(id)arg2 width:(double)arg3 isShowDetail:(_Bool)arg4 scene:(int)arg5;
- (id)layoutStylesOfContentDescWithDataItem:(id)arg1 width:(double)arg2 isShowDetail:(_Bool)arg3 scene:(int)arg4;
- (void)removeContentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (void)setContentDescHeight:(double)arg1 forWidth:(double)arg2 withDataItem:(id)arg3;
- (double)contentDescHeightForWidth:(double)arg1 withDataItem:(id)arg2;
- (id)getTipData:(id)arg1 layerId:(id)arg2;
- (_Bool)hiddenTip:(id)arg1 dataItem:(id)arg2;
- (_Bool)hitActionListShowTip:(id)arg1 layerId:(id)arg2;
- (_Bool)isFirstTip:(id)arg1 layerId:(id)arg2;
- (id)getShowTip:(id)arg1 layerId:(id)arg2;
- (id)getLayerIdForDataItem:(id)arg1;
- (void)replaceTipData:(id)arg1 dataItem:(id)arg2 layerId:(id)arg3;
- (void)removeTipData:(id)arg1 layerId:(id)arg2;
- (void)setDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (_Bool)isDataItemShowDetail:(id)arg1;
- (unsigned int)getMaxCacheLogCount;
- (unsigned int)getMaxCacheTime;
- (_Bool)needUploadData;
- (void)exposurStatExitTimeLine;
- (void)reportData;
- (void)tryReportData;
- (void)recordFeedExposureWithFeedId:(id)arg1 appId:(id)arg2;
- (_Bool)hadExposuredWithFeedId:(id)arg1;
- (id)getExposureFeedIdDic;
- (_Bool)saveExposureFeedIdDic;
- (id)pathForExposureDicCache;
- (void)LLDelete_onAfterDeleteDataItemFinished:(id)arg1;
- (void)LLDelete_onBeforeDeleteDataItem:(id)arg1;
- (void)notifyTotalCountWhenDataItemDeleted:(id)arg1;
- (void)LLComment_onBeforeReturnUnLikeDataItem:(id)arg1;
- (void)LLComment_onBeforeReturnUnCommentDataItem:(id)arg1 comment:(id)arg2;
- (void)LLComment_onBeforeReturnStrangerDataItem:(id)arg1 partner:(id)arg2;
- (void)LLComment_onBeforeReturnDataItem:(id)arg1;
- (void)LLUpload_onAfterUploadTaskRestarted:(id)arg1;
- (void)LLUpload_onAfterUploadTaskFailed:(id)arg1;
- (void)LLUpload_onAfterUploadTaskFinished:(id)arg1;
- (void)LLUpload_onAfterAddUploadTask:(id)arg1;
- (void)LLUpload_onBeforeAddUploadTask:(id)arg1;
- (void)logSnsSightClick:(id)arg1 sightVideoExist:(_Bool)arg2 autoPlay:(_Bool)arg3;
- (void)tryLogABTestResultTime:(id)arg1 dataItemId:(id)arg2 startTime:(_Bool)arg3 endTime:(_Bool)arg4;
- (void)logABTestResult:(id)arg1 dataItemId:(id)arg2 tipActionResult:(id)arg3;
- (void)tryReportABTestResult;
- (void)removeSucPreloadInfoForItemId:(id)arg1;
- (void)addFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)removeFirstClickDataItemForPreloadBigImage:(id)arg1;
- (_Bool)hasFirstClickDataItemForPreloadBigImage:(id)arg1;
- (void)onClickPostButtonForStat:(_Bool)arg1 contentType:(unsigned int)arg2;
- (void)onClickCameraButtonForStat;
- (void)removePreloadItemForBigImage:(id)arg1;
- (void)tryLogPreloadImageResult;
- (void)tryLogPreloadSucForBigImageLoadedEfficency:(id)arg1 mid:(id)arg2;
- (void)tryLogBigImageLoadedEfficency:(id)arg1 mid:(id)arg2 loadedResult:(unsigned int)arg3 costTime:(unsigned int)arg4;
- (_Bool)shouldLogBigImageLoadedEfficency:(id)arg1;
- (void)tryLogPreloadSucForSmallImageLoadedEfficency:(id)arg1;
- (void)tryLogSmallImageLoadedEfficency:(id)arg1 loadedResult:(unsigned int)arg2 costTime:(unsigned int)arg3 loadedCount:(unsigned int)arg4;
- (_Bool)shouldLogSmallImageLoadedEfficency:(id)arg1;
- (void)removeItemForClickBigImage:(id)arg1;
- (void)tryLogClickBigImage:(id)arg1 clickIndex:(unsigned int)arg2 clickCount:(unsigned int)arg3 downloadCount:(unsigned int)arg4 scanIndexArrayStr:(id)arg5 scaleOutIndexArrayStr:(id)arg6 scaleInIndexArrayStr:(id)arg7;
- (void)logPreviewBigImageCount:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)logSimpleScreenShot;
- (void)logAdContext:(id)arg1 adPreFeedList:(id)arg2 adNextFeedList:(id)arg3;
- (void)logEndScreenShot:(unsigned long long)arg1;
- (void)logOtherContentPostiont:(id)arg1 frame:(struct CGRect)arg2 timeStamp:(unsigned long long)arg3;
- (void)logFeedCommentPosition:(id)arg1 comment:(id)arg2 frame:(struct CGRect)arg3 timeStamp:(unsigned long long)arg4;
- (void)logFeedLikeListPosition:(id)arg1 frame:(struct CGRect)arg2 timeStamp:(unsigned long long)arg3;
- (void)logFeedContentPosition:(id)arg1 frame:(struct CGRect)arg2 timeStamp:(unsigned long long)arg3;
- (void)logStartScreenShot:(double)arg1 topBarHeight:(double)arg2 screenWidth:(double)arg3 screenHeight:(double)arg4 visibleTopOffset:(double)arg5 visibleBottomOffset:(double)arg6 timeStamp:(unsigned long long)arg7;
- (void)logDataListChanged:(unsigned int)arg1 startFeed:(id)arg2 endFeed:(id)arg3;
- (id)asyncLogOpInfoForForwardAttachVideo:(id)arg1;
- (id)asyncLogEndViewAlbum:(id)arg1;
- (void)logEndViewSight:(id)arg1;
- (void)logEndViewBigImage:(id)arg1 downloadedPictureCount:(unsigned int)arg2;
- (id)asyncLogEndViewUrl:(id)arg1;
- (void)logStartRefCommentFeed:(id)arg1 refComment:(id)arg2;
- (void)logStartCommentFeed:(id)arg1;
- (void)logShowFloatView:(id)arg1;
- (void)logDeleteFeed:(id)arg1;
- (void)logClickToPlayMusic:(id)arg1 musicInfo:(id)arg2;
- (void)logRefreshNextPage:(unsigned int)arg1 hasEnoughLocalData:(_Bool)arg2;
- (void)logRefreshHead:(unsigned int)arg1;
- (void)logClickFailFeed:(id)arg1 index:(unsigned int)arg2 failCount:(unsigned int)arg3;
- (void)logClickUnreadMessage:(unsigned int)arg1;
- (void)logClickAdPoiInfo:(id)arg1;
- (void)logClickPoiInfo:(id)arg1;
- (void)logChangeAlbumBkgImage:(id)arg1;
- (void)logClickHeadImageToProfile:(id)arg1 userName:(id)arg2;
- (void)logClickHeadImageToAlbum:(id)arg1 userName:(id)arg2;
- (void)logClickNickNameToProfile:(id)arg1 userName:(id)arg2;
- (void)logClickNickNameToAlbum:(id)arg1 userName:(id)arg2;
- (void)logClickToViewUrl:(id)arg1;
- (void)logClickToViewSight:(id)arg1 mediaId:(id)arg2;
- (void)logClickToViewBigImage:(id)arg1 mediaId:(id)arg2 pictureIndex:(int)arg3;
- (void)logTranslateFeedComment:(id)arg1 comment:(id)arg2;
- (void)logTranslateFeedContent:(id)arg1;
- (void)logExposeFeed:(id)arg1 reason:(id)arg2;
- (id)asyncLogFavFeed:(id)arg1 url:(id)arg2;
- (id)asyncLogForwardToFriend:(id)arg1 friendName:(id)arg2 url:(id)arg3;
- (id)asyncLogForwardToGroup:(id)arg1 groupName:(id)arg2 url:(id)arg3;
- (void)logRefCommentFeed:(id)arg1 refComment:(id)arg2;
- (void)logCommentFeed:(id)arg1;
- (void)logLikeFeed:(id)arg1;
- (id)asyncLogOpInfoForForwardPostFeed:(id)arg1;
- (id)asyncLogOpInfoForNormalPostFeed;
- (void)logExitTimeline:(_Bool)arg1 hasNewFeedInServer:(_Bool)arg2 startReadId:(id)arg3 endReadId:(id)arg4 waitLoadedFeedId:(id)arg5 browseFeedCount:(unsigned int)arg6 browseNewFeedCount:(unsigned int)arg7;
- (void)logEnterTimeline:(_Bool)arg1 unreadMessageCount:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

