//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFUIImage, UIImage;

@interface HFAlgorithmHandle : NSObject
{
    HFUIImage *inputImage;
    HFUIImage *resultImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (void)process;
- (id)resultImage;

@end

