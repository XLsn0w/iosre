//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "IWNAudioMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIView;

@interface WNParaObjectVoiceView : WNParaObjectBaseView <IWNAudioMgrExt, UIAlertViewDelegate>
{
    UILabel *_titleLabel;
    UILabel *_totalTimeLabel;
    UIButton *_controlBtn;
    UIButton *_controlBigAreaBtn;
    int _viewType;
    UIView *_recordingPoint;
    UIView *_progressIndicator;
    UIView *_progressBackView;
    UIView *_progressFrontView;
    _Bool _userDragging;
    unsigned int _timems;
}

@property(nonatomic) unsigned int timems; // @synthesize timems=_timems;
- (void).cxx_destruct;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (id)getDuration:(int)arg1;
- (void)onClickObject;
- (void)onClickControlBtn;
- (void)setUnSelected;
- (void)showPlayingView;
- (void)showRecordingView;
- (void)showNormalView;
- (void)setProgressIndicatorCenterX:(double)arg1;
- (void)onIndicatorPan:(id)arg1;
- (void)onTouchBegin:(id)arg1;
- (void)layoutView;
- (_Bool)ifLayoutViewByBase;
- (_Bool)canAlwaysClick;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

