//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WADynamicBackgroundGLViewControllerDelegate.h"
#import "WAMainFrameTaskItemMgrExt.h"
#import "WAMainFrameTaskbarOperationViewControllerDelegate.h"
#import "WASearchControllerDelegate.h"

@class CADisplayLink, CAGradientLayer, CAShapeLayer, DynamicBackgroundSystemConfig, MFTitleView, MMUIViewController, NSMutableArray, NSString, NewMainFrameRightTopMenuBtn, UIButton, UICollectionReusableView, UICollectionView, UIImageView, UILabel, UISearchBar, WADynamicBackgroundGLViewController, WAMainFrameTaskBarCloseArea, WAMainFrameTaskBarDeleteActionWindow, WAMainFrameTaskBarDotLoadingView, WAMainFrameTaskBarDragContext, WAMainFrameTaskBarLogic, WAMainFrameTaskBarSearchBar, WAMainFrameTaskMoreCollectionViewCell, WAStarCollectionViewLayout;

@interface WAMainFrameTaskBarView : UIView <WAMainFrameTaskItemMgrExt, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WAMainFrameTaskbarOperationViewControllerDelegate, WASearchControllerDelegate, WADynamicBackgroundGLViewControllerDelegate>
{
    _Bool _containerVCDisappearing;
    _Bool _visible;
    _Bool _draggingShowState;
    _Bool _showState;
    _Bool _isSpread;
    _Bool _isStarNodeSpread;
    _Bool _containerTableViewIsSettingInset;
    _Bool _isPresentingSearchPage;
    _Bool _forbidInnerItemTransform;
    _Bool _tapTicState;
    _Bool _reseted;
    _Bool _isInEditMode;
    _Bool _tipAdded;
    _Bool _isAnimatingMoreView;
    _Bool _canShowDynamicBackground;
    _Bool _isDraggingDown;
    _Bool _isShowSearchBar;
    _Bool _isAnimatingShowing;
    _Bool _isAnimatingHiding;
    _Bool _currentInDarkStyle;
    id <WAMainFrameTaskBarViewDelegate> _taskBarViewDelegate;
    MMUIViewController *_containerVC;
    UIView *_fakeNavigationBottomBackground;
    UIView *_fakeNavigationBackground;
    UIView *_backgroundContainerView;
    UIView *_backgroundView;
    WADynamicBackgroundGLViewController *_dynamicBGVC;
    CAGradientLayer *_backgroundLayer;
    UIView *_contentView;
    UICollectionReusableView *_topMarginReusableView;
    UIView *_topMarginView;
    UILabel *_taskTitleLabel;
    UICollectionReusableView *_gapMarginReusableView;
    UIView *_gapMarginView;
    UILabel *_starTitleLabel;
    UIView *_fakeTopTitleView;
    UILabel *_fakeTopTitleLabel;
    UIView *_fakeTopTitleSeperateLine;
    UIView *_transformViewContainerView;
    UIView *_mixedCollectionViewContainerView;
    UIView *_transformView;
    CAGradientLayer *_gradientLayer;
    UICollectionView *_mixedCollectionView;
    WAMainFrameTaskBarCloseArea *_closeArea;
    UIView *_closeAreaBackgroundView;
    UIImageView *_closeImageView;
    UILabel *_closeLabel;
    UIButton *_closeButton;
    UIView *_searchArea;
    WAMainFrameTaskBarSearchBar *_searchBar;
    UISearchBar *_realSearchBar;
    UIView *_emptyView;
    UIImageView *_emptyLogo;
    UILabel *_emptyTips;
    UIView *_starEmptyView;
    UILabel *_starEmptyTips;
    CAShapeLayer *_starDashLayer;
    WAMainFrameTaskBarDotLoadingView *_arrowImageView;
    WAStarCollectionViewLayout *_mixedLayout;
    WAMainFrameTaskBarLogic *_taskBarLogic;
    NSMutableArray *_mixedSectionData;
    WAMainFrameTaskBarDeleteActionWindow *_operationWindow;
    WAMainFrameTaskBarDragContext *_dragContext;
    UIView *_currentStarTip;
    UIImageView *_allowStarTip;
    UIView *_forbidStarTip;
    UIImageView *_forbidInfoImageView;
    UILabel *_forbidLabel;
    WAMainFrameTaskMoreCollectionViewCell *_moreView;
    DynamicBackgroundSystemConfig *_manualBackgroundSystemConfig;
    CADisplayLink *_displayLink;
    double _manualColorRatio;
    UIView *_fakeNavigationBarView;
    UIView *_fakeNavigationBarBackgroundView;
    UIView *_fakeNavigationBarInnerView;
    MFTitleView *_fakeNavigationBarTitleView;
    NewMainFrameRightTopMenuBtn *_fakeNavigationBarRightButton;
    UIButton *_fakeMenuBtnArea;
    struct CGPoint _tableViewLastContentOffset;
}

