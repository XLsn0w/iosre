//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "BrandTimelineMsgMgrExt.h"
#import "CreateChatLogicDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "IMMFacebookMgrExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "IWXTalkPresentExt.h"
#import "MMConfigMgrExt.h"
#import "MMKernelExt.h"
#import "MMUIViewControllerExt.h"
#import "MainFrameHeaderDelegate.h"
#import "MainTableDelegate.h"
#import "NewMainFrameRightTopMenuBtnDelegate.h"
#import "SelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WAMainFrameTaskBarLogicDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBarMessageWindowDelegate.h"
#import "WCDataSearchDelegate.h"
#import "WCGlobalSearchDelegate.h"
#import "WCLazyInitObjectProtocol.h"
#import "WCSearchDelegate.h"
#import "contactInfoDelegate.h"
#import "mainFrameLogicControllerDelegate.h"

@class BrandTimelineViewController, CreateChatLogic, MFTitleView, MMLoadingView, MMMainTableView, MMSessionInfo, MMTimer, MainFrameHeaderLogic, MainFrameLogicController, NSIndexPath, NSString, UIColor, UIDynamicAnimator, UIImageView, UIView, WAMainFrameTaskBarLogic, WAMainFrameTaskBarView, WAMainFrameTopHeaderView, WCBarMessageWindow;

@interface NewMainFrameViewController : MMTabBarBaseViewController <WAMainFrameTaskBarLogicDelegate, SelectContactsViewControllerDelegate, IMMFacebookMgrExt, MMUIViewControllerExt, MMConfigMgrExt, BrandTimelineMsgMgrExt, NewMainFrameRightTopMenuBtnDelegate, WCSearchDelegate, WCDataSearchDelegate, WCGlobalSearchDelegate, mainFrameLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCActionSheetDelegate, contactInfoDelegate, CreateChatLogicDelegate, MMKernelExt, IWXTalkPresentExt, IVOIPUILogicMgrExt, IAutoSetRemarkExt, UIGestureRecognizerDelegate, UIAlertViewDelegate, WCBarMessageWindowDelegate, MainTableDelegate, IWCDeviceBrandMgrExt, MainFrameHeaderDelegate, WCLazyInitObjectProtocol>
{
    MainFrameLogicController *m_mainFrameLogicController;
    MMMainTableView *m_tableView;
    UIImageView *m_logoImageView;
    MFTitleView *m_titleView;
    MMLoadingView *m_loadingView;
    _Bool m_bSearching;
    struct CGPoint m_tableContentOffset;
    unsigned int m_uiTipStatus;
    CreateChatLogic *m_createChatLogic;
    _Bool m_tableViewReady;
    MainFrameHeaderLogic *m_headerLogic;
    NSString *m_nsTitle;
    int m_voiceSearchLevelNumber;
    _Bool m_bOnMemoryWarningToFinishedSearchBar;
    double m_tableViewOffset;
    _Bool m_bIsLastViewStatusBarHidden;
    _Bool m_needResetTableViewOffset;
    double m_preContentOffset;
    WCBarMessageWindow *m_barMessageWindow;
    _Bool m_forbidShowTip;
    MMSessionInfo *_peekedSession;
    _Bool m_firstLoadFinished;
    double m_messageCellHeight;
    WAMainFrameTaskBarLogic *m_taskBarLogic;
    WAMainFrameTopHeaderView *m_tableHeaderTopView;
    WAMainFrameTaskBarView *m_taskBarView;
    struct CGPoint m_tableViewStartDraggingContentOffset;
    struct CGPoint m_tableViewLastContentOffset;
    _Bool m_isDraggingDown;
    _Bool m_isScrollingDown;
    _Bool m_isShowTableHeaderTopView;
    _Bool m_isSettingShowTableHeaderTopView;
    _Bool m_isSettingHideTableHeaderTopView;
    _Bool m_dragCancelPreviousShowTableHeaderTopView;
    _Bool m_dragCancelPreviousHideTableHeaderTopView;
    _Bool m_isChangingTableHeaderTopViewHeight;
    UIColor *m_navBGOriginColor;
    double m_originWindowLevel;
    long long m_lastRowNum;
    NSString *m_confirmingSessionName;
    MMSessionInfo *m_swipedSession;
    MMSessionInfo *m_selectedSession;
    _Bool m_firstDoMainLazyThing;
    double lastScreenHeight;
    UIView *m_inviteFriendFooterView;
    unsigned int _startTime;
    BrandTimelineViewController *m_brandTimelineViewController;
    MMTimer *m_brandTimelineCacheTimer;
    id <UIViewControllerPreviewing> _previewingContext;
    NSIndexPath *_peekedIndexPath;
    _Bool haveLazyInit;
    UIDynamicAnimator *_animator;
}

