//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SightPlayerView;

@protocol SightPlayerViewDelegate <NSObject>

@optional
- (void)onItemCleared;
- (_Bool)onPlayEnd:(_Bool)arg1;
- (void)onResumeSightPlayerView:(SightPlayerView *)arg1;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onStack;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)setThumbImageViewHidden:(_Bool)arg1;
- (_Bool)shouldVideoLayerRasterize;
@end

