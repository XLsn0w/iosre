//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCModule.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "TXCCapturer.h"

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CIDetector, NSObject<OS_dispatch_queue>, NSString;

@interface TXCCameraCapturer : TXCModule <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, TXCCapturer>
{
    unsigned long long _lastCalculateTS;
    unsigned long long _lastCaptureFrameCount;
    unsigned long long _captureFrameCount;
    _Bool _front;
    double _presetWidth;
    double _presetHeight;
    long long _resolution;
    unsigned long long _lastDetectedTimeStame;
    _Bool _supportsFaceDetection;
    _Bool _faceDetect;
    _Bool _mirror;
    int _frameRate;
    int _outputRotation;
    int _streamType;
    id <TXICameraCapturerDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    double _zoomScale;
    long long _homeOrientation;
    long long _rotation;
    long long _renderMirrorMode;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureConnection *_videoConnection;
    CIDetector *_faceDetector;
    NSObject<OS_dispatch_queue> *_cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *_faceDetectQueue;
    long long _position;
    AVCaptureVideoPreviewLayer *_prevLayer;
    AVCaptureMetadataOutput *_metaOutput;
    struct CGSize _videoSize;
}

+ (_Bool)isBackFacingCameraPresent;
+ (_Bool)isFrontFacingCameraPresent;
+ (_Bool)requestForAccess;
+ (void)requestForAccess:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraProcessingQueue; // @synthesize cameraProcessingQueue=_cameraProcessingQueue;
- (id)cameraWithPosition:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(retain) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void)dealloc;
@property(nonatomic) __weak id <TXICameraCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGPoint)devicePointForPoint:(struct CGPoint)arg1;
@property(nonatomic) _Bool faceDetect; // @synthesize faceDetect=_faceDetect;
@property(retain) NSObject<OS_dispatch_queue> *faceDetectQueue; // @synthesize faceDetectQueue=_faceDetectQueue;
@property(retain) CIDetector *faceDetector; // @synthesize faceDetector=_faceDetector;
- (_Bool)flashEnable;
@property int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) _Bool front;
- (id)genVFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleCaptureSessionInterruptionEnded:(id)arg1;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
- (id)init;
- (void)initCameraCapture;
@property(retain) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(readonly, getter=isBackFacingCameraPresent) _Bool backFacingCameraPresent;
- (_Bool)isCameraAutoFocusFaceModeSupported;
- (_Bool)isCameraFocusPositionInPreviewSupported;
- (_Bool)isCameraTorchSupported;
- (_Bool)isCameraZoomSupported;
@property(readonly, getter=isFrontFacingCameraPresent) _Bool frontFacingCameraPresent;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(retain) AVCaptureMetadataOutput *metaOutput; // @synthesize metaOutput=_metaOutput;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) int outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(nonatomic) long long renderMirrorMode; // @synthesize renderMirrorMode=_renderMirrorMode;
- (void)resetInterestPoint:(struct CGPoint)arg1 monitorSubjectAreaChange:(_Bool)arg2;
- (void)rotateCamera;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
- (void)runTXCAsynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runTXCSynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)sendNotifyEvent:(int)arg1;
- (_Bool)setFlashEnable:(_Bool)arg1;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (_Bool)setResolution:(long long)arg1;
- (_Bool)setSessionPreset:(id)arg1;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(retain) AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(retain) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
- (void)start;
- (void)stop;
- (_Bool)supportsVideoFrameRate:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

