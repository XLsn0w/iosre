//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAStreamPlayerInterface-Protocol.h"
#import "WAVideoPlayerCoreDelegate-Protocol.h"

@class AVPlayerItemVideoOutput, MMProgressViewEx, MMUIButton, MMUILabel, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, WAScreenBrightnessStateView, WAVideoLayer, WAVideoPlayerCore, WCNetworkMediaSlider;
@protocol MMVideoPlayerViewDelegate;

@interface WAStreamPlayerView : UIView <WAVideoPlayerCoreDelegate, UIGestureRecognizerDelegate, WAStreamPlayerInterface>
{
    _Bool _disableScroll;
    unsigned int _controlsMask;
    UIColor *_scrollBgColor;
    UIColor *_webViewBgColor;
    _Bool _lockSlider;
    _Bool _touchesProgressMoved;
    _Bool _useCustomDuration;
    _Bool _customThumb;
    _Bool _live;
    unsigned int _pauseTemp;
    unsigned long long _currentTimeLen;
    long long _panDirection;
    _Bool _adjustVolume;
    WAScreenBrightnessStateView *_bvstatusView;
    double _totalDuration;
    _Bool _disableEvent;
    NSString *_path;
    _Bool _customCache;
    _Bool _showDanmu;
    _Bool _autoPlay;
    _Bool _needUpdateEvent;
    _Bool _enablePageGesture;
    _Bool _loop;
    unsigned int _videoId;
    long long _orientation;
    id <MMVideoPlayerViewDelegate> _videoDelagate;
    NSString *_userData;
    WAVideoPlayerCore *_mediaCore;
    UIView *_bottomView;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_progressSlider;
    MMUILabel *_durationLabel;
    MMUIButton *_playBtn;
    MMUIButton *_fullBtn;
    UIButton *_danmuBtn;
    MMProgressViewEx *_loadingView;
    UIView *_coverView;
    UILabel *_coverTime;
    MMUILabel *_centerTime;
    UIImageView *_thumbImage;
    MMUIButton *_coverButton;
    MMUILabel *_liveLabel;
    WAVideoLayer *_danmuLayer;
    NSString *_videoGravity;
    UIImage *_snapImage;
    AVPlayerItemVideoOutput *_snapshotOutput;
    struct CGSize _videoSize;
    struct CGRect _rect;
}

@property(retain, nonatomic) AVPlayerItemVideoOutput *snapshotOutput; // @synthesize snapshotOutput=_snapshotOutput;
@property(retain, nonatomic) UIImage *snapImage; // @synthesize snapImage=_snapImage;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(retain, nonatomic) WAVideoLayer *danmuLayer; // @synthesize danmuLayer=_danmuLayer;
@property(retain, nonatomic) MMUILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) MMUIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) UIImageView *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) MMUILabel *centerTime; // @synthesize centerTime=_centerTime;
@property(retain, nonatomic) UILabel *coverTime; // @synthesize coverTime=_coverTime;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *danmuBtn; // @synthesize danmuBtn=_danmuBtn;
@property(retain, nonatomic) MMUIButton *fullBtn; // @synthesize fullBtn=_fullBtn;
@property(retain, nonatomic) MMUIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) WCNetworkMediaSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) WAVideoPlayerCore *mediaCore; // @synthesize mediaCore=_mediaCore;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool enablePageGesture; // @synthesize enablePageGesture=_enablePageGesture;
@property(nonatomic) _Bool needUpdateEvent; // @synthesize needUpdateEvent=_needUpdateEvent;
@property(copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool showDanmu; // @synthesize showDanmu=_showDanmu;
@property(nonatomic) _Bool customCache; // @synthesize customCache=_customCache;
@property(nonatomic) unsigned int videoId; // @synthesize videoId=_videoId;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> videoDelagate; // @synthesize videoDelagate=_videoDelagate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (_Bool)isForground;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (long long)pauseCount;
- (void)pauseTemp:(_Bool)arg1;
- (void)pausePlayAndLoading;
- (void)routeChange:(id)arg1;
- (id)drawInRectAspectFill:(id)arg1;
- (id)getCurrentSnapshot;
- (void)setObjectFit:(long long)arg1;
- (void)setDanmuList:(id)arg1;
- (void)sendDanmu:(id)arg1 color:(id)arg2;
- (void)createFloatLayer;
- (unsigned int)getControlsMask;
- (void)setControls:(unsigned int)arg1;
- (void)resetSliderLock;
- (void)hideBrightnessStatusView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)disableScroll:(_Bool)arg1;
- (void)setCurrentTitle:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)resizeThumbImage;
- (void)onDanmuClick;
- (void)onFullClick;
- (void)disableFull;
- (void)enableFull;
- (void)enableFullScreen:(_Bool)arg1;
- (long long)fullscreenOrientation;
- (void)onCurrentTimeUpdate:(double)arg1;
- (void)onTotalTimeUpdate:(double)arg1;
- (void)onCacheUpdate:(double)arg1;
- (void)onLoadingEnd;
- (void)onLoadingBegin;
- (void)retryToLoadVideo;
- (void)onVideoPlayEnd;
- (void)onNetWorkError:(long long)arg1 errorMsg:(id)arg2;
- (void)onStateChange:(long long)arg1;
- (void)pause;
- (void)seek:(unsigned int)arg1;
- (void)stop;
- (void)play:(_Bool)arg1;
- (void)onLargePlay;
- (void)onPlayClick;
- (void)onSliderChange;
- (void)onSliderTouchUp;
- (void)onSliderTouchDown;
- (void)hideControlViews;
- (void)showControlViews;
- (void)catchTap:(id)arg1;
- (_Bool)isPlaying;
- (id)timeFormat:(int)arg1;
- (void)updateSubviews:(struct CGSize)arg1;
- (void)layoutControlView:(struct CGSize)arg1;
- (void)horizontalMoveEnd;
- (void)horizontalMoved:(double)arg1;
- (void)verticalMoved:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panGestureControl:(id)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (_Bool)isFullScreen;
- (void)updateThumbImage;
- (void)updateLiveSize;
- (void)initMediaCore:(id)arg1 initialTime:(unsigned int)arg2;
- (void)setVideoPath:(id)arg1 initialTime:(unsigned int)arg2;
- (void)setVideoThumbImage:(id)arg1;
- (void)setVideoThumb:(id)arg1;
- (void)dealloc;
- (id)initWithThumb:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

