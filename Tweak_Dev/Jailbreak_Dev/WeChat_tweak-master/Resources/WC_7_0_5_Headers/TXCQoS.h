//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface TXCQoS : NSObject
{
    struct TXCQoSCore *_qos;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _isEnableDrop;
    long long _bitrate;
    long long _width;
    long long _height;
    double _interval;
    _Bool _isWorking;
    int _autoStrategy;
    id <TXIQoSDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
}

+ (long long)getProperResolutionByVideoBitrate:(_Bool)arg1 videoAspect:(long long)arg2 videoBitrate:(long long)arg3;
- (void).cxx_destruct;
- (void)dealloc;
@property __weak id <TXIQoSDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doQos;
- (id)initWithAutoBitrate:(_Bool)arg1;
- (_Bool)isEnableDrop;
@property __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void)resetWithAutoBitrate:(_Bool)arg1;
- (void)setAutoAdjustStrategy:(long long)arg1;
- (void)setDefaultVideoResolution:(long long)arg1;
- (void)setEnableAutoBitrate:(_Bool)arg1;
- (void)setHasVideo:(_Bool)arg1;
- (void)setVideoEncBitrateMin:(long long)arg1 max:(long long)arg2 def:(long long)arg3;
- (void)setVideoExpectBitrate:(long long)arg1;
- (void)startWithInterval:(double)arg1;
- (void)stop;

@end

