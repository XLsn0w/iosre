//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FullScreenGestureDelegate.h"
#import "WCStoryVideoControlViewDelegate.h"

@class NSString, WCPlayerPlayArgs, WCPlayerView, WCStoryDataItem, WCStoryMediaItem, WCStoryPlayRecord, WCStoryPreviewReportObj, WCStoryVideoControlView, WXFullScreenGestureRecognizer;

@interface WCStoryVideoPlayerView : UIView <WCStoryVideoControlViewDelegate, FullScreenGestureDelegate>
{
    _Bool _bCanDragToClose;
    _Bool _bStartPlayed;
    WCStoryDataItem *_dataItem;
    id <WCStoryVideoPlayerViewDelegate> _delegate;
    WCStoryPreviewReportObj *_previewReportObj;
    WCStoryMediaItem *_mediaItem;
    WCPlayerPlayArgs *_playerInfo;
    WCPlayerView *_playerView;
    WCStoryPlayRecord *_playRecord;
    WCStoryVideoControlView *_controlView;
    WXFullScreenGestureRecognizer *_fullScreenGestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bCanDragToClose; // @synthesize bCanDragToClose=_bCanDragToClose;
@property(nonatomic) _Bool bStartPlayed; // @synthesize bStartPlayed=_bStartPlayed;
@property(retain, nonatomic) WCStoryVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)dealloc;
@property(nonatomic) __weak id <WCStoryVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTakeVideoSnapshot:(id)arg1;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer; // @synthesize fullScreenGestureRecognizer=_fullScreenGestureRecognizer;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1 DataItem:(id)arg2;
- (_Bool)isPlayerViewForMediaItem:(id)arg1;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onVideoPlayStarted;
- (void)pauseVideo;
@property(retain, nonatomic) WCStoryPlayRecord *playRecord; // @synthesize playRecord=_playRecord;
- (void)playVideo;
- (void)playVideoWithMute:(_Bool)arg1;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
- (void)reloadPlayerInfo;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)stopAndCleanPlayer;
- (void)stopPlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

