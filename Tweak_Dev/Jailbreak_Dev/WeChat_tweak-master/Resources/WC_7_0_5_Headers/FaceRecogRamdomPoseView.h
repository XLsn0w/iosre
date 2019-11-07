//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogBaseView.h"

@class AnimationStatusView, FaceRecogLoadingView, FaceRecogRoundView, MMUILabel, NSMutableArray, NSString, UIButton;

@interface FaceRecogRamdomPoseView : FaceRecogBaseView
{
    FaceRecogLoadingView *_prepareLoadingView;
    UIButton *_otherButton;
    AnimationStatusView *_waitView;
    UIButton *_cancelButton;
    UIButton *_closeButton;
    UIButton *_retryButton;
    FaceRecogRoundView *_faceRectView;
    MMUILabel *_bigTipFaceTitle;
    _Bool _finished;
    _Bool _animating;
    NSString *_curModeTip;
    NSString *_curErrorTip;
    NSMutableArray *m_steps;
    NSString *_loadingTip;
    NSString *_okTip;
    NSString *_bizBtnTitle;
}

- (void).cxx_destruct;
- (void)attachPreviewLayer:(id)arg1;
@property(retain, nonatomic) NSString *bizBtnTitle; // @synthesize bizBtnTitle=_bizBtnTitle;
- (void)cancelButtonDone;
- (void)closeButtonDone;
- (id)init;
- (void)initBitTipTitle:(id)arg1;
- (void)initCancelBtn;
- (void)initCloseBtn:(id)arg1;
- (void)initFaceRectView;
- (void)initPrepareView;
- (void)initView;
@property(retain, nonatomic) NSString *loadingTip; // @synthesize loadingTip=_loadingTip;
@property(retain, nonatomic) NSString *okTip; // @synthesize okTip=_okTip;
- (void)otherButtonDone;
- (void)procedureDidDoneLoading:(id)arg1;
- (void)procedureDidFailed:(id)arg1 canRetry:(_Bool)arg2;
- (void)procedureDidFinish;
- (void)procedureDidGotFrameResult:(id)arg1 currentMotionType:(unsigned long long)arg2 failedType:(long long)arg3;
- (void)procedureDidStartDetectFace;
- (void)procedureDidStartPoseMode:(int)arg1 modeTip:(id)arg2;
- (void)resetViews;
- (void)retryButtonDone;
- (void)showDoneLoading;
- (void)showFail;
- (void)showFinish;

// Remaining properties
@property(nonatomic) __weak id <FaceRecogRamdomPoseViewDelegate> delegate; // @dynamic delegate;

@end

