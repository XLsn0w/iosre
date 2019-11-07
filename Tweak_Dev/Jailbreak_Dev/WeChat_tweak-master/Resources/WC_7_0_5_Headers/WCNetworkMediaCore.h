//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AVAssetResourceLoaderDelegate.h"

@class AVPlayerItem, AVPlayerLayer, AVURLAsset, NSString, WXAVPlayerView;

@interface WCNetworkMediaCore : MMObject <AVAssetResourceLoaderDelegate>
{
    WCNetworkMediaCore *weakSelf;
    _Bool hasPlayed;
    _Bool m_isNeedRestartMusic;
    int m_state;
    NSString *url;
    id <WCNetworkMediaCoreDelegate> delegate;
    AVURLAsset *m_asset;
    AVPlayerItem *m_item;
    double m_duration;
    double m_cacheDuration;
    WXAVPlayerView *_playerView;
    struct CGSize m_videoSize;
}

- (void).cxx_destruct;
- (void)accurateSeekTo:(double)arg1;
- (double)cacheDuration;
- (double)currentPosition;
- (void)dealloc;
@property(nonatomic) __weak id <WCNetworkMediaCoreDelegate> delegate; // @synthesize delegate;
- (double)duration;
- (void)initPlayer;
- (id)initWithURL:(id)arg1;
- (void)internalPlay;
@property(readonly, nonatomic) AVPlayerLayer *layer;
@property(retain, nonatomic) AVURLAsset *m_asset; // @synthesize m_asset;
@property(nonatomic) double m_cacheDuration; // @synthesize m_cacheDuration;
@property double m_duration; // @synthesize m_duration;
@property(nonatomic) _Bool m_isNeedRestartMusic; // @synthesize m_isNeedRestartMusic;
@property(retain, nonatomic) AVPlayerItem *m_item; // @synthesize m_item;
@property struct CGSize m_videoSize; // @synthesize m_videoSize;
@property(nonatomic) _Bool mute;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onCacheRangeChange:(id)arg1;
- (void)onPlaybackEnd:(id)arg1;
- (void)onPlaybackFailedToEnd:(id)arg1;
- (void)onPlaybackStalled:(id)arg1;
- (void)onPlayerItemStatusChange:(long long)arg1;
- (void)onPlayerStatusChange:(long long)arg1;
- (void)pause;
- (void)play;
@property(retain, nonatomic) WXAVPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)seekTo:(double)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(readonly, nonatomic) int state; // @synthesize state=m_state;
- (void)updateState:(int)arg1;
- (struct CGSize)videoSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

