//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMUILabel, UIButton, UIImageView, UITextView, UIView;

@interface WAAlertDialog : MMObject
{
    UIButton *_backgroundRoot;
    UIView *_contentView;
    UIImageView *_contentBg;
    MMUILabel *_tipsTitleLabel;
    UITextView *_tipsContentLabel;
    _Bool _onlyTitle;
    id <WAAlertDialogDelegate> _delegate;
    UIView *_view;
    UIView *_alignView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *alignView; // @synthesize alignView=_alignView;
- (id)bulidNSAttributedStringText:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WAAlertDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fadeIn:(double)arg1;
- (void)hide;
- (id)initWithWebView:(id)arg1;
- (id)initWithWebView:(id)arg1 alignView:(id)arg2;
- (void)onClickBtn:(id)arg1;
- (void)setButtonColor:(id)arg1 withTag:(long long)arg2;
- (void)setButtonTitle:(id)arg1 cancel:(id)arg2;
- (void)setContent:(id)arg1 title:(id)arg2;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)updateSubViewsFrame;

@end

