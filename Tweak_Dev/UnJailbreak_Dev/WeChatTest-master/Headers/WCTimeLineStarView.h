//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WCTimeLineStarView : UIView
{
    _Bool _isHalfStar;
    UIColor *_defaultColor;
    UIColor *_fillColor;
}

@property(nonatomic) _Bool isHalfStar; // @synthesize isHalfStar=_isHalfStar;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

