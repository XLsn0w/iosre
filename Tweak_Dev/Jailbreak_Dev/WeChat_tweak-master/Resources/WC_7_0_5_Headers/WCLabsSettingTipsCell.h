//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMUILabel;

@interface WCLabsSettingTipsCell : UIView
{
    MMUILabel *_tipsLabel;
    UIView *_leftLineView;
    UIView *_rightLineView;
    double _offsetY;
}

+ (double)heightForOffsetY:(double)arg1;
- (void).cxx_destruct;
- (void)configureWithText:(id)arg1 withOffsetY:(double)arg2;
- (void)initLineView;
- (void)initTipsLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

