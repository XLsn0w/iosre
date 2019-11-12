//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IQQMailExt.h"
#import "MMMailContactSelectViewDelegate.h"
#import "MailAttachmentControlViewDelegate.h"
#import "MailContactFilterViewDelegate.h"
#import "MailContentViewDelegate.h"
#import "MailRTEImageAttachmentViewDelegate.h"
#import "MailRTEToolViewDelegate.h"
#import "MailReceiverEditViewDelegate.h"
#import "RTEAttachmentViewProviderDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"
#import "VerifyQQPwdMgrExt.h"
#import "WCActionSheetDelegate.h"

@class CMail, MMTableView, MMTimer, MailAttachmentControlView, MailContactFilterView, MailContentView, MailRTEToolView, MailReceiverEditView, MailSubjectEditView, NSMutableArray, NSString, NSTextStorage, RTEAttachmentViewProvider, UIView;

@interface WriteMailViewController : MMUIViewController <MailRTEToolViewDelegate, MailRTEImageAttachmentViewDelegate, RTEAttachmentViewProviderDelegate, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, MailContactFilterViewDelegate, MailContentViewDelegate, UIAlertViewDelegate, IQQMailExt, MMMailContactSelectViewDelegate, MailReceiverEditViewDelegate, MailAttachmentControlViewDelegate, VerifyQQPwdMgrExt>
{
    MMTableView *m_tableView;
    MailContactFilterView *m_filterView;
    MailContentView *m_contentView;
    MailRTEToolView *m_toolView;
    MailReceiverEditView *m_receiverView;
    MailReceiverEditView *m_ccView;
    MailReceiverEditView *m_bccView;
    MailSubjectEditView *m_topicView;
    UIView *m_ccBccView;
    NSMutableArray *m_arrShowViews;
    MailAttachmentControlView *m_attachmentControlView;
    int m_firstResponderStatus;
    int m_ccBccFlodStatus;
    CMail *m_mail;
    NSMutableArray *m_arrReceiver;
    NSMutableArray *m_arrCc;
    NSMutableArray *m_arrBcc;
    unsigned int m_uiMailType;
    double m_fKeyboardHeight;
    MMTimer *m_autoSaveTimer;
    unsigned int m_firstResponderTag;
    NSMutableArray *m_arrAllMailContacts;
    NSString *m_nsMailID;
    NSTextStorage *textStorage;
    CMail *m_oldMail;
    NSString *m_oldMailID;
    _Bool m_firstInit;
    RTEAttachmentViewProvider *m_attachmentViewProvider;
    double _keyboardHeight;
}

- (void).cxx_destruct;
- (void)CheckCancel:(id)arg1;
- (void)OnComposeSend:(int)arg1;
- (void)OnGetAllMailContact:(id)arg1 ErrNo:(int)arg2;
- (void)OnReturn;
- (void)OnUploadSuccess;
- (void)RealSend;
- (void)ReleaseTextField;
- (_Bool)SendBtnEnable;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (float)calculateTableViewHeight;
- (_Bool)canEditNote;
- (_Bool)checkHideKeyboard;
- (id)constructRTEContent;
- (void)contactReturn:(id)arg1;
- (void)contentLengthChanged:(id)arg1;
- (void)contentViewDidFinishEdit;
- (void)contentViewNeedSetContentOffset;
- (void)dealloc;
- (void)deleteDraft;
- (void)didStartWriteMailContent;
- (void)doSearch:(id)arg1;
- (void)filterViewBeginDragging;
- (void)fixFilterView;
- (id)getAllAttachmentFileInfo;
- (id)getAllAttachments;
- (id)getAttachmentViewProvider;
- (id)getCurrentViewController;
- (id)getFilterName:(id)arg1;
- (int)getFirstResponderStatusForRow:(long long)arg1;
- (int)getNextResponderStautsForFirstResponderStatus:(int)arg1;
- (id)getSelfMailContact;
- (id)getStoredAttachments;
- (id)getViewController;
- (id)getViewForFirstResponderStatus:(int)arg1;
- (long long)indexForView:(id)arg1;
- (id)init;
- (void)initAutoSaveTimer;
- (void)initData;
- (void)initMailContentView;
- (void)initNotificationObservers;
- (void)initTableItemViews;
- (void)initToolView;
- (void)initView;
- (id)initWithEmptyMail:(id)arg1;
- (id)initWithMail:(id)arg1 mailID:(id)arg2 mailType:(unsigned int)arg3;
- (id)initWithMail:(id)arg1 mailType:(unsigned int)arg2;
- (id)initWithNewEmptyMail:(id)arg1;
- (void)insertRTEAttachments:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadDraft;
@property(retain, nonatomic) NSMutableArray *m_arrAllMailContacts; // @synthesize m_arrAllMailContacts;
- (void)makeKeyboardInvisible;
- (void)makeKeyboardShow;
- (void)makeTextViewFirstResponder;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)objectCount;
- (void)onAddMailContact:(id)arg1;
- (void)onAttachmentChanged:(id)arg1;
- (void)onAttachmentNeedReload:(id)arg1;
- (void)onAutoSaveTimer;
- (void)onCreatAttachmentView:(id)arg1;
- (void)onFirstResponderResigned;
- (void)onLongPressSelectAttachmentView:(id)arg1;
- (void)onMailContactChanged:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onMailContactSelectDone:(id)arg1 userInfo:(id)arg2;
- (void)onMailReceiverEditViewHeightChanged:(id)arg1;
- (void)onSend;
- (void)onShowBasicToolView;
- (_Bool)onShowExceedMaxObjectCountAlert;
- (void)onShowFullToolView;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldFinishEdit:(id)arg1;
- (void)onTextFieldNextItem:(id)arg1;
- (void)onTopBarFrameChanged;
- (void)onVerifyQQPwdCancel;
- (void)releaseAutoSaveTimer;
- (void)reloadTableView;
- (void)removeNotificationObservers;
- (void)saveDraft;
- (void)setContentResponderStatus;
- (void)setFirstRespondStatus:(int)arg1;
- (void)setNewFirstResponse;
- (void)setNextFirstRespondStatus:(int)arg1;
- (void)setccBccFlodStatus:(int)arg1;
- (void)staticReloadTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tryHideToolView;
- (void)tryShowToolView;
- (void)updateRightBarButton;
- (void)updateToolBarHeightWithKeyboardHeight:(double)arg1;
- (void)uploadAttachment:(id)arg1 name:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
