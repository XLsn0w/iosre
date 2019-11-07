//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol FaceRecogProcessorDelegate <NSObject>
- (void)faceRecogDidFinishWithError;
- (void)faceRecogDidFinishWithTimeout;
- (void)faceRecogDidFinishWithTrackFail;
- (void)procedureDidGotFrameResult:(unsigned long long)arg1 failedType:(long long)arg2;

@optional
- (void)procedureDidFailedReleaseOutResultData;
- (void)procedureDidRecognizeFaceSuccess;
- (void)procedureDidRecognizeLiveSuccess:(UIImage *)arg1;
- (void)procedureDidStartUploadResultData;
@end

