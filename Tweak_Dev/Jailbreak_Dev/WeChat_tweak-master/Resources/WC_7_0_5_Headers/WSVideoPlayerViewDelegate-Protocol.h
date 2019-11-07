//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CdnDownloadTaskInfo, NSDictionary, NSString, UIButton, WSStreamPlayerView, WSVideoModel;

@protocol WSVideoPlayerViewDelegate <NSObject>

@optional
- (_Bool)canPlayNextVideo:(WSVideoModel *)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(WSStreamPlayerView *)arg3;
- (void)enableWebViewScroll:(_Bool)arg1;
- (_Bool)hasPlayAnyVideo;
- (_Bool)isForground;
- (_Bool)isInteractiveVideo;
- (_Bool)isWSVideoPlayAsFirstVideo:(NSString *)arg1;
- (void)onCdnVideoDownLoadFinishForVideoModel:(WSVideoModel *)arg1 retCode:(int)arg2 cdnTaskInfo:(CdnDownloadTaskInfo *)arg3;
- (void)onClickGoodLookButton:(UIButton *)arg1 inView:(id)arg2 withVideoModel:(WSVideoModel *)arg3;
- (void)onDelayPlayVideo;
- (void)onDelayToHideControlViews;
- (void)onMaskPlayButtonClick:(WSVideoModel *)arg1;
- (void)onOperateShare:(WSVideoModel *)arg1;
- (WSVideoModel *)onPlayNextVideo:(_Bool)arg1 currentVideo:(WSVideoModel *)arg2;
- (void)onPlayerMuteChanged:(_Bool)arg1;
- (void)onPlayerViewClickLike:(_Bool)arg1 video:(WSVideoModel *)arg2;
- (void)onPlayerViewClickTitle:(WSVideoModel *)arg1;
- (void)onPlayerViewMuteChanged:(_Bool)arg1;
- (_Bool)onPlayerViewUpdateVideoUrl:(NSString *)arg1;
- (void)onRecommendInsertVideo:(NSString *)arg1;
- (void)onRecordNetPauseAndPlay;
- (void)onShowControlViews;
- (void)onVideoEvent:(NSString *)arg1 param:(NSDictionary *)arg2;
- (_Bool)onVideoHasRecommend:(NSString *)arg1;
- (_Bool)onVideoPlayEnd;
- (void)onVideoStateChange:(long long)arg1;
- (void)onVoiceButtonClick:(unsigned int)arg1 isMutedAfterClicked:(_Bool)arg2;
- (void)onVolumeChange:(double)arg1;
@end

