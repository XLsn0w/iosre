//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol FICEntity <NSObject>
- (void (^)(struct CGContext *, struct CGSize))drawingBlockForImage:(UIImage *)arg1;
@property(nonatomic) unsigned int eliminationFactor;
@property(readonly, nonatomic) NSString *entityUUID;
@property(readonly, nonatomic) NSString *formatName;
@property(readonly, nonatomic) UIImage *sourceImage;
@property(readonly, nonatomic) NSString *sourceImageUUID;
@end

