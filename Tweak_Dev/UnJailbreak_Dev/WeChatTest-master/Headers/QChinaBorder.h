//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBorderBase.h"

@interface QChinaBorder : QBorderBase
{
    struct CGPath *_mainlandPath;
}

- (void)dealloc;
- (id)init;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1 andRect:(CDStruct_02837cd9)arg2;
- (_Bool)chinaContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)internalContainsCoordinate:(struct CLLocationCoordinate2D)arg1 in:(struct CGPath *)arg2;
- (_Bool)shouldCorrectCoordinateToGCJ02:(struct CLLocationCoordinate2D)arg1;
- (struct CGPath *)mainlandPath;

@end