- (void).cxx_destruct;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OpenContactInfo:(id)arg1;
- (void)PopViewContoller;
- (void)PushViewController:(id)arg1;
- (void)SearchBarBecomeActive;
- (void)SearchBarBecomeUnActive;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animationShow;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
- (void)appBecomeActive;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)beginSetHideTableHeaderTopView;
- (void)beginSetShowTableHeaderTopView;
- (double)calCloseAreaHeight;
- (void)cancelSearch;
- (void)cancelSelectedCell;
- (struct UIEdgeInsets)changeContentInsetTopTo:(double)arg1;
- (void)changeNavigationFakeBackgroundColor;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (void)changeTaskBarViewHeightTo:(double)arg1;
- (unsigned long long)checkDisappearScene;
- (_Bool)checkHeaderRowValid:(unsigned int)arg1;
- (_Bool)checkIsMainFrameScrollView:(id)arg1;
- (void)checkTaskBarHiddenState;
- (void)checkTaskBarViewWidth;
- (void)clearResource;
- (void)clearSessionCache;
- (void)closeCurChat;
- (void)createVideoVOIPChat;
- (void)createVoiceVOIPChat;
- (void)dealloc;
- (void)delayToLoadMainTableViewData;
- (void)deleteSessionAtIndex:(unsigned long long)arg1;
- (void)deleteSessionCell:(unsigned int)arg1 withUser:(id)arg2;
- (void)deselectCellByUsername:(id)arg1 indexPath:(id)arg2;
- (void)didOpenWeapp:(id)arg1 isSuccess:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)didRotateToInterfaceOrientation:(long long)arg1;
- (void)doMainLazyThing;
- (void)endDragToShow;
- (void)endSetHideTableHeaderTopView;
- (void)endSetShowTableHeaderTopView;
- (void)finishSearchBarImmediately;
- (void)fixMenuBug;
- (id)getActionSheetTitle:(unsigned long long)arg1;
- (id)getAddBarButton;
- (unsigned int)getAppIconTotalUnreadCount;
- (id)getDestructiveBtnTitle:(unsigned long long)arg1;
- (double)getFullScreenHeight;
- (id)getRightBarButton;
- (long long)getSectionType:(long long)arg1;
- (id)getSessionInfoByContact:(id)arg1;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (id)getTaskBarView;
- (unsigned int)getTotalUnreadCount;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)getVoiceSearchBar;
- (void)goToLazyInitObject;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)handleCommitEdit:(unsigned long long)arg1;
- (void)handleFrameChangeForSearchBar;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (unsigned long long)handleTouchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (unsigned long long)handleTouchesShouldCancelInContentView:(id)arg1;
- (_Bool)hasShowSearchBar;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (void)hideNavigationBarForTaskBarCloseScene:(unsigned long long)arg1;
- (void)hideSearchBar;
- (void)hideStatusBar;
- (void)initBarMessageWindow;
- (void)initData;
- (void)initDeepLinkConfig;
- (void)initFakeNavigatioBackgroundIfNeeded;
- (void)initFooterView;
- (void)initHeaderLogicAndHeaderView;
- (void)initLoadingView;
- (void)initNavigationTitileView;
- (void)initTableHeaderTopView;
- (void)initTableView;
- (void)initTitle;
- (void)initView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertRow:(unsigned int)arg1;
- (_Bool)isNeedAnimateNavigationBarBeforeSettingContentOffSet;
- (_Bool)isNeedMutilLevelView:(id)arg1;
- (_Bool)isNeedShowProfileInVoiceSearch:(int)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (_Bool)isSeachActive;
- (_Bool)isTaskBarNeedHideTabBar;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (_Bool)isXDevice;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
- (void)mainTableViewOffsetDidChangeTo:(struct CGPoint)arg1;
- (void)makeCellBackGroundBySession:(id)arg1 cell:(id)arg2 showTopList:(_Bool)arg3;
- (id)navigationBarBackgroundColor;
- (_Bool)navigationBarBlurEffect;
- (void)newChat;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)notifyTaskBarOnDidEndSearch;
- (void)notifyTaskBarOnMainTableViewDidEndDragging:(id)arg1;
- (void)notifyTaskBarOnMainTableViewDidScroll:(id)arg1;
- (void)notifyTaskBarOnMainTableViewInitReady;
- (void)notifyTaskBarOnMainTableViewWillBeginDragging:(id)arg1;
- (void)notifyTaskBarOnMainTableViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)notifyTaskBarOnRightBtnRedDotShow:(_Bool)arg1;
- (void)notifyTaskBarOnShowWeappFirstQuitEducation;
- (void)notifyTaskBarOnUpdateTitleView:(unsigned int)arg1 title:(id)arg2;
- (void)notifyTaskBarOnUpdateTitleViewNearMode;
- (void)notifyTaskBarOnViewDidAppear;
- (void)notifyTaskBarOnViewDidDisappear;
- (void)notifyTaskBarOnViewDidTransitionToNewSize;
- (void)notifyTaskBarOnViewWillAppear;
- (void)notifyTaskBarOnViewWillDisappear;
- (void)notifyTaskBarOnWillBeginSearch;
- (void)notifyTaskBarOnWillFocusOnFirstUnreadSession;
- (void)notifyToLazyInit;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onAuthOK;
- (void)onBarTipClicked;
- (void)onBrandTimelineCacheTimeOut;
- (void)onBrandTimelineReturn;
- (void)onChangeBizTimelineDisplayMode;
- (void)onConfirmDeleteSessionAtIndex:(unsigned long long)arg1;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)onCreateNewMessage;
- (void)onDeleteToEmptyTaskBar;
- (void)onEnterForeground;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onLastChat;
- (void)onMMDynamicConfigUpdated;
- (void)onMassSend;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onNextChat;
- (void)onNextUnreadChat;
- (void)onRadar;
- (void)onReceiveVisibleTick;
- (void)onRedDotShowed:(_Bool)arg1;
- (void)onSearch;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onShowPhoneFriend;
- (void)onStarNodeShowStatusDidChangedTo:(_Bool)arg1;
- (void)onTapOnFakeRightMenuButton;
- (void)onTapOnFoldButton;
- (void)onTapOnSearchButton;
- (void)onTaskBarDataUpdated;
- (void)onTaskBarHeightDidChangeTo:(double)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)openAlbum;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openContactInfoView:(id)arg1;
- (void)openEnterpriseBrandSessionView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openEnterpriseChatSessionListView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openFace2FaceReceiveMoney;
- (void)openFloatBottleContentView:(CDUnknownBlockType)arg1;
- (void)openMassSend;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6 reuse:(_Bool)arg7 extraInfo:(id)arg8;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6 reuse:(_Bool)arg7 extraInfo:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)openOverseaFacingReceiveMoney;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openSelectReceiveOrPayMoney;
- (void)openSelectReceiveOrPayMoneyFromShortcut;
- (void)openWeAppSessionView:(CDUnknownBlockType)arg1;
- (void)openWeSportView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)reLayoutSubviews;
- (void)reloadAll;
- (void)reloadSessions;
- (void)removeMainFrameTip;
- (void)removeRow:(unsigned int)arg1;
- (void)resetSearchBar;
- (void)resetTableViewOffset:(id)arg1;
- (void)resetViewStatus;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)selectCellForName:(id)arg1;
- (void)setNewMainFrameTableViewContentOffset:(struct CGPoint)arg1;
- (void)setNewMainFrameTableViewContentOffsetToTheFirstUnreadSessionAndOpen:(_Bool)arg1;
- (void)setSearchTableResultText:(id)arg1;
- (void)setTableHeaderTopViewHidden:(_Bool)arg1;
- (void)setTableViewContentInsetAndOffsetWithIsTopViewShow:(_Bool)arg1 fromScene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 canceled:(CDUnknownBlockType)arg4;
- (void)setTableViewContentInsetOffsetWithoutScrollWithContentInset:(struct UIEdgeInsets)arg1 contentOffset:(struct CGPoint)arg2;
- (_Bool)shouldDeselectCellByUsername:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldShowTabbar;
- (_Bool)shouldShowTitleWindow;
- (void)showBrandUnsubscribeActionSheet:(unsigned long long)arg1;
- (void)showEditActionSheet:(unsigned long long)arg1;
- (void)showEmoticonStoreView;
- (void)showInviteFriendList;
- (void)showMyWCView;
- (void)showQRInfoView;
- (void)showStatusBar;
- (void)showTableHeaderTopView:(_Bool)arg1 fromScene:(unsigned long long)arg2;
- (void)showWCPayView;
- (void)starDataDidUpdated;
- (void)startDragToShow;
- (void)startLoading;
- (void)startLoadingForSessionRebuild;
- (void)stopLoading;
- (void)stopLoadingForSessionRebuild;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tagForCurrentPage;
- (void)taskBarDidDragUpToClose;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tryDoLazyInitThing;
- (void)tryMoveToMainFrameTab;
- (void)unLoadData;
- (void)unLoadView;
- (void)updateAllItemTimeLabel;
- (void)updateItem:(id)arg1;
- (void)updateNearMode;
- (void)updateRow:(unsigned int)arg1;
- (void)updateSession:(id)arg1;
- (void)updateTabbarOffset:(double)arg1;
- (void)updateTaskBarViewSearchBarState;
- (void)updateTitleView;
- (void)updateUnReadCount;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useBlackStatusbar;
- (_Bool)useWhiteStatusBarColorWhenShown;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)willAppear;
- (void)willEndSearch;
- (void)willOpenMainListVC;
- (void)willOpenWeapp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

