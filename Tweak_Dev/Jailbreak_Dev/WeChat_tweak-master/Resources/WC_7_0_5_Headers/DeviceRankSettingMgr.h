//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class DeviceRankSetting, NSString;

@interface DeviceRankSettingMgr : MMService <MMService, PBMessageObserverDelegate>
{
    DeviceRankSetting *_rankSetting;
    _Bool bSettingChanged;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)NeedLikeNotify;
- (_Bool)NeedRankNotify;
- (_Bool)NeedRecordDataNotify;
- (_Bool)NeedTakePartIn;
- (void)SetLikeNotify:(_Bool)arg1;
- (void)SetRankNotify:(_Bool)arg1;
- (void)SetRecordDataNotify:(_Bool)arg1;
- (void)SetTakePartIn:(_Bool)arg1;
- (void)UpdateSettingFromSVR;
- (void)UpdateSettingTOSVR;
- (id)getRankSettingFilePath;
- (id)init;
- (void)loadRankSetting;
- (void)saveRankSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

