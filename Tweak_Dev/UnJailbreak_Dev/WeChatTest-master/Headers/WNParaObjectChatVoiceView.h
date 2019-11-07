//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "IWNAudioMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface WNParaObjectChatVoiceView : WNParaObjectBaseView <IWNAudioMgrExt, UIAlertViewDelegate>
{
    UILabel *titleLabel;
    UIImageView *playingImageView;
    int viewType;
}

- (void).cxx_destruct;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (id)getDuration:(int)arg1;
- (void)onClickObject;
- (void)showPlayingView;
- (void)showNormalView;
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

