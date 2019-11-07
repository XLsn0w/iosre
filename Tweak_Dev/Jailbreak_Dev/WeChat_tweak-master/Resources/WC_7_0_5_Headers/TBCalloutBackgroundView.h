//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer;

@interface TBCalloutBackgroundView : UIView
{
    _Bool _highlighted;
    CALayer *_contentMask;
    double _anchorHeight;
    double _anchorMargin;
    struct CGPoint _arrowPoint;
}

+ (id)CalloutArrow;
+ (id)CalloutArrow_2x;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)embeddedImageNamed:(id)arg1;
@property(nonatomic) double anchorHeight; // @synthesize anchorHeight=_anchorHeight;
@property(nonatomic) double anchorMargin; // @synthesize anchorMargin=_anchorMargin;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;
@property(nonatomic) CALayer *contentMask; // @synthesize contentMask=_contentMask;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;

@end

