//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface EJPath : NSObject <NSCopying>
{
    CDStruct_6e3f967a currentPos;
    CDStruct_6e3f967a lastPushed;
    CDStruct_6e3f967a minPos;
    CDStruct_6e3f967a maxPos;
    int fillRule;
    unsigned int longestSubpath;
    float distanceTolerance;
    struct CGAffineTransform transform;
    struct {
        struct vector<EJVector2, std::__1::allocator<EJVector2>> points;
        _Bool isClosed;
    } currentPath;
    struct vector<subpath_t, std::__1::allocator<subpath_t>> paths;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)arcX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(_Bool)arg6;
- (void)bezierCurveToCpx1:(float)arg1 cpy1:(float)arg2 cpx2:(float)arg3 cpy2:(float)arg4 x:(float)arg5 y:(float)arg6 scale:(float)arg7;
- (void)close;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawArcToContext:(id)arg1 atPoint:(CDStruct_b2fbf00d)arg2 v1:(CDStruct_b2fbf00d)arg3 v2:(CDStruct_b2fbf00d)arg4 color:(CDUnion_a0760c36)arg5;
- (void)drawLinesToContext:(id)arg1;
- (void)drawPolygonsToContext:(id)arg1 fillRule:(int)arg2 target:(int)arg3;
- (void)endSubPath;
@property(readonly) int fillRule; // @synthesize fillRule;
- (id)init;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)push:(CDStruct_b2fbf00d)arg1;
- (void)quadraticCurveToCpx:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4 scale:(float)arg5;
- (void)recursiveBezierX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 x4:(float)arg7 y4:(float)arg8 level:(int)arg9;
- (void)recursiveQuadraticX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 level:(int)arg7;
- (void)reset;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform;

@end

