//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTLBaseItemView.h"

#import "IAudioReceiverExt-Protocol.h"
#import "IMusicPlayerExt-Protocol.h"
#import "MMUIViewControllerExt-Protocol.h"

@class MMMusicPlayerContoller, MMUILabel, NSString, UIButton, UIImageView, UIView;

@interface BTLAudioItemView : BTLBaseItemView <MMUIViewControllerExt, IAudioReceiverExt, IMusicPlayerExt>
{
    UIImageView *m_audioPlayView;
    UIButton *m_audioPlayButton;
    MMMusicPlayerContoller *m_audioPlayController;
    MMUILabel *m_timeLabel;
    UIView *m_containView;
}

- (void).cxx_destruct;
- (void)onMusicPlayStatusChanged;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)getChatName:(id)arg1;
- (_Bool)playAudio;
- (void)StopPlay;
- (void)StartPlay;
- (void)onPlayBtnClick;
- (void)updateVoiceStatus;
- (void)layoutItemNormal;
- (void)layoutItemTop;
- (void)layoutSubviews;
- (void)initTitleAndTimeLabel;
- (void)initPlayView;
- (void)initAudioItemNormal;
- (void)initAudioItemTop;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

