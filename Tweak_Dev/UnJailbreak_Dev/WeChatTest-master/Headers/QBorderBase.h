//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBorderBase : NSObject
{
    struct CGPath *_borderPath;
    struct CGRect _borderMBR;
    struct CGPoint *_points;
    int _nPoints;
}

- (struct CGPath *)constructBorderPath:(id)arg1;
- (struct CGPath *)constructPathWithString:(id)arg1 unitSeparator:(id)arg2 itemSeparator:(id)arg3;
- (void)updateBorder:(id)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1 andRect:(CDStruct_02837cd9)arg2;
- (void)dealloc;
- (id)init;

@end

