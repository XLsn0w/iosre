//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "ILinkEventExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "ITranslateMsgMgrExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "TextFloatPreviewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTipsViewController, NSArray, NSString, NavigateLogicController, RichTextView, TextFloatViewController, TextMessageViewModel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, WCUIActionSheet;

@interface TextMessageCellView : CommonMessageCellView <ILinkEventExt, RichTextLayoutDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, TextFloatPreviewDelegate, ITranslateMsgMgrExt, IMsgRevokeExt>
{
    RichTextView *m_richTextView;
    MMTipsViewController *m_oTranslateIntroView;
    WCUIActionSheet *m_uiActionSheet;
    NavigateLogicController *m_navigationLogic;
    UIView *m_translateView;
    RichTextView *m_translateRichTextView;
    UIActivityIndicatorView *m_oTranslateLoadingView;
    UILabel *m_translateSuccessLabel;
    UIImageView *m_translateSuccessIconView;
    NSArray *m_translateMenus;
    TextFloatViewController *m_oFloatViewController;
    UIButton *m_warningBtn;
}

- (void).cxx_destruct;
- (void)onTextFloatNeedPushWebViewWithUrl:(id)arg1;
- (id)getOperateMenuItem;
- (_Bool)addCoverViewToControllerTable:(_Bool)arg1;
- (_Bool)highLightSearchKeyWords:(id)arg1;
- (id)getTranslateMenuItems;
- (_Bool)pressIntoSelectCopyStatusWithTranlateText:(_Bool)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onAddressClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkHighlighted:(_Bool)arg1 url:(id)arg2;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onWindowHide;
- (void)onLongTouch:(struct CGPoint)arg1;
- (void)onTouchDownRepeat;
- (void)translateMsg;
- (void)onTranslateMsg:(id)arg1;
- (void)onCopy:(id)arg1;
- (_Bool)canShowTranslateMenuItem;
- (id)operationMenuItems;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopyLinkText:(id)arg1;
- (_Bool)translatePreventLongPressLink;
- (_Bool)preventLongPressLink;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)onClickFullBtn;
- (void)initRichTextView;
- (void)onDisappear;
- (void)setNeedsDisplay;
- (double)contentViewCenterY;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateStatus;
- (void)updateContentOffset;
- (void)retryTranslate;
- (_Bool)isNetworkAvailable;
- (void)onReTryTranslate:(id)arg1;
- (void)onForwardTranslate:(id)arg1;
- (void)onFavoriteTranslate:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCopyTranslate:(id)arg1;
- (void)handleTranslateMenuWillHideMenuNotification:(id)arg1;
- (void)addTranslateViewMenus;
- (void)onDoubleTapTranslateView:(id)arg1;
- (void)onTapTranslateView:(id)arg1;
- (void)setTranslateText;
- (void)updateTranslateSuccessView;
- (void)updateTranslateStatusButton;
- (void)initTranslateRichTextView;
- (void)initTranslateView;
- (void)initWarningButton;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TextMessageViewModel *viewModel; // @dynamic viewModel;

@end

