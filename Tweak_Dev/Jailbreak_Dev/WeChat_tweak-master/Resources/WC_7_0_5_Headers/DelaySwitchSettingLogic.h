//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface DelaySwitchSettingLogic : MMObject
{
    _Bool m_bNeedToSync;
}

- (void)CreateSettingEventType:(unsigned int)arg1 andValue:(_Bool)arg2 andBitset:(unsigned int)arg3;
- (void)CreateSettingExtStautsEventType:(unsigned int)arg1 andValue:(_Bool)arg2 andBitset:(unsigned int)arg3;
- (void)chatProfileSwitchSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)commitAllSwitchSetting;
- (void)contactProfileSwitchSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)dealloc;
- (void)discoverEntrancePluginSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)discoverEntranceSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)enterBackground;
- (void)individualPrivacySwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (id)init;
- (void)messageNotifycationSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)pluginSwitchSetting:(int)arg1 andValue:(_Bool)arg2;
- (void)processChatProfileSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processContactProfileSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processIndividualPrivacySetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processMessageNotifycationSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)processPluginSetting:(id)arg1 withType:(int)arg2 andValue:(_Bool)arg3;
- (void)setWCPaySettingDelaySwitch:(unsigned long long)arg1 clearBitMask:(unsigned long long)arg2;
- (void)setWCPayTransferDelaySwitch:(int)arg1;

@end

