//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ScreenshotView, UIImageView;

@interface MMMagnifiterView : UIView
{
    UIImageView *_imageView;
    ScreenshotView *_screenshotView;
    double _width;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) ScreenshotView *screenshotView; // @synthesize screenshotView=_screenshotView;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTouchPoint:(struct CGPoint)arg1;
- (void)setViewToMagnify:(id)arg1;
@property(nonatomic) double width; // @synthesize width=_width;

@end
