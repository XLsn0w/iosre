//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMMusicInfo, MMMusicPlayerErrInfo, NSString, UIImage;

@protocol IMusicPlayerExt <NSObject>

@optional
- (void)OnGetSongAlbumUrl:(MMMusicInfo *)arg1 AlbumUrl:(NSString *)arg2;
- (void)OnUpdateDuarationOnForeGround;
- (void)onAlbumImageChanged:(MMMusicInfo *)arg1 AlbumImage:(UIImage *)arg2;
- (void)onDataBuffering:(double)arg1;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onLyricsChanged:(MMMusicInfo *)arg1 Lyrics:(NSString *)arg2;
- (void)onMusicInfoUpdated;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(MMMusicInfo *)arg2 errInfo:(MMMusicPlayerErrInfo *)arg3;
- (void)onMusicPlayStatusChanged;
- (void)onPlayMusic:(MMMusicInfo *)arg1 fromScene:(int)arg2;
- (void)onPlayNextMusic;
- (void)onPlayPreviousMusic;
- (void)onStopMusicListPlay;
- (void)prepareForMusicPlay:(MMMusicInfo *)arg1;
@end

