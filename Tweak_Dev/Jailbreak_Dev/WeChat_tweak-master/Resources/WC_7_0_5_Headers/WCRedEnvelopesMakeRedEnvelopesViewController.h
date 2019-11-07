//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "EmoticonCustomAddLogicControllerDelegate.h"
#import "ILinkEventExt.h"
#import "MMTableViewInfoDelegate.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPayNoticeBannerDelegate.h"

@class CEmoticonWrap, EmoticonBoardView, EmoticonCustomAddLogicController, MMBadgeView, MMEmoticonView, MMTextView, NSString, RichTextView, UIButton, UILabel, UIView, WCBaseKeyboardToolBar, WCPayNoticeBanner, WCRedEnvelopesMakeRedEnvelopesViewLayout, WCUITextField;

@interface WCRedEnvelopesMakeRedEnvelopesViewController : WCRedEnvelopesBaseViewController <WCPayNoticeBannerDelegate, UITableViewDelegate, WCActionSheetDelegate, UITextFieldDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonCustomAddLogicControllerDelegate, UITextViewDelegate, ILinkEventExt, MMTableViewInfoDelegate>
{
    id <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate> m_delegate;
    int m_enMakeRedEnvelopesScene;
    WCUITextField *m_oSelectCountTextField;
    unsigned int m_uiSelectCount;
    UILabel *moneyLabel;
    UILabel *nsDefaultWishingLabel;
    WCUITextField *m_oMoneyTextField;
    MMTextView *m_textView;
    UIButton *normalRedEnvelopesButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    _Bool m_bDidBack;
    _Bool m_bCanHandleScrollViewDidChangedEvent;
    _Bool m_bNomalMoney;
    RichTextView *richTextView;
    UIView *m_oErrorView;
    UILabel *m_oErrorLabel;
    _Bool m_bError;
    _Bool m_bWaitFiveMintes;
    UIView *oCountSelectView;
    UIView *oSimpleMoneyView;
    UIView *oRedEnvelopeSkinSelectView;
    long long m_inputErrorType;
    NSString *m_foreignHongbaoName;
    MMBadgeView *selectSkinBadgeView;
    _Bool _m_leftBarButtonClose;
    _Bool _bIsEmoticonBoardViewShow;
    WCPayNoticeBanner *_banner;
    WCRedEnvelopesMakeRedEnvelopesViewLayout *_m_layout;
    UILabel *_m_unitLabel;
    UIButton *_addEmoticonBtn;
    MMEmoticonView *_emoticonView;
    EmoticonBoardView *_emoticonBoardView;
    EmoticonCustomAddLogicController *_emoticonCustomAddLogic;
    CEmoticonWrap *_emoticonWrap;
}

- (void).cxx_destruct;
- (id)GetCurrentViewController;
- (void)OnClickTailActivity;
- (void)OnLeftBarButtonDone;
- (void)OnMakeWCRedEnvelopesButtonClick;
- (void)OnRightBarButtonClick;
- (void)OnViewHongBaoFaq;
- (void)SetErrorTips;
- (void)SetLeftBarButtonClose;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) UIButton *addEmoticonBtn; // @synthesize addEmoticonBtn=_addEmoticonBtn;
- (void)adjustMoneyLabel;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
@property(nonatomic) _Bool bIsEmoticonBoardViewShow; // @synthesize bIsEmoticonBoardViewShow=_bIsEmoticonBoardViewShow;
@property(retain, nonatomic) WCPayNoticeBanner *banner; // @synthesize banner=_banner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)checkDataError;
- (void)checkNextButtonStatus;
- (void)dealloc;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonCustomAddLogic; // @synthesize emoticonCustomAddLogic=_emoticonCustomAddLogic;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (_Bool)enableMakeSelfie;
- (id)getLastSelectEmoticonPid;
- (_Bool)handleAddCameraEmoji;
- (void)handleEmoticonDelete;
- (void)handleGetEmoticonWrap;
- (void)handleTap:(id)arg1;
- (void)hideErrorView;
- (void)hideErrorViewWithAnimation;
- (void)hidekeyboard;
- (void)initData;
- (void)initErrorView;
- (void)initNavigationBar;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(nonatomic) int m_enMakeRedEnvelopesScene; // @synthesize m_enMakeRedEnvelopesScene;
@property(retain, nonatomic) WCRedEnvelopesMakeRedEnvelopesViewLayout *m_layout; // @synthesize m_layout=_m_layout;
@property(nonatomic) _Bool m_leftBarButtonClose; // @synthesize m_leftBarButtonClose=_m_leftBarButtonClose;
@property(retain, nonatomic) UILabel *m_unitLabel; // @synthesize m_unitLabel=_m_unitLabel;
- (void)makeSelfieEmoitcon;
- (id)navigationBarBackgroundColor;
- (void)onAddEmoticonBtnClick;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSelectSkinCellClick;
- (void)onSendButtonClicked;
- (void)onTakePhotoCancelled;
- (void)onViewHBHistory;
- (long long)perGroupMaxValue;
- (long long)perMinValue;
- (long long)perPersonMaxValue;
- (void)refreshButtonFiveMintes;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadContentView;
- (void)resetToCanHandleScrollViewChangedEnvent;
- (void)saveLastSelectEmoticonPid:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setButtonWaitFiveMin;
- (void)setDelegate:(id)arg1;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (_Bool)shouldShowForeignHongBaoName;
- (void)showErrorView:(id)arg1 ErrorType:(long long)arg2;
- (void)tapEmoticonView:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (long long)totalAmount;
- (unsigned int)totalNum;
- (void)updateBizAuthTitleWithFlag:(unsigned int)arg1;
- (void)updateNavigationBackgroundWithFlag:(unsigned int)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

