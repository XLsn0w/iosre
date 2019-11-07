//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AppDetailDelegate.h"
#import "BadRoomLogicControllerDelegate.h"
#import "BannerToastExt.h"
#import "ChatBackgroundExt.h"
#import "ChatViewModelDelegate.h"
#import "FirstUnReadTipViewDelegate.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "INewSyncExt.h"
#import "IVOIPExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWAUpdatableMsgMgrExt.h"
#import "IWCMyStoryUserStateUtilExt.h"
#import "IdleTimerUtilExt.h"
#import "MMInputToolViewDelegate.h"
#import "MMMultiSelectToolViewDelegate.h"
#import "MMNewTipsMgrExt.h"
#import "MMRTCMenuResponderDelegate.h"
#import "MMReadMailViewDelegate.h"
#import "MMRichTextSelectEventDelegate.h"
#import "MMScrollActionSheetDelegate.h"
#import "MessageNodeViewDelegate.h"
#import "MsgDelegate.h"
#import "MsgImgFullScreenViewControllerDelegate.h"
#import "MsgImgFullScreenWindowDelegate.h"
#import "MsgSearchHelperDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "StreamVoiceInputViewControllerDelegate.h"
#import "TipsViewDelegate.h"
#import "TrackRoomTipsViewDelegate.h"
#import "TypingControllerDelgate.h"
#import "UIAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCanvasPageViewControllerDelegate.h"
#import "WCChatRoomStoryDataVMExt.h"
#import "WCNetworkMediaPlayerDelegate.h"
#import "WXGChatLogDelMsgNotification.h"
#import "WXGImportMessageNotification.h"
#import "contactInfoDelegate.h"
#import "tableViewDelegate.h"

@class BadRoomLogicController, BaseChatViewModel, CMessageWrap, FirstUnReadTipView, MMDropManager, MMInputToolView, MMLoadingView, MMMultiSelectToolView, MMRichTextCoverView, MMScrollActionSheet, MMTableView, MMTimer, MMUIWindow, MsgImgFullScreenWindow, MsgSearchHelper, MultiTalkTipsView, NSMutableArray, NSString, ReaderReporter, RichTextView, ShareMessageConfirmLogicHelper, StreamVoiceInputViewController, TipsView, TrackRoomTipsView, UIActivityIndicatorView, UIBarButtonItem, UIImageView, UIView, UIWindow, WCChatRoomStoryDataVM, WCStoryReportUtil;

