//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "TenpayPasswordCtrlDelegate.h"
#import "UITextFieldDelegate.h"
#import "WCPayLogicMgrExt.h"

@class NSString, TenpayPasswordCtrl, UIImage, WCPayInputView;

@interface WCPayTenpayPasswordCtrlItem : WCBaseInfoItem <TenpayPasswordCtrlDelegate, WCPayLogicMgrExt, UITextFieldDelegate>
{
    TenpayPasswordCtrl *m_textField;
    UIImage *m_image;
    WCPayInputView *_payInputView;
}

- (void).cxx_destruct;
- (void)autoRemarkKeyBoradType;
- (void)becomeFirstResponder;
- (void)clearInput;
- (void)dealloc;
- (id)getHashData;
- (struct CGSize)getSize;
- (long long)getTextLength;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithYoga;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)onError:(id)arg1;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (void)passwordCtrlShouldChange:(id)arg1;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
- (void)resignFirstResponder;
- (void)setKeyboardAccessibility:(id)arg1;
- (void)setTextFieldSalt;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

