//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSTouchMotionEventTracker.h"

@class NSString, TSMotionTracker, TSTouchTrackRecognizer, UIView;

@interface TSTouchMotionTracker : NSObject <TSTouchMotionEventTracker>
{
    _Bool _didBeingOnTouch;
    double _maximumMotionDuration;
    double _minimiusMotionDuration;
    UIView *_attachedView;
    TSTouchTrackRecognizer *_trackRecognizer;
    TSMotionTracker *_motionTracker;
    CDUnknownBlockType _eventHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView=_attachedView;
- (void)controlOnTouchDown:(id)arg1 withEvent:(id)arg2;
- (void)controlOnTouchUp:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
@property _Bool didBeingOnTouch; // @synthesize didBeingOnTouch=_didBeingOnTouch;
@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (id)initWithInterval:(double)arg1 view:(id)arg2 trackEventHandler:(CDUnknownBlockType)arg3;
@property double maximumMotionDuration; // @synthesize maximumMotionDuration=_maximumMotionDuration;
@property double minimiusMotionDuration; // @synthesize minimiusMotionDuration=_minimiusMotionDuration;
@property(retain, nonatomic) TSMotionTracker *motionTracker; // @synthesize motionTracker=_motionTracker;
@property(retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer; // @synthesize trackRecognizer=_trackRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

