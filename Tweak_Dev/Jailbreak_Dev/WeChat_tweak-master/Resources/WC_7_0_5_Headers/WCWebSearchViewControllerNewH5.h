//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "IRecordPermissionCheckExt.h"
#import "IStreamVoiceInputExt.h"
#import "MMWebSearchViewDelegate.h"
#import "SGTopEntryViewDelegate.h"
#import "SearchVoiceInputViewControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "WSTagSearchDelegate.h"

@class MMTagTextField, MMWebSearchController, NSDictionary, NSString, SGTopEntryView, SearchVoiceInputViewController, UIButton, UIImageView, UILabel, UIView, UIView<YYWebViewInterface>, WCFullScreenTitleView, WCStatTimerHelper, WSEmoticonPadViewController, WSTagSearchLogic;

@interface WCWebSearchViewControllerNewH5 : MMUIViewController <UITextFieldDelegate, SGTopEntryViewDelegate, MMWebSearchViewDelegate, WSTagSearchDelegate, SearchVoiceInputViewControllerDelegate, IStreamVoiceInputExt, IRecordPermissionCheckExt, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
    NSString *_lastFormatQueryFromMultiStageForFixingWKSearchBug;
    UIView *_navBarBkg;
    UIView *_navBarShadowView;
    unsigned long long _currentSwitchBusinessType;
    WCFullScreenTitleView *_titleView;
    UIView *_navContentView;
    UIView *_navContentRightDivideView;
    UIImageView *_navSearchLeftView;
    UIButton *_navVoiceInputButton;
    UIView *_cornerWrapView;
    UIView *_cornerClipView;
    UIView *_contentSearchTextFieldWrapView;
    MMTagTextField *_contentSearchTextField;
    UIImageView *_contentSearchLeftView;
    UIButton *_contentSearchHitBtn;
    UIButton *_contentVoiceInputButton;
    WSEmoticonPadViewController *_emoticonPad;
    UIView *_dynamicContentWrapView;
    SGTopEntryView *_guideEntryView;
    WSTagSearchLogic *_tagSearchLogic;
    _Bool _isAnimatingToWebSearch;
    _Bool _isAnimatingCloseLastDetailView;
    int _sugOpStat;
    _Bool _isFirstPage;
    _Bool _isSencondPageFromVerticalEntrance;
    _Bool _hasFirstWebviewJsbridgeReady;
    _Bool _needSendOnFocusEventAfterJsbridgeReady;
    _Bool _needSendSwitchTabAfterJsbridgeReady;
    _Bool _needReloadWebView;
    _Bool _hasReloadWebView;
    _Bool _isResumeReloading;
    _Bool _isAppInForeground;
    WCStatTimerHelper *_pageTimeHelper;
    _Bool _hasInitContainerView;
    unsigned long long _beginPreloadTime;
    _Bool _hasSendOnUiInitEvent;
    UILabel *_noSearchBarNavTitle;
    _Bool _hasBecomeFirstResponder;
    _Bool _bMixSearchWithNonNavBackItem;
    _Bool _bSearchWithNonNavCancelItem;
    _Bool _bFromWebRecommendSetting;
    int _VCType;
    int _initScene;
    NSDictionary *_initedUrlParams;
    id <WCWebSearchViewControllerDelegate> _delegate;
    NSString *_fromUrlString;
    unsigned long long _enterTime;
    SearchVoiceInputViewController *_searchVoiceInputViewController;
    MMWebSearchController *_webSearchController;
    UIView<YYWebViewInterface> *_firstPageWebView;
    MMTagTextField *_navSearchTextField;
}

