//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IVOIPWindowExt.h"
#import "WCPlayerProtocol.h"

@class NSString, UIImageView, UIView<WCPlayerControlProtocol>, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerReporter;

@interface WCPlayerView : UIView <WCPlayerProtocol, IVOIPWindowExt>
{
    _Bool _bFirstReadyToPlay;
    float _lastPlayBackRate;
    WCPlayerReporter *_reporter;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    UIImageView *_thumbImageView;
    UIView<WCPlayerControlProtocol> *_controlView;
    CDUnknownBlockType _observePlayCallbackBlock;
}

+ (id)generatePlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 ControlView:(id)arg3;
- (void).cxx_destruct;
- (void)addNotification;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)attachVideoModel:(id)arg1;
@property(nonatomic) _Bool bFirstReadyToPlay; // @synthesize bFirstReadyToPlay=_bFirstReadyToPlay;
- (void)changeToDownloadFirstWithDownloadMode:(unsigned long long)arg1;
- (void)configWithPlayerInfo:(id)arg1 ControlView:(id)arg2;
@property(nonatomic) __weak UIView<WCPlayerControlProtocol> *controlView; // @synthesize controlView=_controlView;
- (void)dealloc;
- (id)generateReporterWithPlayerScene:(unsigned long long)arg1;
- (id)initPlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 ControlView:(id)arg3;
@property(nonatomic) float lastPlayBackRate; // @synthesize lastPlayBackRate=_lastPlayBackRate;
- (void)layoutSubviews;
@property(copy, nonatomic) CDUnknownBlockType observePlayCallbackBlock; // @synthesize observePlayCallbackBlock=_observePlayCallbackBlock;
- (void)onVoipWindowDidAppear;
- (void)onVoipWindowDisappear;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setThumbImage:(id)arg1;
- (void)setThumbImageHidden:(_Bool)arg1;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
- (void)setThumbImageViewContentWithWCPlayerContentMode:(long long)arg1;
- (_Bool)shouldUpdatePlayArgs;
- (id)videoModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

