//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMTimer, MMUILabel, UIButton, WXVideoSlider;

@interface VideoProgressBar : UIView
{
    _Bool _isPlaying;
    _Bool _isMinimized;
    _Bool _isSliderScrubbing;
    id <VideoProgressBarDelegate> _m_delegate;
    UIView *_blurView;
    UIView *_containerView;
    UIButton *_operateButton;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    WXVideoSlider *_videoSlider;
    MMTimer *_progressUpdateTimer;
    double _totalTime;
    unsigned long long _updateTimerCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
- (void)initSubviews;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
- (void)layoutSubviews;
@property(nonatomic) __weak id <VideoProgressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickAtBackgroud;
- (void)onFocused:(_Bool)arg1;
- (void)onPlayButtonClick;
- (void)onPlayStart;
- (void)onPlayStop;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)onSliderScrubbEnd;
- (void)onStopButtonClick;
@property(retain, nonatomic) UIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) MMTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(nonatomic) unsigned long long updateTimerCount; // @synthesize updateTimerCount=_updateTimerCount;
@property(retain, nonatomic) WXVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)updateProgress;
- (void)updateTotalTime:(double)arg1;

@end

