//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CALayer, CAShapeLayer;

@interface EditImageCropOverlayView : MMUIView
{
    CALayer *_blackLayer;
    CAShapeLayer *_shapeLayer;
    unsigned long long _overlayLevel;
    struct CGRect _brightFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect _brightFrame; // @synthesize _brightFrame;
@property(nonatomic) unsigned long long _overlayLevel; // @synthesize _overlayLevel;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

