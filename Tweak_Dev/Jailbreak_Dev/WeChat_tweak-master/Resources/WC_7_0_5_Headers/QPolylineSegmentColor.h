//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface QPolylineSegmentColor : NSObject
{
    int _startIndex;
    int _endIndex;
    UIColor *_color;
    UIColor *_borderColor;
    unsigned long long _indexOfColorPair;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) unsigned long long indexOfColorPair; // @synthesize indexOfColorPair=_indexOfColorPair;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;

@end

