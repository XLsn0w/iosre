//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WSStreamPlayerView, WSVideoModel;

@protocol WSVideoPlayerViewDelegate <NSObject>

@optional
- (void)onDelayToHideControlViews;
- (void)onShowControlViews;
- (void)onMaskPlayButtonClick:(WSVideoModel *)arg1;
- (_Bool)hasPlayAnyVideo;
- (_Bool)isInteractiveVideo;
- (WSVideoModel *)onPlayNextVideo:(_Bool)arg1 currentVideo:(WSVideoModel *)arg2;
- (_Bool)canPlayNextVideo;
- (void)onOperateShare:(WSVideoModel *)arg1;
- (void)onDelayPlayVideo;
- (_Bool)onVideoPlayEnd;
- (void)onVoiceButtonClick:(unsigned int)arg1 isMutedAfterClicked:(_Bool)arg2;
- (_Bool)isForground;
- (void)enableWebViewScroll:(_Bool)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(WSStreamPlayerView *)arg3;
- (void)onVideoEvent:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)onVideoStateChange:(long long)arg1;
- (void)onVolumeChange:(double)arg1;
@end

