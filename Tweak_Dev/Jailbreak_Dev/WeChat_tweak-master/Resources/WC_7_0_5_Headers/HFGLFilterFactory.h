//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HFGLFilterFactory : NSObject
{
}

+ (id)colorHSV2RGBFilter;
+ (id)colorLAB2RGBFilter;
+ (id)colorRGB2HSVFilter;
+ (id)colorRGB2LABFilter;
+ (id)colorRGB2YCBCRFilter;
+ (id)colorRGB2YUVFilter;
+ (id)colorYCBCR2RGBFilter;
+ (id)colorYUV2RGBFilter;
+ (id)createColorPencilFilter;
+ (id)createFilter:(long long)arg1;
+ (id)createMarkFilter;
+ (id)createSketchFilter;
+ (id)gaussBlurHFilter;
+ (id)gaussBlurVFilter;
+ (id)sobelBlurFilter;

@end

