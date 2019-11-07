//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "IStreamVoiceInputExt-Protocol.h"
#import "MMWebSearchViewDelegate-Protocol.h"
#import "SGTopEntryViewDelegate-Protocol.h"
#import "SearchVoiceInputViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WSTagSearchDelegate-Protocol.h"

@class MMTagTextField, MMUILabel, MMWebSearchController, NSDictionary, NSString, SGTopEntryView, SearchVoiceInputViewController, UIButton, UIImageView, UIView, WCFullScreenTitleView, WCStatTimerHelper, WSTagSearchLogic;
@protocol WCWebSearchViewControllerDelegate, YYWebViewInterface;

@interface WCWebSearchViewControllerNewH5 : MMUIViewController <UITextFieldDelegate, SGTopEntryViewDelegate, MMWebSearchViewDelegate, WSTagSearchDelegate, SearchVoiceInputViewControllerDelegate, IStreamVoiceInputExt, IRecordPermissionCheckExt>
{
    NSString *_lastFormatQueryFromMultiStageForFixingWKSearchBug;
    UIView *_navBarBkg;
    UIView *_navBarShadowView;
    unsigned long long _currentSwitchBusinessType;
    WCFullScreenTitleView *_titleView;
    UIView *_navContentView;
    UIView *_navContentRightDivideView;
    MMTagTextField *_navSearchTextField;
    UIImageView *_navSearchLeftView;
    MMUILabel *_navTitleLabel;
    UIButton *_navVoiceInputButton;
    UIView *_cornerWrapView;
    UIView *_cornerClipView;
    UIView *_contentSearchTextFieldWrapView;
    MMTagTextField *_contentSearchTextField;
    UIImageView *_contentSearchLeftView;
    UIButton *_contentSearchHitBtn;
    UIButton *_contentVoiceInputButton;
    UIView *_dynamicContentWrapView;
    SGTopEntryView *_guideEntryView;
    MMWebSearchController *_webSearchController;
    WSTagSearchLogic *_tagSearchLogic;
    _Bool _isAnimatingToWebSearch;
    _Bool _isAnimatingCloseLastDetailView;
    int _sugOpStat;
    _Bool _isFirstPage;
    UIView<YYWebViewInterface> *_firstPageWebView;
    _Bool _isSencondPageFromVerticalEntrance;
    _Bool _bTextFieldShouldReturn;
    _Bool _hasFirstWebviewJsbridgeReady;
    int _initScene;
    _Bool _needSendOnFocusEventAfterJsbridgeReady;
    _Bool _needSendSwitchTabAfterJsbridgeReady;
    WCStatTimerHelper *_pageTimeHelper;
    _Bool _hasInitContainerView;
    unsigned long long _beginPreloadTime;
    _Bool _hasSendOnUiInitEvent;
    _Bool _bMixSearchWithNonNavBackItem;
    int _VCType;
    NSDictionary *_initedUrlParams;
    id <WCWebSearchViewControllerDelegate> _delegate;
    NSString *_fromUrlString;
    unsigned long long _enterTime;
    SearchVoiceInputViewController *_searchVoiceInputViewController;
}

@property(retain, nonatomic) SearchVoiceInputViewController *searchVoiceInputViewController; // @synthesize searchVoiceInputViewController=_searchVoiceInputViewController;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSString *fromUrlString; // @synthesize fromUrlString=_fromUrlString;
@property(nonatomic) __weak id <WCWebSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int VCType; // @synthesize VCType=_VCType;
@property(nonatomic) _Bool bMixSearchWithNonNavBackItem; // @synthesize bMixSearchWithNonNavBackItem=_bMixSearchWithNonNavBackItem;
@property(retain, nonatomic) NSDictionary *initedUrlParams; // @synthesize initedUrlParams=_initedUrlParams;
- (void).cxx_destruct;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (void)tryParallelAsyncWebSearch:(unsigned long long)arg1 scene:(unsigned int)arg2 query:(id)arg3;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (void)onOpenWebRecommend:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onSearchBackToPreviousView;
- (void)onViewTypeChanged;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchReset;
- (void)webviewScrollViewWillBeginDragging:(id)arg1;
- (id)getNativeHeight;
- (id)getInputHeight;
- (id)getInputMarginLeftRight;
- (id)getInputMarginTop;
- (void)onSearchHotWord:(id)arg1;
- (void)onStartVerticalSearch:(unsigned long long)arg1;
- (void)onSearchInputSetPlaceHolder:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (double)webSearchViewPosY;
- (void)startCommonSearch:(id)arg1 withSugId:(id)arg2;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)onSwitchSearchContext:(int)arg1 andType:(unsigned long long)arg2 andQuery:(id)arg3;
- (void)onClickWithData:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned long long)arg2;
- (void)onTextViewAttributeTextChange:(id)arg1;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)onVoiceInputEndWithText:(id)arg1;
- (void)animateShowVoiceInputController;
- (void)contentSearchBtnClicked:(id)arg1 isVoiceInputBtnClick:(_Bool)arg2;
- (void)onContentSearchHitBtnClick:(id)arg1;
- (void)onClickVoiceInput:(id)arg1;
- (_Bool)isDetailSearch;
- (_Bool)isVertSearh;
- (_Bool)isMixSearch;
- (id)getSearchMarkImageForBusinesstype:(unsigned long long)arg1;
- (id)getPlaceHolderForBusinessType:(unsigned long long)arg1;
- (id)getMixSearchPlaceHolder;
- (void)setContentSearchUIForType:(unsigned long long)arg1;
- (void)resetContentSearch;
- (void)resetFromWebSearch;
- (void)registerTagSearchLogic;
- (void)endWebSearchAnimation;
- (void)beginWebSearchAnimation;
- (void)didEndWebSearch;
- (void)willEndWebSearch;
- (void)tryInitNavVoiceButton;
- (void)didBeginWebSearch;
- (void)willBeginWebSearch;
- (void)setPlaceImage:(id)arg1;
- (void)adjustContentTopMargin:(double)arg1;
- (void)setNavLeftBarItemHidden:(_Bool)arg1;
- (void)forceSetSwitchButtonHidden:(_Bool)arg1;
- (void)layoutSwitchButton;
- (void)layoutNavContentWithBizType:(unsigned long long)arg1;
- (void)layoutNavContentForNormalStatus;
- (void)layoutNavContentForEditStatus;
- (void)layoutContent;
- (void)onNavigationCancelItemClick:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (_Bool)shouldForbidNavBack;
- (void)updateNavBarShadow;
- (_Bool)isRightBarButtonItemHidden;
- (void)layoutNavContent;
- (void)setNavCancelButtonHidden:(_Bool)arg1;
- (void)setFakeNavBarHidden:(_Bool)arg1 slideAnimated:(_Bool)arg2;
- (void)resetNavSearch;
- (void)tryShowStreamVoiceInputViewController;
- (void)initNavigationBar;
- (void)reportGuideEntryViewExposure;
- (void)initView;
- (void)initWebSearchControllerWithScene:(int)arg1;
- (id)initWithScene:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)willDisappear;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)preInitContainerView;
- (void)tryInitContainerView;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

