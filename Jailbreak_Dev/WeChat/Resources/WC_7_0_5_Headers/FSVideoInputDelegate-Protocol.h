//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FSVideoFrameBuffer, FSVideoInput;

@protocol FSVideoInputDelegate <NSObject>

@optional
- (void)videoInput:(FSVideoInput *)arg1 didOutputSampleBuffer:(FSVideoFrameBuffer *)arg2;
- (void)videoInputDidFail:(FSVideoInput *)arg1;
- (void)videoInputDidFinishReading:(FSVideoInput *)arg1;
@end