- (void).cxx_destruct;
- (void)addGradientMaskView;
@property(retain, nonatomic) UIImageView *allowStarTip; // @synthesize allowStarTip=_allowStarTip;
- (void)animateToHide;
- (void)animateToHideAllowStarTips;
- (void)animateToHideForbidTips;
- (void)animateToShow;
- (void)animateToShowAllowStarTipsOnView:(id)arg1;
- (void)animateToShowForbidTipsOnView:(id)arg1 withForbidTips:(id)arg2;
@property(retain, nonatomic) WAMainFrameTaskBarDotLoadingView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (_Bool)backToNormal;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
- (void)backgroundDisplayLink:(id)arg1;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)becomeUnVisible;
- (void)becomeVisible;
- (void)buildBackgroundLayer;
- (void)buildGLLayer;
- (void)buildManualBackground;
- (void)buildManualBackgroundDisplayLink;
- (void)buildManualBackgroundSystem;
- (double)calCloseAreaHeight;
- (double)calFakeNavigationBarHeight;
- (double)calItemGap;
- (double)calItemPerLine;
- (void)calItemPerLine:(unsigned int *)arg1 itemGap:(double *)arg2 sectionInset:(double *)arg3;
- (double)calMixedCollectionViewStarNodeHeight;
- (double)calMixedCollectionViewStarViewHeight;
- (double)calMixedCollectionViewTaskNodeHeight;
- (double)calMixedCollectionViewTaskViewHeight;
- (double)calSectionInset;
- (double)calTaskBarHeight;
- (double)calTitleLabelLeftMargin;
- (_Bool)canBecomeFirstResponder;
@property(nonatomic) _Bool canShowDynamicBackground; // @synthesize canShowDynamicBackground=_canShowDynamicBackground;
- (void)checkViewNodes;
@property(retain, nonatomic) WAMainFrameTaskBarCloseArea *closeArea; // @synthesize closeArea=_closeArea;
@property(retain, nonatomic) UIView *closeAreaBackgroundView; // @synthesize closeAreaBackgroundView=_closeAreaBackgroundView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 dragTypeForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dragViewForItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 dragViewFromPointForItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 dragViewToPointForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 dragingView:(id)arg2 didDragToPosition:(struct CGPoint)arg3;
- (_Bool)collectionView:(id)arg1 isIndexPathNeedDragDelay:(id)arg2;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemCenterIsInAddArea:(struct CGPoint)arg2 fromIndexPath:(id)arg3 toAddIndexPath:(id *)arg4;
- (_Bool)collectionView:(id)arg1 itemCenterIsInDeleteArea:(struct CGPoint)arg2;
- (_Bool)collectionView:(id)arg1 itemDidCommitToDeleteAtIdexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemDidDeleteSuccessAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemDidMoveInDeleteAreaAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemDidMoveOutDeleteAreaAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(nonatomic) _Bool containerTableViewIsSettingInset; // @synthesize containerTableViewIsSettingInset=_containerTableViewIsSettingInset;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) _Bool containerVCDisappearing; // @synthesize containerVCDisappearing=_containerVCDisappearing;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool currentInDarkStyle; // @synthesize currentInDarkStyle=_currentInDarkStyle;
@property(retain, nonatomic) UIView *currentStarTip; // @synthesize currentStarTip=_currentStarTip;
- (void)dealloc;
- (void)didRotate:(id)arg1;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) WAMainFrameTaskBarDragContext *dragContext; // @synthesize dragContext=_dragContext;
- (void)dragUpToClose;
@property(nonatomic) _Bool draggingShowState; // @synthesize draggingShowState=_draggingShowState;
@property(retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC; // @synthesize dynamicBGVC=_dynamicBGVC;
@property(retain, nonatomic) UIImageView *emptyLogo; // @synthesize emptyLogo=_emptyLogo;
@property(retain, nonatomic) UILabel *emptyTips; // @synthesize emptyTips=_emptyTips;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
- (void)endAnimateToHide;
- (void)endAnimateToShow;
- (void)endLoadBGWebView;
@property(retain, nonatomic) UIButton *fakeMenuBtnArea; // @synthesize fakeMenuBtnArea=_fakeMenuBtnArea;
@property(retain, nonatomic) UIView *fakeNavigationBackground; // @synthesize fakeNavigationBackground=_fakeNavigationBackground;
@property(retain, nonatomic) UIView *fakeNavigationBarBackgroundView; // @synthesize fakeNavigationBarBackgroundView=_fakeNavigationBarBackgroundView;
@property(retain, nonatomic) UIView *fakeNavigationBarInnerView; // @synthesize fakeNavigationBarInnerView=_fakeNavigationBarInnerView;
@property(retain, nonatomic) NewMainFrameRightTopMenuBtn *fakeNavigationBarRightButton; // @synthesize fakeNavigationBarRightButton=_fakeNavigationBarRightButton;
@property(retain, nonatomic) MFTitleView *fakeNavigationBarTitleView; // @synthesize fakeNavigationBarTitleView=_fakeNavigationBarTitleView;
@property(retain, nonatomic) UIView *fakeNavigationBarView; // @synthesize fakeNavigationBarView=_fakeNavigationBarView;
@property(retain, nonatomic) UIView *fakeNavigationBottomBackground; // @synthesize fakeNavigationBottomBackground=_fakeNavigationBottomBackground;
@property(retain, nonatomic) UILabel *fakeTopTitleLabel; // @synthesize fakeTopTitleLabel=_fakeTopTitleLabel;
@property(retain, nonatomic) UIView *fakeTopTitleSeperateLine; // @synthesize fakeTopTitleSeperateLine=_fakeTopTitleSeperateLine;
@property(retain, nonatomic) UIView *fakeTopTitleView; // @synthesize fakeTopTitleView=_fakeTopTitleView;
@property(retain, nonatomic) UIImageView *forbidInfoImageView; // @synthesize forbidInfoImageView=_forbidInfoImageView;
@property(nonatomic) _Bool forbidInnerItemTransform; // @synthesize forbidInnerItemTransform=_forbidInnerItemTransform;
@property(retain, nonatomic) UILabel *forbidLabel; // @synthesize forbidLabel=_forbidLabel;
@property(retain, nonatomic) UIView *forbidStarTip; // @synthesize forbidStarTip=_forbidStarTip;
@property(retain, nonatomic) UICollectionReusableView *gapMarginReusableView; // @synthesize gapMarginReusableView=_gapMarginReusableView;
@property(retain, nonatomic) UIView *gapMarginView; // @synthesize gapMarginView=_gapMarginView;
- (union _GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (double)getBackgourndViewAlpha;
- (id)getBackgroundViewColor;
- (unsigned long long)getDragType;
- (double)getFullScreenHeight;
- (id)getIndexPathForFirstTaskItem;
- (id)getIndexPathForLastTaskItem;
- (id)getItemDataFromIndexPath:(id)arg1;
- (double)getSelfContentViewY;
- (_Bool)getStarNodeShowState;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)hideFakeSearchBarAnimated:(_Bool)arg1;
- (void)hideFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (void)hideFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideOperationWindow;
- (void)hideRealSearchBarAnimated:(_Bool)arg1;
- (void)hideRealSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initArrow;
- (void)initBackgroundView;
- (void)initCloseArea;
- (void)initCloseAreaBackgroundView;
- (void)initContentView;
- (void)initEmptyView;
- (void)initFakeNavigationBarView;
- (void)initFakeTopTitleView;
- (void)initGapMarginView;
- (void)initMixedCollectionView;
- (void)initMoreView;
- (void)initRealSearchBarIfNeeded;
- (void)initSearchArea;
- (void)initStarEmptyView;
- (void)initTopMarginView;
- (void)initView;
- (id)initWithMainFrameTaskBarLogic:(id)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool isAnimatingHiding; // @synthesize isAnimatingHiding=_isAnimatingHiding;
@property(nonatomic) _Bool isAnimatingMoreView; // @synthesize isAnimatingMoreView=_isAnimatingMoreView;
@property(nonatomic) _Bool isAnimatingShowing; // @synthesize isAnimatingShowing=_isAnimatingShowing;
@property(nonatomic) _Bool isDraggingDown; // @synthesize isDraggingDown=_isDraggingDown;
- (_Bool)isDynamicBackgroundDarkStyle;
@property(nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
- (_Bool)isPointInItemArea:(struct CGPoint)arg1;
- (_Bool)isPointInStarAddArea:(struct CGPoint)arg1;
@property(nonatomic) _Bool isPresentingSearchPage; // @synthesize isPresentingSearchPage=_isPresentingSearchPage;
@property(nonatomic) _Bool isShowSearchBar; // @synthesize isShowSearchBar=_isShowSearchBar;
@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(nonatomic) _Bool isStarNodeSpread; // @synthesize isStarNodeSpread=_isStarNodeSpread;
- (_Bool)isXDevice;
- (void)layoutArrow;
- (void)layoutBackgroundView;
- (void)layoutContentView;
- (void)layoutEmptyView;
- (void)layoutFakeNavigationBarRightButton;
- (void)layoutMoreView;
- (void)layoutOperationWindow;
- (void)layoutStarEmptyView;
- (void)layoutSubviews;
@property(retain, nonatomic) DynamicBackgroundSystemConfig *manualBackgroundSystemConfig; // @synthesize manualBackgroundSystemConfig=_manualBackgroundSystemConfig;
@property(nonatomic) double manualColorRatio; // @synthesize manualColorRatio=_manualColorRatio;
- (union _GLKVector4)mixColorWithA:(union _GLKVector4)arg1 b:(union _GLKVector4)arg2 portion:(double)arg3;
@property(retain, nonatomic) UICollectionView *mixedCollectionView; // @synthesize mixedCollectionView=_mixedCollectionView;
@property(retain, nonatomic) UIView *mixedCollectionViewContainerView; // @synthesize mixedCollectionViewContainerView=_mixedCollectionViewContainerView;
@property(retain, nonatomic) WAStarCollectionViewLayout *mixedLayout; // @synthesize mixedLayout=_mixedLayout;
@property(retain, nonatomic) NSMutableArray *mixedSectionData; // @synthesize mixedSectionData=_mixedSectionData;
@property(retain, nonatomic) WAMainFrameTaskMoreCollectionViewCell *moreView; // @synthesize moreView=_moreView;
- (void)moveToTopMostItem;
- (_Bool)needFixVerticalScrollIssue;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onEnterForeground;
- (void)onMemoryWarning;
- (void)onMore:(id)arg1;
- (void)onTapCloseArea:(id)arg1;
- (void)onTapFakeMenuBtn:(id)arg1;
- (void)onTapSearchArea:(id)arg1;
- (void)onTranslationYChanged:(double)arg1;
@property(retain, nonatomic) WAMainFrameTaskBarDeleteActionWindow *operationWindow; // @synthesize operationWindow=_operationWindow;
- (void)processDragContext:(id)arg1;
@property(nonatomic) __weak UISearchBar *realSearchBar; // @synthesize realSearchBar=_realSearchBar;
- (void)relayout;
- (void)relayoutSubviews;
- (void)reloadBGWebView;
- (void)reloadData;
- (void)reset;
@property(nonatomic) _Bool reseted; // @synthesize reseted=_reseted;
- (void)reverseVoiceTic;
- (void)scrollToHideSearchBarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollToShowSearchBarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(retain, nonatomic) UIView *searchArea; // @synthesize searchArea=_searchArea;
@property(retain, nonatomic) WAMainFrameTaskBarSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)setForbidStarTipsString:(id)arg1;
@property(nonatomic) _Bool showState; // @synthesize showState=_showState;
@property(retain, nonatomic) CAShapeLayer *starDashLayer; // @synthesize starDashLayer=_starDashLayer;
@property(retain, nonatomic) UILabel *starEmptyTips; // @synthesize starEmptyTips=_starEmptyTips;
@property(retain, nonatomic) UIView *starEmptyView; // @synthesize starEmptyView=_starEmptyView;
@property(retain, nonatomic) UILabel *starTitleLabel; // @synthesize starTitleLabel=_starTitleLabel;
@property(nonatomic) struct CGPoint tableViewLastContentOffset; // @synthesize tableViewLastContentOffset=_tableViewLastContentOffset;
@property(nonatomic) _Bool tapTicState; // @synthesize tapTicState=_tapTicState;
@property(retain, nonatomic) WAMainFrameTaskBarLogic *taskBarLogic; // @synthesize taskBarLogic=_taskBarLogic;
@property(nonatomic) __weak id <WAMainFrameTaskBarViewDelegate> taskBarViewDelegate; // @synthesize taskBarViewDelegate=_taskBarViewDelegate;
@property(retain, nonatomic) UILabel *taskTitleLabel; // @synthesize taskTitleLabel=_taskTitleLabel;
@property(nonatomic) _Bool tipAdded; // @synthesize tipAdded=_tipAdded;
@property(retain, nonatomic) UICollectionReusableView *topMarginReusableView; // @synthesize topMarginReusableView=_topMarginReusableView;
@property(retain, nonatomic) UIView *topMarginView; // @synthesize topMarginView=_topMarginView;
@property(retain, nonatomic) UIView *transformView; // @synthesize transformView=_transformView;
@property(retain, nonatomic) UIView *transformViewContainerView; // @synthesize transformViewContainerView=_transformViewContainerView;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (_Bool)shouldShowStarNodes;
- (_Bool)shouldShowTaskNodes;
- (void)showFakeSearchBarAnimated:(_Bool)arg1;
- (void)showFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (void)showFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showOperationWindow;
- (void)showRealSearchBarAnimated:(_Bool)arg1;
- (void)showRealSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (double)starAreaBeginOffset;
- (void)startAnimateToHide;
- (void)startAnimateToShow;
- (void)taptic;
- (void)unreset;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4)arg1 color2:(union _GLKVector4)arg2;
- (void)updateCollectionViewAlphaProgress:(double)arg1;
- (void)updateCollectionViewScaleProgress:(double)arg1;
- (void)updateDarkStyle;
- (void)updateEmptyViewState;
- (void)updateFakeNavigationBarRightBtnRedDot:(_Bool)arg1;
- (void)updateFakeNavigationBarTitleView:(unsigned int)arg1 title:(id)arg2;
- (void)updateFakeNavigationBarTitleViewNearMode;
- (void)updateFakeSearchBarShowStateWithDoInitRealSearchBar:(_Bool)arg1;
- (void)updateFilteredStickingOffset:(double)arg1;
- (void)updateFilteredVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateFilteredVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)updateFloatingProgress:(double)arg1 borderOffset:(double)arg2;
- (void)updateGifAlphaProgress:(double)arg1;
- (void)updateItemPerLineAndGapIfNeeded;
- (void)updateMoreState;
- (void)updateMoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSectionData;
- (void)updateStickingOffset:(double)arg1;
- (void)updateVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)updateWebBgViewAlphaProgress:(double)arg1;
- (void)voiceTic;
- (void)willBeginSearch;
- (void)willEndSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
