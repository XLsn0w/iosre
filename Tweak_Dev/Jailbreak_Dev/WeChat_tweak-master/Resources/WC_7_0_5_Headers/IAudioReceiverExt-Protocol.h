//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol IAudioReceiverExt

@optional
- (void)OnBeginPlaying:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)OnEarTip;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
@end

