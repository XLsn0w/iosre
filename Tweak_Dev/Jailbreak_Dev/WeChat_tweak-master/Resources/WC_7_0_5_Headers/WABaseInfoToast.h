//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMTimer, UIView;

@interface WABaseInfoToast : MMUIView
{
    _Bool m_isMoving;
    MMTimer *m_autoDismissTimer;
    _Bool _isNeedAutoDismiss;
    id <WABaseInfoToastDelegate> _delegate;
    long long _showTimeStamp;
    UIView *_parentView;
}

- (void).cxx_destruct;
- (void)autoDismiss;
- (void)dealloc;
@property(nonatomic) __weak id <WABaseInfoToastDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithAnimation:(_Bool)arg1;
@property(nonatomic) _Bool isNeedAutoDismiss; // @synthesize isNeedAutoDismiss=_isNeedAutoDismiss;
- (void)layoutSubviews;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
- (void)showInView:(id)arg1;

@end

