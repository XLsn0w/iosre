//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface MinimizeIconAndStateView : UIView
{
    NSArray *_icons;
    UIView *_colorMaskView;
}

+ (id)genLoopAnimateStateIcons:(id)arg1 WithGrayBackground:(_Bool)arg2 isMiniVersion:(_Bool)arg3;
+ (id)getIconMaskPath:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *colorMaskView; // @synthesize colorMaskView=_colorMaskView;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (void)makeSureColorMaskViewInited;
- (void)resetToShowFirstIcon;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIconBorderColor:(id)arg1 CornerRadius:(double)arg2;
- (void)setMaskColor:(id)arg1;
- (void)setMaskColorAlpha:(double)arg1;
- (void)setRoundViewMaskPath:(double)arg1 RoundView:(id)arg2;
- (void)startSwitchingAnimation;
- (void)updateLoopIconList:(id)arg1;

@end

