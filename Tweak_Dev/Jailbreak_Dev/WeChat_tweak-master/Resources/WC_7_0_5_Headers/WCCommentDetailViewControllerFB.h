//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "ILinkEventExt.h"
#import "IMMGrowTextViewExt.h"
#import "IMsgExt.h"
#import "IStrangerContactMgrExt.h"
#import "ITranslateSnsMgrExt.h"
#import "IWCCommentDetailViewControllerFBExt.h"
#import "InputControllerDelegate.h"
#import "MMGrowTextViewDelegate.h"
#import "MMImageLoaderObserver.h"
#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCAdvertiseActionFloatForABTestDelegate.h"
#import "WCAdvertiseActionFloatViewDelegate.h"
#import "WCCanvasPageViewControllerDelegate.h"
#import "WCCommentViewDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WCSightViewExt.h"
#import "WCTimeLineContactSelectViewControllerDelegate.h"
#import "tableViewDelegate.h"

@class CContact, EmoticonBoardView, MMAdaptiveLabel, MMGrowTextView, MMHeadImageView, MMTableView, MMUILabel, MMURLHandler, NSMutableArray, NSMutableDictionary, NSObject<WCCommentDetailViewControllerFBDelegate>, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, UrlLabel, WCADPageWrap, WCAdvertiseActionFloatForABTest, WCAdvertiseActionFloatView, WCCommentItem, WCCommentView, WCContentItem, WCContentItemBaseView, WCDataItem, WCHeaderGridView, WCHighLightButton, WCInputController, WCOperateFloatView, WCPasteTextLengthLogic, WCSnsCommentDetailRewardView, WCTimeLineTagView, WCUserComment;

@interface WCCommentDetailViewControllerFB : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, WCAdvertiseActionFloatViewDelegate, MMImageLoaderObserver, WCTimeLineContactSelectViewControllerDelegate, IMMGrowTextViewExt, RichTextLayoutDelegate, WCCanvasPageViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCFacadeExt, IMsgExt, MMGrowTextViewDelegate, tableViewDelegate, WCActionSheetDelegate, ILinkEventExt, WCCommentViewDelegate, UIAlertViewDelegate, WCImageFullScreeViewMgrExt, IStrangerContactMgrExt, ITranslateSnsMgrExt, WCAdvertiseActionFloatForABTestDelegate, WCSightViewExt, IWCCommentDetailViewControllerFBExt>
{
    MMTableView *_tableView;
    NSMutableArray *_contentViews;
    UIView *_likeListView;
    WCHeaderGridView *_headerGridView;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    MMGrowTextView *_growTextView;
    WCOperateFloatView *_floatOperateView;
    WCAdvertiseActionFloatView *_advertiseActionFloatView;
    WCAdvertiseActionFloatForABTest *_advertiseFloadForABTest;
    WCInputController *_inputController;
    WCDataItem *_dataItem;
    WCContentItem *_contentItem;
    NSMutableArray *_arrMediaList;
    NSMutableArray *_arrCommentList;
    NSMutableArray *_arrLikeList;
    _Bool _bStranger;
    NSString *_nsStrangerUsrName;
    _Bool _bForbideComment;
    MMURLHandler *_urlHandler;
    _Bool _bIsShow;
    WCUserComment *_refComment;
    WCUserComment *_defaultRefComment;
    double _defaultRefCommentContentOffset;
    _Bool _hasFoundDefaultRefComment;
    _Bool _hasJumpDefaultRefCommentOnce;
    NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate;
    NSString *_copyedText;
    RichTextView *_contentDescView;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIImageView *m_translateLineView;
    int eTranslateStatus;
    double fTranslateViewHeight;
    WCUserComment *curLongPressedComment;
    WCUserComment *curTranslateComment;
    UIButton *_resendBtn;
    MMHeadImageView *_headImageView;
    UrlLabel *_nickLabel;
    WCContentItemBaseView *_mediaCellView;
    MMAdaptiveLabel *_withLabel;
    UILabel *_locationLabel;
    UIButton *_privacyBtn;
    UILabel *_timeLabel;
    UIButton *_operateBtn;
    UIButton *_deleteBtn;
    UIButton *_advertiseLogo;
    UIButton *_adDetailBtn;
    WCCommentView *_commentViewForDelete;
    WCADPageWrap *_floatViewPageWrap;
    WCADPageWrap *_abTestPageWrap;
    int m_commentWordLimit;
    _Bool m_bHasClickFloat;
    _Bool m_bHaveActionSheet;
    UILabel *_rewardTipLabel;
    WCSnsCommentDetailRewardView *_rewardDetailView;
    WCHeaderGridView *_headImageRewardView;
    UILabel *_adPOILabel;
    UILabel *_adChainStrengthenLabel;
    UILabel *_adAtAdvertiserLabel;
    _Bool _isActionAtAd;
    UIView *_adCardBgView;
    UIButton *_adCardTouchButton;
    RichTextView *_adCardTitleLabel;
    WCHighLightButton *_leftAdCanvasBtn;
    WCHighLightButton *_rightAdCanvasBtn;
    UIView *_adCardWeappTipView;
    NSMutableDictionary *m_dicUserCommentsUICache;
    UIView *_adCardTopMaskView;
    WCTimeLineTagView *_adTagView;
    CContact *_atContact;
    UIButton *_atButton;
    WCPasteTextLengthLogic *pastelogic;
    _Bool _bJustShowContent;
    _Bool _bMusicSearchScene;
    _Bool _bFromAtFriend;
    NSString *_nsUsrName;
    long long _uiSource;
    WCCommentItem *_failedComment;
    unsigned long long _tipType;
}

