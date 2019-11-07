//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPercentDrivenInteractiveTransition;

@interface WAMenuPopInteractiveTransition : NSObject <UIGestureRecognizerDelegate>
{
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
    _Bool _shouldForceCancel;
    id <WAPopInteractiveTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAPopInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (id)interactivePopTransition;
- (_Bool)isInteracting;
@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

