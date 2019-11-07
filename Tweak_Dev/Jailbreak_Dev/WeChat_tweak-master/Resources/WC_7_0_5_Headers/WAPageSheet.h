//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class UIView;

@interface WAPageSheet : MMObject
{
    _Bool _isShown;
    _Bool _forbidTapToDismiss;
    _Bool _bSupportRotate;
    _Bool _isShowing;
    _Bool _isDismissing;
    id <WAPageSheetDelegate> _delegate;
    UIView *_contentView;
    UIView *_parentView;
    UIView *_containerView;
    UIView *_interateView;
    WAPageSheet *_retainSheet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSupportRotate; // @synthesize bSupportRotate=_bSupportRotate;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (double)contentHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (double)contentWidth;
- (void)dealloc;
@property(nonatomic) __weak id <WAPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRotate:(id)arg1;
- (void)dismissWithAnimation;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool forbidTapToDismiss; // @synthesize forbidTapToDismiss=_forbidTapToDismiss;
- (id)init;
- (void)initContainerView;
- (void)initContentView;
- (void)initInterateView;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
- (void)layoutSubViews;
- (void)loadSubViews;
- (void)loadViews;
- (double)operateButtonBottomInset;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void)resetContentViewCornerRadius;
- (void)resetPosition;
- (void)resetShownPosition;
@property(retain, nonatomic) WAPageSheet *retainSheet; // @synthesize retainSheet=_retainSheet;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tapOnInterateView:(id)arg1;

@end

