//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "IAutoSetRemarkExt-Protocol.h"
#import "IAutoSetStrangerAttributeExt-Protocol.h"
#import "IHDHeadImageViewExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IOpenImResourceMgrExt-Protocol.h"
#import "MMCPLabelDelegate-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "SendVerifyMsgViewControllerDelegate-Protocol.h"

@class CContact, ContactRelatedGroupLogic, MMTableViewInfo, NSString, SendVerifyMsgLogicController;

@interface OpenIMContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, IAutoSetStrangerAttributeExt, SendVerifyMsgViewControllerDelegate, ILinkEventExt, RichTextLayoutDelegate, IHDHeadImageViewExt, IOpenImResourceMgrExt>
{
    _Bool m_bFirstBecomeFriend;
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_chatContact;
    unsigned int m_uiVerify;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    _Bool _m_bDisableAllOperation;
}

@property(nonatomic) _Bool m_bDisableAllOperation; // @synthesize m_bDisableAllOperation=_m_bDisableAllOperation;
- (void).cxx_destruct;
- (void)reportContactInfoComeWithReportScene:(int)arg1;
- (void)reportContactInfoItemClickWithCellInfo:(id)arg1;
- (void)reportContactInfoViewEnter;
- (void)onRestoreCPLabel:(id)arg1;
- (void)updateCPState;
- (id)init;
- (void)contactSendReplyOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)handleAddedContact;
- (void)onVerifyContactOk;
- (void)onRelpyContact:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)doAddContact;
- (void)onOpenIMNormalClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onStartChat:(id)arg1;
- (void)onNewMessage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doDeleteContact;
- (void)onAction;
- (void)opBlackList:(id)arg1;
- (void)onOpenVoiceVoipView;
- (void)onOpenVoipView;
- (void)onExposeByRecommand;
- (void)doAddToBlackList;
- (void)addToBlackList:(id)arg1;
- (void)removeFromBlackList;
- (void)showRightButton;
- (void)initFooterView;
- (void)initPrivacyTipsLabel;
- (void)initQuitRoomTipsLabel;
- (void)initBlackListTipsLabel;
- (void)initFooterBtnArea;
- (void)updateToBigSendMsgBtn;
- (void)initBlackAndExposeContactBtn;
- (void)initExposeBtn;
- (void)initAddContactBtn;
- (void)initVerifyBtn;
- (void)initSayHelloBtn;
- (void)onSayHelloToContact;
- (void)onOpenVoipActionSheet:(id)arg1;
- (_Bool)initVoipBtn;
- (void)initSendMsgBtn;
- (void)initDeleteBtn;
- (void)reloadTableView;
- (_Bool)checkISNeedShowIMSource;
- (id)makeOpenIMSourceSection;
- (id)makeOpenIMIntroSection;
- (id)makeOpenIMInfoSection;
- (void)initData;
- (void)makeEditRemarkNameCell:(id)arg1 CellInfo:(id)arg2;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)makeSourceCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2 title:(id)arg3 phoneList:(id)arg4 autoresizingMask:(unsigned long long)arg5;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMoreCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMSeparator:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMPhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeCellTitle:(id)arg1 Title:(id)arg2 MaxWidth:(double)arg3 AutoresizingMask:(unsigned long long)arg4;
- (void)makeCellTitle:(id)arg1 Title:(id)arg2 MaxWidth:(double)arg3;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallLabel:(id)arg1 Y:(double)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(_Bool)arg5 withPrefixTitle:(id)arg6;
- (id)makeHeadSmallLabel:(id)arg1 Y:(double)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(_Bool)arg5;
- (void)opEditRemarkName;
- (void)tryHandleLink:(id)arg1;
- (void)tryCall:(id)arg1;
- (void)onSocialInfoHandle;
- (void)updateFooterView;
- (_Bool)isShowAddFriendScene;
- (_Bool)isFromQRCode;
- (id)getInfoDisplayName;
- (_Bool)isNeedVerify;
- (_Bool)isShowExposeButton;
- (_Bool)isShowBlackAction;
- (_Bool)isNeedShowRightBtn;
- (void)initTableView;
- (id)GetTableView;
- (_Bool)isFromStrangeScene;
- (void)dealloc;
- (void)loadLocalContactData;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (void)onGetOpenImResourceDone:(id)arg1;
- (id)initWithContact:(id)arg1 andVerify:(unsigned int)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

