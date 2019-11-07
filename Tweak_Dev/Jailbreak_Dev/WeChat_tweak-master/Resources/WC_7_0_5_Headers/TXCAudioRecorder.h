//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXIAudioRecordDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TXCAudioRecorder : NSObject <TXIAudioRecordDelegate>
{
    struct TXCAudioEncoder *_audioCodec;
    struct TXCAudioSpeeder *_audioSpeeder;
    struct TXCResampleMixer _resampler;
    struct TXCStatusModule _statusModule;
    struct TXCVolumeLevelS16 _volumeLevelCal;
    int _muteState;
    NSString *_Id;
    int _frameIndex;
    _Bool _enableReverb;
    _Bool _enableAEC;
    _Bool _isAudioPreview;
    _Bool _isHWAcceleration;
    _Bool _isRecording;
    _Bool _isPause;
    _Bool _isMute;
    _Bool _isCustomRecord;
    _Bool _enableVolumeLevelCal;
    int _sampleRate;
    int _channelsPerSample;
    int _bitsPerChannel;
    int _encFormat;
    float _playRate;
    int _encBitRate;
    int _encFrameLenMs;
    unsigned int _fecRatio;
    id <TXIAudioRecordDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    long long _reverbType;
    NSObject<OS_dispatch_queue> *_audioRecorderQueue;
}

+ (_Bool)getEnableAEC;
+ (unsigned int)getInputDeviceId;
+ (float)getInputDeviceVolume;
+ (_Bool)requestForAccess;
+ (void)setInputDeviceId:(unsigned int)arg1;
+ (void)setInputDeviceVolume:(float)arg1;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioRecorderQueue; // @synthesize audioRecorderQueue=_audioRecorderQueue;
@property(nonatomic) int bitsPerChannel; // @synthesize bitsPerChannel=_bitsPerChannel;
@property(nonatomic) int channelsPerSample; // @synthesize channelsPerSample=_channelsPerSample;
@property(nonatomic) __weak id <TXIAudioRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableAEC; // @synthesize enableAEC=_enableAEC;
@property(nonatomic) _Bool enableReverb; // @synthesize enableReverb=_enableReverb;
@property(nonatomic) _Bool enableVolumeLevelCal; // @synthesize enableVolumeLevelCal=_enableVolumeLevelCal;
@property(nonatomic) int encBitRate; // @synthesize encBitRate=_encBitRate;
@property(nonatomic) int encFormat; // @synthesize encFormat=_encFormat;
@property(nonatomic) int encFrameLenMs; // @synthesize encFrameLenMs=_encFrameLenMs;
@property(nonatomic) unsigned int fecRatio; // @synthesize fecRatio=_fecRatio;
- (id)getID;
- (id)init;
- (id)initPrivate;
@property(nonatomic) _Bool isAudioPreview; // @synthesize isAudioPreview=_isAudioPreview;
@property(nonatomic) _Bool isCustomRecord; // @synthesize isCustomRecord=_isCustomRecord;
@property(nonatomic) _Bool isHWAcceleration; // @synthesize isHWAcceleration=_isHWAcceleration;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(readonly) _Bool isPause; // @synthesize isPause=_isPause;
@property(readonly) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void)onRecordError:(long long)arg1 info:(id)arg2;
- (void)onRecordPcmData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3 sampleRate:(int)arg4 channels:(int)arg5;
- (long long)pauseRecord;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
- (void)resetAudioCodec;
- (long long)resetRecord;
- (void)resetRecordInternal;
- (long long)resumeRecord;
@property(nonatomic) long long reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)sendCustomPCMData:(id)arg1;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)sendNotifyEvent:(int)arg1 eventMsg:(id)arg2;
- (void)setAudioEncInfo:(int)arg1 bitrate:(int)arg2;
- (void)setEncFrameLenMsInternal:(int)arg1;
- (void)setID:(id)arg1;
- (void)setVoiceChangerType:(int)arg1 environment:(int)arg2;
- (void)startRecord;
- (long long)stopRecord;
- (void)updateCaptureState;
@property(readonly, nonatomic) unsigned int volumeLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

