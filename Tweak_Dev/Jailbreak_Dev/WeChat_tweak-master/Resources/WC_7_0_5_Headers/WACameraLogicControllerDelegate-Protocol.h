//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIImage;

@protocol WACameraLogicControllerDelegate <NSObject>

@optional
- (void)onCameraFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)onCameraInitDone;
- (void)onCameraNeedAuthCancel;
- (void)onCameraPictureTaken:(UIImage *)arg1 withFrontCamera:(_Bool)arg2;
- (void)onCameraScanCode:(NSDictionary *)arg1;
- (void)onCameraStartRecord;
- (void)onCameraStop;
- (void)onCameraStopRecord;
- (void)onCameraVideoRecordingWithFrameImg:(UIImage *)arg1;
- (void)onCameraVideoTakenFail;
- (void)onCameraVideoTakenSuccess:(NSString *)arg1 thumbImg:(UIImage *)arg2 isMuted:(_Bool)arg3;
@end

