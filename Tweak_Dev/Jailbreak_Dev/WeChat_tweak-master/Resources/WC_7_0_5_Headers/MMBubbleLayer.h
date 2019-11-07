//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMBubbleLayer : NSObject
{
    int _arrowDirection;
    double _cornerRadius;
    double _arrowHeight;
    double _arrowWidth;
    double _arrowPosition;
    struct CGSize _size;
}

@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
- (id)arrowPoints;
@property(nonatomic) double arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
- (id)bubblePath;
- (id)centerOfCorner;
- (struct CGRect)contentFrame;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)init;
- (id)keyPointAtcorner;
- (id)layerForSize:(struct CGSize)arg1;
- (void)setArrowPositionAtPos:(double)arg1 baseLen:(double)arg2;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@end

