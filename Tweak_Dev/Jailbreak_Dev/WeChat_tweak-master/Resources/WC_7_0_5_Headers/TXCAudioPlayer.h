//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXCBasePlayer.h"

#import "TXIAudioPlayDelegate.h"

@class NSMutableArray, NSString;

@interface TXCAudioPlayer : TXCBasePlayer <TXIAudioPlayDelegate>
{
    NSMutableArray *_playPackets;
    struct TXCAudioSpeeder *_audioSpeeder;
    struct shared_ptr<TXCAudioJitterBuffer> _pAudioJitterBuffer;
    int _queryBufLen;
    char *_queryBuf;
    _Bool _isHWAcceleration;
    _Bool _autojustCache;
    _Bool _isRealTimePlay;
    _Bool _enableVolumeLevelCal;
    float _cacheTime;
    float _autoAdjustMaxCache;
    float _autoAdjustMinCache;
    int _smoothMode;
    int _streamFormat;
    int _sampleRate;
    int _channels;
    id <TXIAudioPlayDelegate> _dataDelegate;
    id <TXINotifyDelegate> _notifyDelegate;
    NSString *_userID;
}

+ (_Bool)getEnableAEC;
+ (unsigned int)getOutputDeviceId;
+ (float)getOutputDeviceVolume;
+ (void)setAudioMode:(long long)arg1;
+ (void)setOutputDeviceId:(unsigned int)arg1;
+ (void)setOutputDeviceVolume:(float)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) float autoAdjustMaxCache; // @synthesize autoAdjustMaxCache=_autoAdjustMaxCache;
@property(nonatomic) float autoAdjustMinCache; // @synthesize autoAdjustMinCache=_autoAdjustMinCache;
@property(nonatomic) _Bool autojustCache; // @synthesize autojustCache=_autojustCache;
@property(readonly, nonatomic) float cacheThreshold;
@property(nonatomic) float cacheTime; // @synthesize cacheTime=_cacheTime;
@property(readonly, nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) __weak id <TXIAudioPlayDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
- (void)dealloc;
@property(nonatomic) _Bool enableVolumeLevelCal; // @synthesize enableVolumeLevelCal=_enableVolumeLevelCal;
- (id)getReportInfo;
- (id)init;
@property(nonatomic) _Bool isHWAcceleration; // @synthesize isHWAcceleration=_isHWAcceleration;
@property(nonatomic) _Bool isRealTimePlay; // @synthesize isRealTimePlay=_isRealTimePlay;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void)onAudioJitterStateNotify:(int)arg1;
- (long long)pausePlay;
- (id)queryData:(int)arg1;
- (long long)resetPlay;
- (long long)resumePlay;
@property(readonly, nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)setIsMute:(_Bool)arg1;
@property(nonatomic) int smoothMode; // @synthesize smoothMode=_smoothMode;
@property(nonatomic) int streamFormat; // @synthesize streamFormat=_streamFormat;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (long long)startPlay;
- (long long)stopPlay;
@property(readonly) unsigned int volumeLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

