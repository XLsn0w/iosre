//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface HFUIImage : NSObject
{
    struct _Image *internImage;
}

+ (id)image;
+ (id)imageWithImage:(struct _Image *)arg1;
+ (id)imageWithUIImage:(id)arg1;
@property(retain, nonatomic) UIImage *UIImage;
- (id)copy;
- (void)dealloc;
@property(nonatomic) struct _Image *image;
- (id)init;
- (id)initWithImage:(struct _Image *)arg1;
- (id)initWithUIImage:(id)arg1;

@end

