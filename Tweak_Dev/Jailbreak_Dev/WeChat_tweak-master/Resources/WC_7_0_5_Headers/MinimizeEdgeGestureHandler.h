//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPercentDrivenInteractiveTransition;

@interface MinimizeEdgeGestureHandler : NSObject
{
    _Bool _shouldForceCancel;
    id <MinimizeEdgeGestureHandlerDelegate> _delegate;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MinimizeEdgeGestureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMinimizationEdgeGesture:(id)arg1;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (_Bool)isInteracting;
@property(nonatomic) _Bool shouldForceCancel; // @synthesize shouldForceCancel=_shouldForceCancel;

@end

