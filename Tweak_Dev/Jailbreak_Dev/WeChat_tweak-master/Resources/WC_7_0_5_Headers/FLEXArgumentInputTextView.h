//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLEXArgumentInputView.h"

#import "UITextViewDelegate.h"

@class NSString, UITextView;

@interface FLEXArgumentInputTextView : FLEXArgumentInputView <UITextViewDelegate>
{
    UITextView *_inputTextView;
}

+ (id)inputFont;
- (void).cxx_destruct;
- (id)createToolBar;
- (id)initWithArgumentTypeEncoding:(const char *)arg1;
@property(retain, nonatomic) UITextView *inputTextView; // @synthesize inputTextView=_inputTextView;
- (double)inputTextViewHeight;
- (_Bool)inputViewIsFirstResponder;
- (void)layoutSubviews;
@property(readonly, nonatomic) unsigned long long numberOfInputLines;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

