//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIVisualEffectView;

@interface MinimizeGesBlurCircleView : UIView
{
    UIVisualEffectView *_blurView;
    UIView *_blurMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