@interface BaseMsgContentViewController : MMUIViewController <MsgSearchHelperDelegate, MsgImgFullScreenWindowDelegate, BannerToastExt, IdleTimerUtilExt, BadRoomLogicControllerDelegate, MsgImgFullScreenViewControllerDelegate, WCCanvasPageViewControllerDelegate, ChatBackgroundExt, UIViewControllerPreviewingDelegate, StreamVoiceInputViewControllerDelegate, WXGImportMessageNotification, WXGChatLogDelMsgNotification, INewSyncExt, MMNewTipsMgrExt, IWAUpdatableMsgMgrExt, WCChatRoomStoryDataVMExt, IWCMyStoryUserStateUtilExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIDocumentInteractionControllerDelegate, tableViewDelegate, TypingControllerDelgate, MessageNodeViewDelegate, ChatViewModelDelegate, contactInfoDelegate, MsgDelegate, MMInputToolViewDelegate, ShareMessageConfirmLogicHelperDelegate, MMReadMailViewDelegate, IVOIPExt, AppDetailDelegate, TipsViewDelegate, TrackRoomTipsViewDelegate, IMsgExt, IMsgRevokeExt, IVOIPUILogicMgrExt, MMMultiSelectToolViewDelegate, MultiSelectContactsViewControllerDelegate, MMScrollActionSheetDelegate, FirstUnReadTipViewDelegate, WCNetworkMediaPlayerDelegate, MMRichTextSelectEventDelegate, MMRTCMenuResponderDelegate>
{
    NSMutableArray *m_arrMessageNodeData;
    unsigned int m_uLastTime;
    unsigned int m_uLastMoreMsgTime;
    _Bool m_bKeyboardShow;
    _Bool m_bToolViewHidden;
    unsigned long long m_moreMsgIndex;
    _Bool m_bReadtToLoadMoreMsg;
    id <BaseMsgContentDelgate> m_delegate;
    id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate;
    Class m_delegateClass;
    MMTimer *m_LockerTimer;
    MMTableView *m_tableView;
    UIActivityIndicatorView *m_activityView;
    UIView *m_headerView;
    MMInputToolView *_inputToolView;
    UIView *m_backgroundView;
    NSMutableArray *m_arrDeleteRows;
    UIView *m_deleteContainView;
    _Bool m_bViewDidAppear;
    TrackRoomTipsView *m_trackTipsView;
    MultiTalkTipsView *m_multiTalkTipsView;
    _Bool m_bViewUnloaded;
    struct CGPoint m_pTableViewOffset;
    long long m_keyboardHeight;
    NSString *m_text;
    int m_inputMode;
    int m_positionMode;
    int m_contentMode;
    double m_fKeyboardAnimationDuration;
    MsgSearchHelper *m_oMsgSearchHelper;
    int m_iInitTableViewContentOffset;
    _Bool m_bNeedAdjustTableViewContentOffset;
    unsigned int m_uiSearchResultNodeViewHeight;
    long long m_uiInterfaceOrientation;
    MMLoadingView *m_loadingView;
    ShareMessageConfirmLogicHelper *_shareMessageConfirmLogicHelper;
    MMMultiSelectToolView *_multiSelectView;
    NSMutableArray *m_arrSelectMsgLocalID;
    UIView *m_msgReceivingTipsView;
    unsigned int m_uiSelectSearchMsgID;
    TipsView *m_chatAddFriend;
    TipsView *m_recommandFriend;
    TipsView *m_securityBanner;
    _Bool m_bChatAddFriendShow;
    _Bool m_bSecurityBannerShow;
    _Bool m_bShouldShowKeyboardAnimation;
    _Bool m_bNeedToUpdateTitle;
    _Bool m_bIsRevokeAdding;
    int m_msgCounerDurOneSync;
    _Bool m_bHightlightedSearchedMsgNode;
    struct CGPoint m_decelerateTarget;
    CMessageWrap *m_firstUnReadMsg;
    FirstUnReadTipView *m_jumpFirstUnReadBtn;
    unsigned long long m_unreadCount;
    MMScrollActionSheet *m_scrollActionSheet;
    MMUIWindow *m_fullScreenWindow;
    BaseChatViewModel *m_fullScreenNodeData;
    _Bool m_isMsgReceiveTipsJacking;
    unsigned int m_openTrackScene;
    struct timeval m_menuHideTime;
    _Bool m_shouldScrollToBottomAfterRotate;
    _Bool m_resignInputToolViewFirstResponder;
    _Bool m_scrollingTableToBottom;
    struct _NSRange m_scrollingInvisibleRange;
    _Bool m_needLayoutOnMenuHide;
    _Bool m_needScrollOnMenuHide;
    unsigned long long m_lastSectionCount;
    _Bool m_scrollingToFirstUnRead;
    double m_initialOffset;
    CMessageWrap *m_lastMsgInNewArray;
    UIView *m_footerView;
    UIActivityIndicatorView *m_footerActivityView;
    _Bool m_needLoadMoreWhenScrollToFistUnRead;
    _Bool m_needHideFirstUnReadBtn;
    _Bool m_bMovingToMainFrameTab;
    double m_bannerHeight;
    _Bool m_isPeekPreview;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    UIView *m_snapshotView;
    unsigned int m_uiEnterRoomTime;
    unsigned int m_uiEnterRoomUnreadCount;
    _Bool m_bCloseForViewDetail;
    UIImageView *m_showNewView;
    unsigned int _startTime;
    id <UIViewControllerPreviewing> _previewingContext;
    StreamVoiceInputViewController *m_streamVoiceInputViewController;
    UIWindow *m_coverWindow;
    UIView *m_topBarView;
    UIBarButtonItem *m_voiceStreamCacheLeftBtnItem;
    UIBarButtonItem *m_voiceStreamCacheRightBtnItem;
    NSString *m_voiceStreamTitle;
    NSString *m_voiceStreamSavedText;
    _Bool m_bHasAppear;
    MMDropManager *m_dropManager;
    ReaderReporter *m_readerReporter;
    _Bool _m_bIsInMainFrame;
    _Bool _needReportStoryEntranceExpose;
    int m_searchScene;
    NSMutableArray *m_shareContacts;
    BadRoomLogicController *_m_badRoomLogicController;
    MMRichTextCoverView *_richTextCoverView;
    RichTextView *_richTextView;
    WCChatRoomStoryDataVM *_storyDataVM;
    WCStoryReportUtil *_reportUtil;
}

