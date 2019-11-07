//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseAudioPlayer.h"

@interface AMRAudioPlayer : BaseAudioPlayer
{
    _Bool mIsNeedRestartMusic;
}

- (void)autostop;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (void)openAMRFile:(id)arg1;
- (void)play;
- (void)playFromOffsetms:(unsigned int)arg1;
- (void)prepareBuffers;
- (_Bool)preparePlayNotNotify;
- (_Bool)preparePlayWithAMRFile:(id)arg1;
- (void)replay;
- (void)setDataFormat;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(unsigned int)arg1;
- (void)stop;

@end