+ (id)makeDataWrapForWCTranslate:(id)arg1;
- (void).cxx_destruct;
- (id)FormCommentTipsView:(id)arg1;
- (id)GetMyTranslateSnsKeyID;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)abTestViewHiddenWrap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustTableViewRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bForbideComment; // @synthesize bForbideComment=_bForbideComment;
@property(nonatomic) _Bool bFromAtFriend; // @synthesize bFromAtFriend=_bFromAtFriend;
@property(nonatomic) _Bool bJustShowContent; // @synthesize bJustShowContent=_bJustShowContent;
@property(nonatomic) _Bool bMusicSearchScene; // @synthesize bMusicSearchScene=_bMusicSearchScene;
@property(nonatomic) _Bool bStranger; // @synthesize bStranger=_bStranger;
- (void)becomeInput;
- (void)becomeInputWithAtAdvertise;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)dealloc;
@property(retain, nonatomic) WCUserComment *defaultRefComment; // @synthesize defaultRefComment=_defaultRefComment;
- (void)delayClickAdCardTouchButton;
- (void)delayReloadTableView;
- (void)didCommitText:(id)arg1;
- (void)didFinishedLoading:(id)arg1;
- (void)didSelectContact:(id)arg1;
@property(retain, nonatomic) WCCommentItem *failedComment; // @synthesize failedComment=_failedComment;
- (void)floatViewHiddenWrap;
- (double)getCommentViewLeftMargin;
- (id)getCommentsUICacheKey:(id)arg1;
- (id)getContactDisplayName;
- (int)getDefaultInputViewHeight;
- (double)getHeadImageViewLeftMargin;
- (int)getInputViewHeight;
- (double)getOperateBtnRightMargin;
- (id)getReplyNickNameFromComment:(id)arg1;
- (double)getTableViewVisibleHeight;
- (_Bool)hasAtFriend:(id)arg1;
- (void)hideFloatView;
- (id)init;
- (void)initAdCardWeappTipView;
- (void)initAdRatingCardViewWithSuperview:(id)arg1;
- (double)initContentTranslateView:(id)arg1 andSuperView:(id)arg2;
- (void)initData;
- (void)initEmoticonView;
- (void)initInputController;
- (void)initInputToolView;
- (void)initRewardDetailView:(id)arg1;
- (void)initSelectAdBottom;
- (void)initTableFooterView;
- (void)initTableHeaderView;
- (void)initTableView;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2 andReferView:(id)arg3;
- (void)initVoteAdBottom:(id)arg1;
- (void)isInAtFriendCommentDetailViewController:(_Bool *)arg1;
- (_Bool)isTouchEnableOnCommentView;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (double)layoutHeadInnerView;
- (void)longPressOnAdCardButton:(id)arg1;
@property(nonatomic) __weak NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate; // @synthesize m_delegate;
- (void)makeTranslateShowAnimation;
@property(retain, nonatomic) NSString *nsStrangerUsrName; // @synthesize nsStrangerUsrName=_nsStrangerUsrName;
@property(retain, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onActionAdChainStrengthen:(id)arg1;
- (void)onActionAdPOI:(id)arg1;
- (void)onActionAtAd:(id)arg1;
- (void)onActionFloatView:(id)arg1 didSelectFeedbackItem:(id)arg2;
- (void)onActionFloatView:(id)arg1 didSelectReason:(id)arg2;
- (void)onActionLocation:(id)arg1;
- (void)onAdActoin:(id)arg1;
- (void)onAdvertiseAction:(id)arg1;
- (void)onAdvertiseDetail;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAtableAdClicked:(id)arg1;
- (void)onCancelSelectContact;
- (void)onClickAdCardTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)onClickCommentBtnOnFloatView;
- (void)onClickContent:(id)arg1 confirmDelete:(_Bool)arg2;
- (void)onClickLeftCanvasButton:(id)arg1 forEvent:(id)arg2;
- (void)onClickLikeBtnOnFloatView;
- (void)onClickRightCanvasButton:(id)arg1 forEvent:(id)arg2;
- (void)onClickTipBtn:(id)arg1;
- (void)onClickWithBtn;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onCommentPhoto:(id)arg1;
- (void)onCommentViewClicked:(id)arg1;
- (void)onCommentViewLongPressed:(id)arg1 withText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onCopy:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onDelete:(id)arg1;
- (void)onDeletePhoto:(id)arg1;
- (void)onDontLikeWithChoose:(id)arg1;
- (void)onDontLikeWithOtherReason:(id)arg1 QuestionExp:(id)arg2;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onFavoriteAddAdCard:(id)arg1;
- (void)onForbidScrollToTop;
- (void)onHeadImageClicked:(id)arg1;
- (void)onHideAdvertise:(id)arg1;
- (void)onInputModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onNetworkActivityStatusChanged;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onReloadCommentCellView:(id)arg1;
- (void)onRemoveAd;
- (void)onResendBtnClicked:(id)arg1;
- (void)onResumeScrollToTop;
- (void)onShowGroup;
- (void)onSingleTapOnInputView;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onTranslateAction:(id)arg1;
- (void)onTranslateComment:(id)arg1;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onViewAnimationWillHide;
- (void)onVoteAdCellHeightModify;
- (void)onWCSightViewWillEnterFullScreen:(id)arg1;
- (void)onWCSightViewWillExitFullScreen:(id)arg1;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment=_refComment;
- (void)reloadData:(id)arg1;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)resignInput;
- (void)rewardDetailViewTapped;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setInputToolView:(_Bool)arg1;
@property(nonatomic) unsigned long long tipType; // @synthesize tipType=_tipType;
@property(nonatomic) long long uiSource; // @synthesize uiSource=_uiSource;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldShowRewardDetailView;
- (_Bool)shouldShowRewardTip;
- (void)showFavoriteAddAdCardMenuitem;
- (void)showMenuItemForComment:(id)arg1 withRect:(struct CGRect)arg2 withComment:(id)arg3 isMySelf:(_Bool)arg4 isSending:(_Bool)arg5;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 isWord:(_Bool)arg3 andView:(id)arg4;
- (id)subAtContactString:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textViewTextDidChange;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)tryToStartSphereMonitoring;
- (void)tryToStopSphereMonitoringWithReset:(_Bool)arg1;
- (void)updateContentOffset;
- (void)updateHeaderGridView;
- (void)updateInputView;
- (void)updateNetworkStatus;
- (void)updateRewardTip;
- (void)updateRewardView;
- (void)updateSelectAndVoteAd;
- (void)updateTableLayout;
- (void)updateTableViewHeight;
- (void)updateTimeLabelText;
- (void)updateVoteAdBottom;
- (void)updateVoteAdLabelPosition:(id)arg1;
- (void)updateVoteAdPosition:(id)arg1;
- (void)updateVoteLinePosition:(id)arg1;
- (void)updateWordCnt:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppear;
- (void)willDisappear;
- (void)willDisshow;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

