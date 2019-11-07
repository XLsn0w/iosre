//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WSVideoFlowDataDelegate-Protocol.h"
#import "WSVideoFlowDataExt-Protocol.h"
#import "WSVideoFlowFeedBackDelegate-Protocol.h"
#import "WSVideoFlowTableViewCellDelegate-Protocol.h"
#import "WSVideoPlayerViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CMessageWrap, FTSWebSearchMgr, ForwardMessageLogicController, MMTableView, MMUILabel, NSString, UIImageView, UIView, WCDataItem, WCTimeLineFooterView, WSStreamPlayerView, WSVideoFlowDataLogic, WSVideoFlowFeedBackViewController, WSVideoFlowTableViewCell, WSVideoModel, WSVideoTagInfo;

@interface WSVideoFlowViewController : MMUIViewController <WSVideoFlowDataDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, WSVideoFlowDataExt, WSVideoFlowTableViewCellDelegate, MMRefreshTableFooterDelegate, UIViewControllerAnimatedTransitioning, WCActionSheetDelegate, WCCommitViewResultDelegate, ForwardMessageLogicDelegate, CNetworkStatusExt, WSVideoPlayerViewDelegate, WSVideoFlowFeedBackDelegate>
{
    UIView *_navBarBkg;
    UIView *_headerView;
    MMTableView *_tableView;
    MMUILabel *_mainTagTitle;
    FTSWebSearchMgr *_webSearchMgr;
    WSVideoFlowDataLogic *_dataLogic;
    WSVideoModel *_initVideoModel;
    WSVideoModel *_sharingVideoModel;
    WCTimeLineFooterView *_footerView;
    WSVideoFlowTableViewCell *_interactiveCell;
    WSStreamPlayerView *_fullScreenPlayerView;
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
    WSVideoFlowFeedBackViewController *_feedBackPopupController;
    UIImageView *_transitionVideoImageView;
    WCDataItem *_srcSnsItem;
    CMessageWrap *_srcMsgWrap;
}

@property(retain, nonatomic) CMessageWrap *srcMsgWrap; // @synthesize srcMsgWrap=_srcMsgWrap;
@property(retain, nonatomic) WCDataItem *srcSnsItem; // @synthesize srcSnsItem=_srcSnsItem;
@property(retain, nonatomic) UIImageView *transitionVideoImageView; // @synthesize transitionVideoImageView=_transitionVideoImageView;
- (void).cxx_destruct;
- (void)onMaskPlayButtonClick:(id)arg1;
- (id)onPlayNextVideo:(_Bool)arg1 currentVideo:(id)arg2;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)preloadSurroundingForCell:(id)arg1;
- (void)doReportVideoClickWithRealSharer:(id)arg1 andSession:(id)arg2 andScene:(unsigned int)arg3;
- (void)reportVideoExpose;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (struct CGRect)transitionViewEndRectInView:(id)arg1;
- (double)commonInsetYForTableView;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (id)genUploadTask:(id)arg1;
- (void)shareToTimeline;
- (void)shareToFriend;
- (void)resumeCurrentVideo;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isLandscape;
- (void)startForcedRotation:(long long)arg1;
- (void)viewDidTransitionToNewSize;
- (_Bool)handleFullScreen:(_Bool)arg1 targetCell:(id)arg2 targetPlayView:(id)arg3 orientation:(long long)arg4;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)breakDeepPlayingVideoMode;
- (void)deepShowPlayingVideo;
- (void)delayToShowDeepPlayingModeIfNeeded:(_Bool)arg1 delay:(double)arg2;
- (void)delayToShowDeepPlayingModeIfNeeded;
- (void)onPlayerViewMaskPlayButtonClick:(id)arg1;
- (void)onDelayToHideControlViews:(id)arg1;
- (void)onShowControlViews:(id)arg1;
- (_Bool)isInteractiveCell:(id)arg1;
- (unsigned int)getCachedPlayTimeForVideo:(id)arg1;
- (id)onTryPlayNext:(_Bool)arg1 currentVideo:(id)arg2;
- (_Bool)canLoadNextWithCurrent:(id)arg1;
- (_Bool)hasPlayAnyVideo;
- (void)onRealBeginPlay:(id)arg1 autoPlay:(_Bool)arg2;
- (void)onClickCellTag:(id)arg1 sender:(id)arg2;
- (void)onClickCellSource:(id)arg1;
- (void)onClickCellTitle:(id)arg1;
- (void)onClickShare:(id)arg1;
- (_Bool)onVideoPlayEnd:(id)arg1;
- (void)onWSVideoFeedBackConfirm:(id)arg1 reasons:(id)arg2;
- (void)onWSVideoFeedBackClose;
- (void)onClickFeedBack:(id)arg1 button:(id)arg2;
- (void)onTapSurroundings:(id)arg1;
- (void)onTapMaskView:(id)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 cell:(id)arg3 video:(id)arg4;
- (void)onReturnFromWebRecommendVideo:(int)arg1;
- (void)onUpdatePrefetchFlag:(_Bool)arg1;
- (void)onUpdateVideoUrlForVideo:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isVideoCellStartPlaying:(id)arg1;
- (_Bool)decideScrollSpeed;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTitleViewScrollingLayout;
- (void)onSystemTerminate;
- (void)onSystemEnterForeground;
- (void)onSystemEnterBackground;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)finishVideoPlayReport;
- (void)launchTagVideoFlow:(id)arg1 withTagInfo:(id)arg2;
- (void)launchWebView:(id)arg1;
- (void)fetchNextPage;
- (void)closePopup;
- (void)showToast:(id)arg1;
- (_Bool)hasBottomInset;
- (_Bool)isFromShare;
- (_Bool)decideInteractiveCell;
- (void)stopVideo;
- (void)playVideoForCell:(id)arg1 force:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)isCellInTargetArea:(id)arg1;
- (_Bool)isCellVisible:(id)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (double)titleViewPosY;
- (_Bool)isTagTitleVisible;
- (void)addTableHeaderView;
- (void)initView;
- (void)onTapNavItem:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initNavigateItem;
- (id)getNormalTitle;
- (id)getTagTitle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)resumeCurrentVideoPlayIfNeeded;
- (_Bool)canPlayDefaultVideo;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initDataLogic:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)initCustomWebSearchMgr;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (void)dealloc;
- (id)initWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