- (void).cxx_destruct;
- (void)AsyncSendMessage:(id)arg1;
- (void)BeginPlaying:(id)arg1 FromTouch:(_Bool)arg2;
- (void)CancelRecording;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)EndPlaying:(id)arg1;
- (id)GetContact;
- (id)GetCurrentViewController;
- (id)GetMessageNodeDataArray;
- (id)GetMessagesWrapArray;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (_Bool)IsRecording;
- (void)JumpToViewStreamVideo:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)MoreMsgBtnUpdate:(unsigned int)arg1 unReadCount:(unsigned int)arg2;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (void)OnEndPlaying:(id)arg1;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnMultiDeleteMessage:(id)arg1;
- (void)OnMultiEmailMessage:(id)arg1;
- (void)OnMultiFavAddMessage;
- (void)OnMultiForwardMessage;
- (void)OnMultiMsgMoreOperation:(id)arg1;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)PlayVideo:(id)arg1 soundable:(_Bool)arg2;
- (void)PreviewAppNode:(id)arg1 MsgWrap:(id)arg2 Pop:(_Bool)arg3;
- (void)PreviewImage:(id)arg1;
- (void)PreviewImage:(id)arg1 needEdit:(_Bool)arg2;
- (void)PreviewImage:(id)arg1 soundable:(_Bool)arg2 snapshotView:(id)arg3;
- (void)PreviewImage:(id)arg1 soundable:(_Bool)arg2 snapshotView:(id)arg3 needEdit:(_Bool)arg4;
- (id)QueryMsgText:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (void)ReloadView;
- (void)Reset;
- (void)ScrollToBottomAnimated:(_Bool)arg1;
- (void)ScrollToBottomAnimatedAndLoadMoreNode;
- (void)ScrollToTopAnimated:(_Bool)arg1;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendNotGameEmoticonMessage:(id)arg1 errorMsg:(id)arg2;
- (void)SendTextMessageToolView:(id)arg1;
- (void)SetMsgPlayed:(id)arg1;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)ShowEarBackTips;
- (void)ShowEarTips;
- (void)ShowMultiSelectMoreOperation:(id)arg1;
- (void)ShowVolumeTips;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartPlayingNodeView:(unsigned int)arg1;
- (_Bool)StartRecording;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopPlayingNodeView:(unsigned int)arg1;
- (void)StopRecording;
- (void)StopUploadVideo:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (id)addSplitNode:(id)arg1 addMoreMsg:(_Bool)arg2;
- (void)addTimeNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)adjustDeleteViewRect;
- (void)adjustTableViewOffset;
- (void)adjustTableViewRect;
- (void)adjustViewAndNavBarRect;
- (void)animateHideFirstUnReadButton;
- (void)animateShowFirstUnReadButton;
- (void)applicationBecomeActive;
- (void)beginLockerTimer;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canLongPressOnHeadImage:(id)arg1;
- (_Bool)canSendTextMessage:(id)arg1;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowFavEntry;
- (_Bool)canShowFileBrowser;
- (_Bool)canShowLocation;
- (_Bool)canShowSight;
- (id)chatContactForMessageWrap:(id)arg1;
- (id)chatUserNameForSightStatistics;
- (void)chatroomUnreadStatusNeedUpdate;
- (void)checkShowRecommandFriendTip:(_Bool)arg1;
- (void)checkShowSecurityBannerTip:(_Bool)arg1;
- (void)checkTips:(_Bool)arg1;
- (void)clickAppLinkTextWithUrl:(id)arg1 messageWrap:(id)arg2;
- (void)clickEditRevokeContentSysMsg:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)clickLinkToExpose;
- (void)clickNewAASysMsg:(id)arg1 withMsgLocalID:(unsigned int)arg2;
- (void)clickReceiveBrandMsg;
- (void)clickShieldBrandMsg;
- (void)clickWeAppReceiveSessionMsg;
- (void)contactInfoReturn;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)copyViewDidScroll:(double)arg1;
- (void)dealloc;
- (void)delayScrollUpdatableMsgCellToVisible:(id)arg1;
- (void)deleteAllMessage;
- (void)deleteMail:(id)arg1;
- (void)deleteNode:(id)arg1;
- (void)deleteNode:(id)arg1 withDB:(_Bool)arg2 animated:(_Bool)arg3;
- (void)didExitRoom;
- (void)didFinishedLoading:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)doJoinExistMultiTalk;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)editStreamVoiceTxtDone;
- (void)editStreamVoiceTxtReturn;
- (void)endSearchAndDisplay;
- (void)exitSelectState;
- (id)findNodeDataByLocalId:(unsigned int)arg1;
- (unsigned long long)findNodeIndexByLocalId:(unsigned int)arg1;
- (id)findNodeViewByLocalId:(unsigned int)arg1;
- (void)fixInputToolViewKeyboard;
- (void)forwardMenuClickEventWithAction:(SEL)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)getAddFriendTipHeight;
- (id)getAttachmentViewServiceAppList;
- (id)getChatContact;
- (id)getChatRoomStoryEntryButton:(id)arg1;
- (unsigned long long)getCurContentSizeHeight;
- (id)getCurrentChatName;
- (id)getCurrentViewController;
- (double)getCustomizedAreaWidth;
- (id)getFirstContentMessageNodeFromArray:(id)arg1;
- (unsigned long long)getFirstUnReadMessageIndex;
- (unsigned long long)getFirstUnReadSplitNodeIndex;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (id)getHomePageBarButton;
- (struct CGRect)getInnerVisibleRectInScreen:(struct CGRect)arg1;
- (struct CGRect)getInputToolViewFrame;
- (double)getInvisibleHeight;
- (id)getLastContentMessageNodeFromArray:(id)arg1;
- (unsigned long long)getLastNodePreContentSizeHeight;
- (id)getLastSentMsg;
- (id)getLeftBarButton;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (long long)getMessageNodePosition:(id)arg1;
- (unsigned long long)getMsgContentSizeHeight:(unsigned int)arg1;
- (id)getMsgSendOpEntry;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (id)getParentTableView;
- (id)getRightBarButton;
- (id)getRightBarButtonWithMultiFlag:(_Bool)arg1;
- (id)getScrollView;
- (double)getSearchBarHeight;
- (double)getSecurityBannerTipHeight;
- (id)getServiceAppList;
- (id)getTableView;
- (double)getTableViewVisibleHeightWithOrientation:(long long)arg1;
- (id)getTextMsgCellViewForCoverView;
- (double)getTipsHeight;
- (id)getViewController;
- (double)getVisibleHeight;
- (struct CGRect)getVisibleRectInScreen:(id)arg1;
- (id)getVoipBarButton;
- (void)hadShowNewXmlSystemMessage:(id)arg1;
- (void)handleAfterDeleteAllMessage;
- (void)handleDeleteAllMessage;
- (void)handlePushTransitionFinish;
- (_Bool)hasCardPkgEntry;
- (_Bool)hasGroupPayEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasServiceEntry;
- (void)hasTapReaderNodeView;
- (_Bool)hasTransferMoneyEntry;
- (void)headerImageClicked:(id)arg1;
- (void)headerImageClickedWithMsg:(id)arg1;
- (void)hideMultiTalkTips;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)hideTrackRoomTips;
- (void)highLightSearchKeyWordInSelectCell;
- (void)highLightSelectSearchCell;
- (id)indexPathForCellKey:(id)arg1;
- (id)init;
- (void)initAllowMultiTalk;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (void)initAllowWxTalk;
- (void)initAllowWxTalkFollowSight;
- (void)initData;
- (void)initDeepLinkConfig;
- (void)initHistroyMessageNodeData;
- (void)initMsgSearchHelper:(int)arg1;
- (void)initMultiSelectToolView;
- (void)initNavigationView;
- (void)initSearchBar;
- (void)initTableHeaderView;
- (void)initTableView;
- (void)initToolEmoticonView;
- (void)initToolView;
- (void)initView;
- (_Bool)isAllowVoiceInput;
- (_Bool)isAllowVoip;
- (_Bool)isAllowWxTalk;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isContactSizeOverScreen;
- (_Bool)isHiddenInputChangeButton;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (_Bool)isMsgLastSend:(id)arg1;
- (_Bool)isMsgSelected:(id)arg1;
- (_Bool)isPeekPreview;
- (_Bool)isScrollToBottom;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)isUseDefaultChatBkgImage;
- (_Bool)isViewControllerAnimated;
- (_Bool)jumpMPVideoView:(id)arg1 url:(id)arg2 sender:(id)arg3;
- (void)jumpToDetail:(id)arg1;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 fromBanner:(_Bool)arg4;
- (void)loadingAfterForwardMessageOK;
- (void)locateTableViewWithLocalID:(unsigned int)arg1;
- (void)locateToMsg:(id)arg1;
- (void)lockerTimesup;
- (void)longPressOnHeadImage:(id)arg1;
- (void)longPressOnHeadImageForDebug:(id)arg1;
@property(retain, nonatomic) MMTimer *m_LockerTimer; // @synthesize m_LockerTimer;
@property(nonatomic) _Bool m_bIsInMainFrame; // @synthesize m_bIsInMainFrame=_m_bIsInMainFrame;
@property(nonatomic) __weak id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate; // @synthesize m_backgroundThreadDelegate;
@property(retain, nonatomic) BadRoomLogicController *m_badRoomLogicController; // @synthesize m_badRoomLogicController=_m_badRoomLogicController;
@property(nonatomic) __weak id <BaseMsgContentDelgate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIView *m_msgReceivingTipsView; // @synthesize m_msgReceivingTipsView;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableArray *m_shareContacts; // @synthesize m_shareContacts;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)msgSearchBarCancel;
- (void)msgSearchBarDoSearch;
@property(nonatomic) _Bool needReportStoryEntranceExpose; // @synthesize needReportStoryEntranceExpose=_needReportStoryEntranceExpose;
- (void)newMessageFromContactInfo:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onClickFavMenu:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClickMessageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)onClickPlayMusicBtn:(id)arg1 isPlay:(_Bool)arg2;
- (void)onClickSourceView:(id)arg1;
- (void)onClickTextFloatPreView:(id)arg1;
- (void)onClickTranslateMsg:(id)arg1 translateInfo:(id)arg2;
- (void)onClickVoiceTranslate:(id)arg1;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)onDeleteAllMsg;
- (void)onDeleteMessage:(id)arg1;
- (void)onDeleteMessageFinish;
- (void)onDoubleClick;
- (void)onEditMessage:(id)arg1;
- (void)onEmoticonSourceTipClick;
- (void)onExposeTemplateMsg:(id)arg1;
- (void)onFinishMultiSelect:(id)arg1;
- (void)onForwardMessageOK;
- (void)onGroupPayButtonClick;
- (void)onHideKeyboard;
- (void)onHideMultiSelectView;
- (void)onIdleTimerUtilVoipQuit;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onImportMessageSuccess;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onLoadDownMoreMessage:(id)arg1;
- (void)onLoadFirstScreenMsg:(_Bool)arg1;
- (void)onLoadFirstUnreadMsg:(id)arg1;
- (void)onLoadMessageFail;
- (void)onLoadMoreMessage;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onMoreOperateWithMsgId:(id)arg1;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiTalkButtonClick;
- (void)onNewSyncFinish;
- (void)onNewSyncStart;
- (void)onNotifyToShowTips:(id)arg1;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (void)onPan:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onPerformIconAction:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withData:(id)arg2;
- (_Bool)onRecordWillStopWhenAppWillTerminate;
- (void)onRemoveTextSelectView;
- (void)onReturn:(id)arg1;
- (void)onRichTextViewExit;
- (void)onScrollToBottom;
- (void)onScrollToFirstUnReadMsg;
- (void)onSelectLocation;
- (void)onSendTextMsg:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onShareCard;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onStreamVoiceInputButtonClick;
- (void)onSyncEnd;
- (void)onTextDeleteAll;
- (void)onTipViewClick:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onToolViewDidMoveToWindow;
- (void)onTouchBeginMsg:(id)arg1 Touch:(id)arg2;
- (void)onTouchDown;
- (void)onTrackRoomTipsViewClick;
- (void)onTrySHowFirstUnReadButton;
- (void)onUpdatableMsgEntryStateChanged:(id)arg1;
- (void)onUserRecoverHideStoryWithUserName:(id)arg1;
- (void)onVerifyFTSIndexForMsg:(id)arg1;
- (void)onVideoVoipInvite;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onViewDisappear;
- (void)onVoipInvite;
- (void)openCameraController;
- (void)openChatInfo:(id)arg1;
- (void)openFileBrowser;
- (void)openHomePage:(id)arg1;
- (void)openMediaBrowser;
- (void)openMyFavoritesListController;
- (void)openServiceApp:(id)arg1;
- (void)openStoryEntry;
- (void)openVideoCall;
- (void)openVoiceCall;
- (void)pasteImage:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)previewActionItems;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)readerViewClickedWithMsg:(id)arg1;
- (void)redEnvelopesLogic;
- (void)reloadBackgroundView;
- (void)reloadMessagesInternal;
- (void)reloadNavigationRightStoryButton;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)reloadTableHeaderView:(_Bool)arg1;
- (void)reloadViewInteral;
- (void)removeAllObjectsFromMessageNodeDatas;
- (void)removeObjectsFromMessageNodeDatas:(id)arg1;
- (void)removeVoiceTip;
- (void)removeVoipAndPhoneTip;
@property(retain, nonatomic) WCStoryReportUtil *reportUtil; // @synthesize reportUtil=_reportUtil;
- (void)resetMsgSearchHelper;
- (void)resetToolView;
- (void)revokeMsgByNodeView:(id)arg1;
@property(retain, nonatomic) MMRichTextCoverView *richTextCoverView; // @synthesize richTextCoverView=_richTextCoverView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)rotate:(long long)arg1 duration:(double)arg2;
- (void)scheduleOnMsg:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollTableToBottomAnimated:(_Bool)arg1 init:(_Bool)arg2;
- (void)scrollToFirstUnReadMessage:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sendCaptruedImage:(id)arg1;
- (void)sendShortVideoMsg:(id)arg1 thumbImg:(id)arg2 statInfo:(id)arg3 editVideoAttr:(id)arg4;
- (void)setAddFriendTipShow:(_Bool)arg1 contact:(id)arg2;
- (void)setIsPeekPreview:(_Bool)arg1;
- (void)setReadStatusOnAppear;
- (void)setSecurityTipShow:(_Bool)arg1;
@property(retain, nonatomic) WCChatRoomStoryDataVM *storyDataVM; // @synthesize storyDataVM=_storyDataVM;
- (void)setTableFooterView:(_Bool)arg1;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
- (void)shareMsgToOpenSDKByNodeView:(id)arg1;
- (_Bool)shouldHideOrginInputToolView;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (_Bool)shouldInitWXEmoticonView;
- (_Bool)shouldInteractivePop;
- (void)shouldShowInputBar:(_Bool *)arg1;
- (_Bool)shouldShowOpenTrackRoom;
- (void)showAddFriendTip:(_Bool)arg1;
- (void)showAlertTooMany;
- (void)showAlertWithTitle:(id)arg1;
- (void)showAttachmentView;
- (void)showContactPreviewController;
- (void)showEarModeTips;
- (void)showExposeViewController;
- (void)showLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showMultiTalkTips;
- (void)showPlayVoiceTipsIfNeed;
- (void)showReceiveMsgTips;
- (void)showSightDraftBoxView;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (_Bool)showTrackExitAlert;
- (void)showTrackRoomTips;
- (void)startReceiveMsgWithTips:(id)arg1;
- (void)startVoiceAnimatingAtNodeId:(unsigned int)arg1;
- (void)statEnterMsgChat;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)stopLoading;
- (void)stopLoadingAndAndShowErrorWithText:(id)arg1;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)stopLockerTimesup;
- (void)stopReceiveMsg;
- (_Bool)storyCheckHasItem;
- (_Bool)storyCheckHasUnreadItem;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardDidShow;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenWillEnter;
- (void)streamVoiceInputViewHeightChanged;
- (void)switchEarMode;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)tagLink:(id)arg1 messageWrap:(id)arg2;
- (void)tagWeAppLink:(id)arg1 messageWrap:(id)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)tapImage_NodeView:(id)arg1;
- (void)tapImage_NodeView:(id)arg1 needEditImage:(_Bool)arg2;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(id)arg2;
- (void)tapStatus_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transferMoneyLogic;
- (void)tryAddUnReadSplitNode;
- (void)tryMoveToMainFrame;
- (void)tryScrollToBottomAnimated:(_Bool)arg1;
- (void)trySetInputToolviewFirstResponder;
- (void)tryShowFirstUnReadButtonAnimated;
- (void)unHighLightSearchKeyWordInSelectCell;
- (void)unHighLightSelectSearchCell;
- (void)updateBanner;
- (void)updateChatRoomData:(id)arg1;
- (void)updateDeleteCount;
- (void)updateFirstUnReadButtonOnShowBanner:(double)arg1;
- (void)updateMessageNodeStatus:(id)arg1;
- (void)updateOpBtnState:(_Bool)arg1;
- (void)updateRightBar;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(double)arg2;
- (void)updateTableLayoutAnimateDuration:(double)arg1 Orientation:(long long)arg2;
- (void)updateTitleView:(id)arg1;
- (void)updateToolViewOrigin;
- (void)updateTypingTitle:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (id)visibleViewModelList;
- (void)voiceoverStatusChanged;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppear;
- (void)willDismissAndShow;
- (void)willDisshow;
- (void)willEnterRoom;
- (_Bool)willMoveToMainFrame;
- (void)willShow;
- (void)willShowMenuController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

