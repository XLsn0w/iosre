//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<SightPreviewView>;

@protocol SightCaptureLogic <NSObject>
- (long long)cameraPosition;
- (void)cancelAllRecorder;
- (void)cancelRecord:(unsigned int)arg1;
- (void)capturePreviewImage:(UIView<SightPreviewView> *)arg1 withBlock:(void (^)(UIImage *))arg2;
- (long long)flashMode;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (UIView<SightPreviewView> *)genPreviewView:(struct CGRect)arg1;
- (_Bool)isCameraOn;
- (_Bool)isLightBoostOn;
- (_Bool)isSupportSwitchCamera;
- (_Bool)isSupportZoom;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (_Bool)isUsingHighExposureISO;
- (double)maxZoomFactor;
- (void)onPictureRetake;
- (_Bool)pauseCamera;
- (void)pauseCameraImmediately;
- (unsigned int)prepareHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2;
- (unsigned int)prepareRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3;
- (void)realStartRecord;
- (void)resetExposureISO;
- (void)setDelegate:(id <SightCaptureDelegate>)arg1;
- (void)setFlashlightMode:(long long)arg1;
- (void)setTorchMode:(long long)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomState:(int)arg1;
- (void)startCameraWithAudio:(_Bool)arg1;
- (void)startDeviceAudio;
- (unsigned int)startHighQualityRecord:(struct CGSize)arg1 maxVideoDuration:(float)arg2 orientation:(long long)arg3 compressAudio:(_Bool)arg4 audioBitrate:(float)arg5;
- (void)startQRCodeWatcher;
- (unsigned int)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 maxVideoDuration:(float)arg3 orientation:(long long)arg4 compressAudio:(_Bool)arg5 audioBitrate:(float)arg6;
- (void)stopCameraCapture;
- (void)stopQRCodeWatcher;
- (void)stopRecord:(unsigned int)arg1;
- (_Bool)supportFlashlightMode;
- (_Bool)supportTorchMode;
- (_Bool)switchCamera;
- (void)takePicturWithCompletion:(void (^)(UIImage *, NSData *))arg1;
- (long long)torchMode;
- (void)turnOffLightBoost;
- (void)turnOnExposureHighISO;
- (void)turnOnLightBoost;
- (void)unregistPreviewView:(id <SightPreviewView>)arg1;
- (double)zoomFactor;
- (int)zoomState;
@end

