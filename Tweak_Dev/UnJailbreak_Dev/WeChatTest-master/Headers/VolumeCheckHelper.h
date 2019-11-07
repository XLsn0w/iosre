//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "VolumeTipViewDelegate-Protocol.h"

@class NSString, VolumeTipView;

@interface VolumeCheckHelper : MMObject <VolumeTipViewDelegate>
{
    VolumeTipView *m_volumeTipView;
    _Bool m_bHasShowVolumeTip;
}

+ (void)freeVolumeCheckHelper;
+ (id)getVolumeCheckHelper;
- (void).cxx_destruct;
- (void)volumeChanged:(id)arg1;
- (void)fadeShowEnd;
- (void)stopShowVolumeTipDelay:(double)arg1 FadeDuration:(double)arg2;
- (void)showVolumeTip;
- (float)getVolumeLevel;
- (void)stopShowVolumeTipNeedDelay:(_Bool)arg1;
- (void)checkVolume;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

