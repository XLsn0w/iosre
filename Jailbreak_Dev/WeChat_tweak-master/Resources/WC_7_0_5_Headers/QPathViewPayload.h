//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface QPathViewPayload : NSObject
{
    int _displayLevel;
    float _lineWidth;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    double _radius;
    CDStruct_34734122 _originPoint;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) int displayLevel; // @synthesize displayLevel=_displayLevel;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)freeOldData;
- (id)init;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) CDStruct_c3b9c2ee originPoint; // @synthesize originPoint=_originPoint;
@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *points; // @synthesize points=_points;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)setPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;

@end
