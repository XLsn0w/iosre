//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTLBaseItemView.h"

@class CALayer, MMMusicPlayerContoller, MMUILabel, UIView;

@interface BTLMusicItemView : BTLBaseItemView
{
    UIView *m_containView;
    MMUILabel *m_artistLabel;
    MMMusicPlayerContoller *m_playBtn;
    CALayer *m_maskLayer;
}

- (void).cxx_destruct;
- (void)layoutMusicItemNormal;
- (void)layoutMusicItemTop;
- (void)layoutSubviews;
- (void)initTitleAndArtistLabel;
- (void)initPlayBtn;
- (void)initCoverMaskLayer;
- (void)initCoverView;
- (void)initMusicItemNormal;
- (void)initMusicItemtop;
- (id)initWithViewModel:(id)arg1;

@end

