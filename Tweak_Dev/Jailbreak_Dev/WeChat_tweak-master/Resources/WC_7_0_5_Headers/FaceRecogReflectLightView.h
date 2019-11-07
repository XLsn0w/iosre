//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogBaseView.h"

@class CADisplayLink, CAShapeLayer, FaceRecogPrepareView, FaceRecogRoundView, MMUILabel, NSString, UIImageView, UIView;

@interface FaceRecogReflectLightView : FaceRecogBaseView
{
    FaceRecogPrepareView *_prepareView;
    UIView *_reflectView;
    UIImageView *_lightCircleView;
    UIImageView *_colorCircleView;
    CAShapeLayer *_shapeLayer;
    CADisplayLink *_displayLink;
    double _curArc;
    FaceRecogRoundView *_faceRectView;
    MMUILabel *_bigTipFaceTitle;
    MMUILabel *_businessTitle;
    UIImageView *_bigTipBg;
    _Bool _finished;
    _Bool _animating;
    NSString *_curErrorTip;
    NSString *_curMotionTip;
    NSString *_businessTip;
}

- (void).cxx_destruct;
- (void)attachPreviewLayer:(id)arg1;
@property(retain, nonatomic) NSString *businessTip; // @synthesize businessTip=_businessTip;
- (void)cancelButtonDone;
- (void)closeButtonDone;
- (void)dealloc;
- (id)init;
- (void)initBitTipTitle:(id)arg1;
- (void)initCancelBtn;
- (void)initFaceRectView;
- (void)initView;
- (void)onFeedback;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)procedureDidDoneLoading:(id)arg1;
- (void)procedureDidFailed:(id)arg1 canRetry:(_Bool)arg2;
- (void)procedureDidFinish;
- (void)procedureDidGotFrameResult:(id)arg1 currentMotionType:(unsigned long long)arg2 failedType:(long long)arg3;
- (void)procedureDidStartDetectFace;
- (void)procedureDidStartHightLight;
- (void)procedureDidStartReflectLight;
- (void)procedurePreStartReflectLight;
- (void)resetColor;
- (void)resetViews;
- (void)retryButtonDone;
- (void)setColor:(unsigned int)arg1;
- (_Bool)shouldAutorotate;
- (void)showFinish;
- (void)startColorCircleAnimation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateColorCircle;
- (void)viewDidAppear;

// Remaining properties
@property(nonatomic) __weak id <FaceRecogReflectLightViewDelegate> delegate; // @dynamic delegate;

@end

