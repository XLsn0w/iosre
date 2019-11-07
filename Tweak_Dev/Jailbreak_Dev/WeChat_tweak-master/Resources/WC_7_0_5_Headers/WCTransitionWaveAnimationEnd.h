//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface WCTransitionWaveAnimationEnd : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    struct CGPoint _originPoint;
}

+ (id)animationOrigin:(struct CGPoint)arg1;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

