//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"

@class NSArray;

@interface WCCanvasFrameLayoutInfo : MMObject <NSCoding>
{
    unsigned int _cornerRadius;
    NSArray *_layoutItems;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *layoutItems; // @synthesize layoutItems=_layoutItems;

@end
