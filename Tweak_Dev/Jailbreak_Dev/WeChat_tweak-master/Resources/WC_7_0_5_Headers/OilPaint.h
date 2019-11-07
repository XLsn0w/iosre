//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPUImageFilter.h"

@class UIImage;

@interface OilPaint : CPUImageFilter
{
    int m_blur;
    int m_smooth;
    int m_flag;
    float m_mix;
    int step;
    UIImage *reslut;
}

- (void).cxx_destruct;
- (id)FilterProcess;
- (char *)FilterProcessPixels:(id)arg1;
- (void)addWithTexture:(struct _Image *)arg1 andFlag:(_Bool)arg2;
- (id)initWithBlur:(int)arg1 andSmooth:(int)arg2 andFlag:(int)arg3;
- (id)main;
- (char *)processOneSlicePixels:(id)arg1;
- (void)setProperty:(id)arg1 value:(id)arg2;

@end

