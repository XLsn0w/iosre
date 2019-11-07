//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextView, WCDataItem, WCPasteTextLengthLogic;

@interface WCCommentStrangerViewController : MMUIViewController <UITextViewDelegate>
{
    UIScrollView *m_scrollView;
    UITextView *m_textView;
    UILabel *m_labKF;
    UIButton *m_btnPhone;
    UIImageView *m_textBG;
    float m_fTextBGDefaultHeight;
    float m_fTextViewDefaultHeight;
    float m_fLabelKFDefaultY;
    float m_fBtnPhoneDefaultY;
    double m_fKeyboardHeight;
    WCDataItem *dataItem;
    unsigned int source;
    _Bool m_bSendTextOnly;
    id <WCCommentStrangerViewControllerDelegate> m_delegate;
    WCPasteTextLengthLogic *pastelogic;
    int m_commentWordLimit;
}

+ (id)openOldText;
+ (void)removeOldText;
+ (void)writeOldText:(id)arg1;
- (void).cxx_destruct;
- (void)OnCancel;
- (void)OnReturn;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
- (void)dealloc;
@property(nonatomic) __weak id <WCCommentStrangerViewControllerDelegate> delegate; // @synthesize delegate=m_delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)doSendMessage;
- (id)init;
- (void)initLeftBtn;
- (void)initRightBtn;
- (void)initTextView;
@property(nonatomic) _Bool isSendTextOnly; // @synthesize isSendTextOnly=m_bSendTextOnly;
- (void)keyboardWillShow:(id)arg1;
- (void)onSendMessage:(id)arg1;
- (void)resizeViews;
@property(nonatomic) unsigned int source; // @synthesize source;
- (void)setTextViewContent:(id)arg1;
- (void)startLoading;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

