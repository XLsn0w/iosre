//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WSVideoFlowBaseViewController.h"

#import "ITopStoryPluginMsgExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "WSFullVideoDragEducateViewDelegate.h"
#import "WSVideoFlowDataDelegate.h"
#import "WSVideoFlowTableViewCellDelegate.h"
#import "WSVideoPlayerViewDelegate.h"
#import "WSVideoWowCommentFloatViewDelegate.h"
#import "tableViewDelegate.h"

@class ForwardMessageLogicController, MMTableView, MMUILabel, NSString, UIImageView, UIView, WCTimeLineFooterView, WSFullVideoDragEducateView, WSVideoFlowTableViewCell, WSVideoFullScreenController, WSVideoModel, WSVideoTagInfo, WSVideoWowCommentFloatView;

@interface WSVideoFlowViewController : WSVideoFlowBaseViewController <WSVideoFlowDataDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, WSVideoFlowTableViewCellDelegate, MMRefreshTableFooterDelegate, UIViewControllerAnimatedTransitioning, WSVideoPlayerViewDelegate, WSFullVideoDragEducateViewDelegate, ITopStoryPluginMsgExt, WSVideoWowCommentFloatViewDelegate>
{
    UIView *_navBarBkg;
    UIView *_headerView;
    MMTableView *_tableView;
    MMUILabel *_mainTagTitle;
    WSVideoModel *_initVideoModel;
    WCTimeLineFooterView *_footerView;
    WSVideoFlowTableViewCell *_interactiveCell;
    WSVideoFlowTableViewCell *_feedBackingCell;
    _Bool _bShouldForcedRotationToPortrait;
    long long _orientation;
    _Bool _startCustomMgrRetreiveLocation;
    _Bool _canAutoPlay;
    _Bool _bDisplayNoDefaultVideo;
    _Bool _hasLoadFirstPage;
    _Bool _shouldReturnFromFullScreenWithScrollToCurrentVideo;
    _Bool _stopUpdateInteractsUntilScrollDone;
    _Bool _hasDidBePushed;
    _Bool _isOperateScrollingToNextVideo;
    _Bool _isSingleVideoPlay;
    WSVideoTagInfo *_initTagInfo;
    NSString *_contentTitle;
    ForwardMessageLogicController *_forwardMsgLogic;
    double _lastScrollTime;
    struct CGPoint _lastScrollOffset;
    double _titleViewPosY;
    int _cgiStatus;
    WSVideoFullScreenController *_fullPlayController;
    WSFullVideoDragEducateView *_dragTipsView;
    _Bool _isPauseByDragTips;
    _Bool _isDebugingExchange;
    _Bool _viewWillBePop;
    WSVideoWowCommentFloatView *_wowCommentView;
    NSString *_lastPlayedNetStatus;
    _Bool _bPagingEffect;
    _Bool _isMiniVideoFlow;
    _Bool _isDelayResizeing;
    UIImageView *_transitionVideoImageView;
    struct CGSize _lastViewSize;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)addTableHeaderView;