- (void).cxx_destruct;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
@property(nonatomic) int VCType; // @synthesize VCType=_VCType;
- (void)addDownloadTaskWith:(id)arg1;
- (void)adjustContentTopMargin:(double)arg1;
- (void)adjustNavigationBarFrame;
- (void)animateShowVoiceInputController;
@property(nonatomic) _Bool bFromWebRecommendSetting; // @synthesize bFromWebRecommendSetting=_bFromWebRecommendSetting;
@property(nonatomic) _Bool bMixSearchWithNonNavBackItem; // @synthesize bMixSearchWithNonNavBackItem=_bMixSearchWithNonNavBackItem;
@property(nonatomic) _Bool bSearchWithNonNavCancelItem; // @synthesize bSearchWithNonNavCancelItem=_bSearchWithNonNavCancelItem;
- (void)beginWebSearchAnimation;
- (void)contentSearchBtnClicked:(id)arg1 isVoiceInputBtnClick:(_Bool)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WCWebSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didBeginWebSearch;
- (void)didEndWebSearch;
- (void)didFinishLoadWebView:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)endWebSearchAnimation;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
- (void)findCanvasWrapViewIn:(id)arg1 toDic:(id)arg2;
@property(retain, nonatomic) UIView<YYWebViewInterface> *firstPageWebView; // @synthesize firstPageWebView=_firstPageWebView;
- (void)forceSetSwitchButtonHidden:(_Bool)arg1;
@property(retain, nonatomic) NSString *fromUrlString; // @synthesize fromUrlString=_fromUrlString;
- (id)getInputHeight;
- (id)getInputMarginLeftRight;
- (id)getInputMarginTop;
- (id)getMixSearchPlaceHolder;
- (id)getNativeHeight;
- (id)getPlaceHolderForBusinessType:(unsigned long long)arg1;
- (id)getSearchMarkImageForBusinesstype:(unsigned long long)arg1;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (void)initNavigationBar;
@property(nonatomic) int initScene; // @synthesize initScene=_initScene;
- (void)initView;
- (void)initWebSearchControllerWithScene:(int)arg1;
- (id)initWithScene:(int)arg1;
@property(retain, nonatomic) NSDictionary *initedUrlParams; // @synthesize initedUrlParams=_initedUrlParams;
- (_Bool)isDetailSearch;
- (_Bool)isMixSearch;
- (_Bool)isRightBarButtonItemHidden;
- (_Bool)isVertSearh;
- (void)layoutContent;
- (void)layoutNavContent;
- (void)layoutNavContentForEditStatus;
- (void)layoutNavContentForNormalStatus;
- (void)layoutNavContentWithBizType:(unsigned long long)arg1;
- (void)layoutSwitchButton;
- (void)longPressBackButton:(id)arg1;
@property(retain, nonatomic) MMTagTextField *navSearchTextField; // @synthesize navSearchTextField=_navSearchTextField;
- (void)onClickVoiceInput:(id)arg1;
- (void)onClickWithData:(id)arg1;
- (void)onContentSearchHitBtnClick:(id)arg1;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned long long)arg2;
- (void)onGotoEmoticonPad:(id)arg1;
- (void)onHideSearchBarWithParams:(id)arg1;
- (void)onInjectPreJsFailWhenReloadWebview:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onNavigationCancelItemClick:(id)arg1;
- (void)onNavigationSetItemClick:(id)arg1;
- (void)onOpenWebRecommend:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onQuerySimilarPicSearch:(id)arg1;
- (void)onRemoveDetailView:(id)arg1;
- (void)onSearchBackToPreviousView;
- (void)onSearchHotWord:(id)arg1;
- (void)onSearchInputSetPlaceHolder:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchReset;
- (void)onSendButtonClicked;
- (void)onStartVerticalSearch:(unsigned long long)arg1;
- (void)onSwitchSearchContext:(int)arg1 andType:(unsigned long long)arg2 andQuery:(id)arg3;
- (void)onSystemEnterBackground;
- (void)onSystemEnterForeground;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextViewAttributeTextChange:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)onViewTypeChanged;
- (void)onVoiceInputEndWithText:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)preInitContainerView;
- (void)reInitWebSearchVCAndReplace;
- (void)registerTagSearchLogic;
- (void)removeAllCanvasWrapperView;
- (void)reportGuideEntryViewExposure;
- (void)resetContentSearch;
- (void)resetFromWebSearch;
- (void)resetNavSearch;
- (void)resetTitle;
- (void)resumeWebSearchView;
@property(retain, nonatomic) SearchVoiceInputViewController *searchVoiceInputViewController; // @synthesize searchVoiceInputViewController=_searchVoiceInputViewController;
- (void)setContentSearchUIForType:(unsigned long long)arg1;
- (void)setFakeNavBarHidden:(_Bool)arg1 slideAnimated:(_Bool)arg2;
- (void)setNavCancelButtonHidden:(_Bool)arg1;
- (void)setNavLeftBarItemHidden:(_Bool)arg1;
- (void)setPlaceImage:(id)arg1;
@property(retain, nonatomic) MMWebSearchController *webSearchController; // @synthesize webSearchController=_webSearchController;
- (_Bool)shouldForbidNavBack;
- (void)startCommonSearch:(id)arg1 withSugId:(id)arg2;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tryInitContainerView;
- (void)tryInitNavVoiceButton;
- (void)tryParallelAsyncWebSearch:(unsigned long long)arg1 scene:(unsigned int)arg2 query:(id)arg3;
- (void)tryRestoreNavSearchBar;
- (void)tryShowStreamVoiceInputViewController;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (double)webSearchViewPosY;
- (void)webviewScrollViewWillBeginDragging:(id)arg1;
- (void)willBeginWebSearch;
- (void)willDisappear;
- (void)willEndWebSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

