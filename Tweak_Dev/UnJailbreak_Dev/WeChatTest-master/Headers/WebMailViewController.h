//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "INewQQMailExt-Protocol.h"
#import "IQQMailExt-Protocol.h"
#import "MMMailContactSelectViewDelegate-Protocol.h"
#import "MailAttachmentControlViewDelegate-Protocol.h"
#import "MailContactFilterViewDelegate-Protocol.h"
#import "MailReceiverEditViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VerifyQQPwdMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "YYWebViewDelegate-Protocol.h"

@class CMail, MMTableView, MMTimer, MailAttachmentControlView, MailContactFilterView, MailReceiverEditView, MailSubjectEditView, NSMutableArray, NSString, NSURLRequest, UIResponder, UIView;
@protocol WebMailViewDelegate, YYWebViewInterface;

@interface WebMailViewController : MMUIViewController <YYWebViewDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, UIAlertViewDelegate, UIScrollViewDelegate, MMMailContactSelectViewDelegate, MailAttachmentControlViewDelegate, MailReceiverEditViewDelegate, MailContactFilterViewDelegate, IQQMailExt, INewQQMailExt, VerifyQQPwdMgrExt>
{
    MMTableView *m_tableView;
    MailContactFilterView *m_filterView;
    MailReceiverEditView *m_receiverView;
    MailReceiverEditView *m_ccView;
    MailReceiverEditView *m_bccView;
    MailSubjectEditView *m_topicView;
    UIView *m_ccBccView;
    NSMutableArray *m_arrShowViews;
    MailAttachmentControlView *m_attachmentControlView;
    CMail *m_mail;
    NSMutableArray *m_arrReceiver;
    NSMutableArray *m_arrCc;
    NSMutableArray *m_arrBcc;
    NSMutableArray *m_arrAttachment;
    unsigned int m_uiMailType;
    NSString *m_nsSubject;
    NSString *m_nsMailHeader;
    int m_firstResponderStatus;
    int m_ccBccFlodStatus;
    MMTimer *m_autoSaveTimer;
    unsigned int m_firstResponderTag;
    double m_fKeyboardHeight;
    double m_defaultvisibleheight;
    NSMutableArray *m_arrAttachmentView;
    NSMutableArray *m_arrAllMailContacts;
    NSString *m_nsMailID;
    _Bool m_bFromReadMail;
    _Bool m_bFirstFixContectHeight;
    _Bool m_bPresentModal;
    NSMutableArray *m_nsChats;
    _Bool m_bIsSending;
    id <WebMailViewDelegate> m_delegate;
    _Bool m_rewritingDataSource;
    UIView<YYWebViewInterface> *m_webView;
    UIResponder *keyboardActiveInput;
}

@property(retain, nonatomic) NSString *m_nsMailHeader; // @synthesize m_nsMailHeader;
@property(nonatomic) double m_defaultvisibleheight; // @synthesize m_defaultvisibleheight;
@property(retain, nonatomic) UIResponder *keyboardActiveInput; // @synthesize keyboardActiveInput;
@property(nonatomic) _Bool m_bPresentModal; // @synthesize m_bPresentModal;
@property(nonatomic) _Bool m_bFromReadMail; // @synthesize m_bFromReadMail;
@property(retain, nonatomic) NSMutableArray *m_arrAllMailContacts; // @synthesize m_arrAllMailContacts;
@property(nonatomic) __weak id <WebMailViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)uploadAttachment:(id)arg1 name:(id)arg2;
- (id)initWithMail:(id)arg1 withContent:(id)arg2 mailType:(unsigned int)arg3;
- (id)initWithMail:(id)arg1 withContent:(id)arg2 withSubject:(id)arg3;
- (id)init;
- (id)getViewController;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)handleGetOffsetFromJS:(id)arg1;
- (void)updateCurrentOffset;
- (void)handleSetOffsetFromJS:(id)arg1;
- (id)decodeFromPercentEscapeString:(id)arg1;
- (void)asycGetContentWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)onMailContactSelectDone:(id)arg1 userInfo:(id)arg2;
- (void)onMailContactChanged:(id)arg1;
- (void)onTextFieldNextItem:(id)arg1;
- (void)onTextFieldFinishEdit:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onFirstResponderResigned;
- (void)onMailReceiverEditViewHeightChanged:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onAddMailContact:(id)arg1;
- (long long)indexForView:(id)arg1;
- (id)getFilterName:(id)arg1;
- (void)contactReturn:(id)arg1;
- (void)OnGetAllMailContact:(id)arg1 ErrNo:(int)arg2;
- (void)onVerifyQQPwdCancel;
- (void)staticReloadTableView;
- (void)reloadTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)releaseAutoSaveTimer;
- (void)initAutoSaveTimer;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)responderDidBecomeActive:(id)arg1;
- (void)initAttaches;
- (void)initView;
- (void)setMailTitle:(id)arg1;
- (void)SetWebViewMargin:(unsigned int)arg1;
- (void)rebuildTableView;
- (float)calculateTableViewHeight;
- (void)initTableItemViews;
- (void)updateRightBarButton;
- (void)OnReturn;
- (void)ReleaseTextField;
- (void)CheckCancel:(id)arg1;
- (void)initData;
- (_Bool)SendBtnEnable;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)composeSend;
- (void)onSendWithContent:(id)arg1;
- (void)onSend;
- (void)doSearch:(id)arg1;
- (void)fixFilterView;
- (void)onAutoSaveTimer;
- (void)deleteDraft;
- (void)loadDraft;
- (void)saveDraft;
- (void)setccBccFlodStatus:(int)arg1;
- (void)rewriteDataSource:(int)arg1;
- (void)setNextFirstRespondStatus:(int)arg1;
- (void)setFirstRespondStatus:(int)arg1;
- (int)getFirstResponderStatusForRow:(long long)arg1;
- (int)getNextResponderStautsForFirstResponderStatus:(int)arg1;
- (id)getViewForFirstResponderStatus:(int)arg1;
- (id)getSelfWebMailContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