- (void)afterFoldInputView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
@property(nonatomic) _Bool bPagingEffect; // @synthesize bPagingEffect=_bPagingEffect;
- (void)breakDeepPlayingVideoMode;
- (_Bool)canLoadNextWithCurrent:(id)arg1;
- (_Bool)canPlayDefaultVideo;
- (_Bool)canPlayNextVideo:(id)arg1;
- (double)cellDistanceToPreferPoint:(id)arg1;
- (void)clearFullScreenDragTips;
- (double)commonInsetYForTableView;
- (id)currentIndexPath;
- (id)currentVideoModel;
- (void)dealloc;
- (_Bool)decideInteractiveCell;
- (void)decideNetLayer;
- (_Bool)decideScrollSpeed;
- (void)deepShowPlayingVideo;
- (void)delayToShowDeepPlayingModeIfNeeded;
- (void)delayToShowDeepPlayingModeIfNeeded:(_Bool)arg1 delay:(double)arg2;
- (void)didNetworkChange;
- (void)didReceiveMemoryWarning;
- (void)didSimTypeChangeToDaWangKaForReason:(int)arg1;
- (void)didVideoFeedBackConfirmWithReasons:(id)arg1;
- (void)doViewTransition;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 cell:(id)arg3 video:(id)arg4;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)fetchNextPage;
- (unsigned int)getCachedPlayTimeForVideo:(id)arg1;
- (id)getCurrentPlayerView;
- (id)getNormalTitle;
- (long long)getOrientation;
- (id)getTagTitle;
- (id)getTagTitleId;
- (id)getThumbData:(id)arg1;
- (_Bool)handleFullScreen:(_Bool)arg1 targetCell:(id)arg2 targetPlayView:(id)arg3 orientation:(long long)arg4;
- (void)handleWowSuccess:(_Bool)arg1;
- (_Bool)hasBottomInset;
- (_Bool)hasPlayAnyVideo;
- (_Bool)hitShowTopTagCategory;
- (void)initCustomWebSearchMgr;
- (void)initDataLogic:(id)arg1;
- (void)initNavigateItem;
- (void)initView;
- (id)initWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 params:(id)arg3;
- (_Bool)isCellInTargetArea:(id)arg1;
- (_Bool)isCellVisible:(id)arg1;
@property(nonatomic) _Bool isDelayResizeing; // @synthesize isDelayResizeing=_isDelayResizeing;
- (_Bool)isInteractiveCell:(id)arg1;
- (_Bool)isLandscape;
@property(readonly, nonatomic) _Bool isMiniVideoFlow; // @synthesize isMiniVideoFlow=_isMiniVideoFlow;
- (_Bool)isTagTitleVisible;
- (_Bool)isVideoCellStartPlaying:(id)arg1;
- (_Bool)isVideoPlaying;
- (_Bool)isWSVideoPlayAsFirstVideo:(id)arg1;
- (unsigned long long)judgeNetLogicChange;
@property(nonatomic) struct CGSize lastViewSize; // @synthesize lastViewSize=_lastViewSize;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)notifyVideoPlayMuteChange;
- (void)onCdnVideoDownLoadFinishForVideoModel:(id)arg1 retCode:(int)arg2 cdnTaskInfo:(id)arg3;
- (_Bool)onCheckCurrentVideoHandlingExpired;
- (void)onClickFeedBackButton:(id)arg1 sender:(id)arg2;
- (void)onClickLike:(_Bool)arg1 sender:(id)arg2;
- (void)onClickShare:(id)arg1;
- (void)onClickSource:(id)arg1;
- (void)onClickTag:(id)arg1 sender:(id)arg2;
- (void)onClickTitle:(id)arg1;
- (void)onConfirmEducateView;
- (void)onDefaultVideoUpdated;
- (void)onDelayToHideControlViews;
- (void)onDelayToHideControlViews:(id)arg1;
- (void)onFailInsertVideo:(id)arg1 reason:(int)arg2;
- (void)onFloatViewCommentClick:(id)arg1;
- (void)onFloatViewDidPop;
- (void)onFloatViewWillPop;
- (id)onGetInteractiveVid;
- (unsigned long long)onGetLastVisibleCellIndex;
- (void)onLongPressNav:(id)arg1;
- (void)onMaskPlayButtonClick:(id)arg1;
- (void)onOperateShare:(id)arg1;
- (id)onPlayNextVideo:(_Bool)arg1 currentVideo:(id)arg2;
- (void)onPlayerMuteChanged:(_Bool)arg1;
- (void)onPlayerViewClickLike:(_Bool)arg1 video:(id)arg2;
- (void)onPlayerViewClickTitle:(id)arg1;
- (void)onPlayerViewMaskPlayButtonClick:(id)arg1;
- (void)onPlayerViewMuteChanged:(_Bool)arg1;
- (_Bool)onPlayerViewUpdateVideoUrl:(id)arg1;
- (void)onRealBeginPlay:(id)arg1 autoPlay:(_Bool)arg2;
- (void)onRecommendInsertVideo:(id)arg1;
- (void)onRecordNetPauseAndPlay;
- (void)onReturnFromWebRecommendVideo:(int)arg1;
- (void)onShowControlViews:(id)arg1;
- (void)onSingleVideoFetchEnd:(id)arg1;
- (void)onSuccessInsertVideo:(id)arg1 fromVid:(id)arg2;
- (void)onTapMaskView:(id)arg1;
- (void)onTapSurroundings:(id)arg1;
- (id)onTryPlayNext:(_Bool)arg1 currentVideo:(id)arg2;
- (void)onTryResumeExpiredPlayer:(id)arg1;
- (void)onTryResumeExpiredPlayer:(id)arg1 withUrls:(id)arg2;
- (void)onUpdatePrefetchFlag:(_Bool)arg1;
- (_Bool)onVideoHasRecommend:(id)arg1;
- (_Bool)onVideoPlayEnd:(id)arg1;
- (void)pauseCurrentVideo;
- (void)playVideoForCell:(id)arg1 force:(_Bool)arg2;
- (void)preloadSurroundingForCell:(id)arg1;
- (void)presentShareToGoodLookDialogWithTitle:(id)arg1 thumbImage:(id)arg2 thumbImageURL:(id)arg3;
- (void)reportVideoExpose;
- (void)resetCurrentVideo;
- (void)resumeCurrentVideo;
- (void)resumeCurrentVideoPlayIfNeeded;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(retain, nonatomic) UIImageView *transitionVideoImageView; // @synthesize transitionVideoImageView=_transitionVideoImageView;
- (id)shareTag;
- (_Bool)shouldAutorotate;
- (_Bool)shouldFixOrientation:(long long)arg1;
- (void)showFullDragTipsIfNeeded;
- (void)showFullScreenDragTips;
- (void)showToast:(id)arg1;
- (void)showWangkaToast;
- (void)startForcedRotation:(long long)arg1;
- (void)stopVideo;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switchToWangka:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)tapNavigationTitle;
- (double)titleViewPosY;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (struct CGRect)transitionViewEndRectInView:(id)arg1;
- (void)updateTitleViewScrollingLayout;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

