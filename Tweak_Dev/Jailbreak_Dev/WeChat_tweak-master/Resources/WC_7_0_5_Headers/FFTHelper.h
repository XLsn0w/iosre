//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFTHelper : NSObject
{
}

+ (float *)performFFT:(id)arg1 avgLevel:(float *)arg2 peakLevel:(float *)arg3;
+ (float *)performFFTWithAudioBufferList:(struct AudioBufferList *)arg1;
+ (float *)performFFTWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 avgLevel:(float *)arg2 peakLevel:(float *)arg3 dataLength:(int *)arg4;
+ (float *)smoothFFT:(float *)arg1 lastTwoFFT:(float *)arg2;

@end

