//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIColor;

@interface WAMapCalloutView : UIView
{
    UIButton *_btn;
    UIButton *_btnBig;
    UIColor *_bgColor;
    double _radius;
    double _borderWidth;
    UIColor *_borderColor;
    double _margin;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowOffsetX;
    double _shadowOffsetY;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) UIButton *btnBig; // @synthesize btnBig=_btnBig;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)getDarwPath:(struct CGContext *)arg1;
- (id)initWithParam:(id)arg1;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) double shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;

@end

