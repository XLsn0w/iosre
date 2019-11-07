//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IWCDeviceAccountMgrExt.h"
#import "IWCDeviceBrandMgrExt.h"

@class CContact, NSMutableArray, NSMutableSet, NSString;

@interface BrandDeviceConnectLogicController : MMObject <IWCDeviceBrandMgrExt, IWCDeviceAccountMgrExt>
{
    CContact *m_contact;
    int m_brandDeviceConnectedCount;
    NSMutableArray *m_devices;
    NSMutableSet *m_hasTryOnceDeviceSet;
    _Bool m_is15SScanEnd;
    _Bool m_hasLongConnetDevice;
    _Bool m_hasWifiDevice;
    _Bool m_hasEADevice;
    _Bool m_hasBLEDevice;
    id <BrandDeviceConnectLogicControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getDeviceForDid:(long long)arg1;
- (id)initWithContact:(id)arg1;
- (void)internalStartScan:(_Bool)arg1;
@property(nonatomic) __weak id <BrandDeviceConnectLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)onWCDeviceChannelStateChanged:(long long)arg1:(int)arg2:(int)arg3;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(_Bool *)arg2;
- (void)onWCDeviceInitEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceLost:(long long)arg1;
- (void)onWCDeviceSessionTimeout:(long long)arg1;
- (void)onWCDeviceWifiStatusUpdate:(id)arg1 Status:(unsigned int)arg2;
- (void)restartScan;
- (void)scanTimeout;
- (void)showErrTips:(int)arg1;
- (void)startScan;
- (void)stopScan;
- (void)updateBrandDevciesType;
- (void)updateSubTitle;
- (void)wifiStateUpdate;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

