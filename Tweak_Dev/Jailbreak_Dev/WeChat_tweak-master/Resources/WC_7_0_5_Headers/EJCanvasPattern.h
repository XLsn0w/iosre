//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EJFillable.h"

@class EJTexture;

@interface EJCanvasPattern : NSObject <EJFillable>
{
    EJTexture *texture;
    int repeat;
}

- (void)dealloc;
- (id)initWithTexture:(id)arg1 repeat:(int)arg2;
@property(readonly, nonatomic) int repeat; // @synthesize repeat;
@property(readonly, nonatomic) EJTexture *texture; // @synthesize texture;

@end

