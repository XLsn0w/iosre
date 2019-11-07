//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class MonoServiceMsgHistory, NSMutableArray, NSString, VibrationRepeatObject;

@interface MonoServiceMsgMgr : MMService <MMService>
{
    NSMutableArray *m_queue;
    MonoServiceMsgHistory *m_msgHistory;
    NSMutableArray *m_logicArray;
    MonoServiceMsgHistory *_m_localNotificationHistory;
    VibrationRepeatObject *_m_vibrationObject;
}

- (void).cxx_destruct;
- (void)addCancelHistory:(id)arg1;
- (void)addMsgLogic:(id)arg1;
- (void)checkMsgQueue;
- (void)closeLocalNotificationWithMsg:(id)arg1;
- (void)inQueueMsg:(id)arg1;
- (id)init;
- (void)internalCheckMsgQueue;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIExist;
- (_Bool)isMonoServiceUIWorking;
@property(retain, nonatomic) MonoServiceMsgHistory *m_localNotificationHistory; // @synthesize m_localNotificationHistory=_m_localNotificationHistory;
@property(retain, nonatomic) NSMutableArray *m_logicArray; // @synthesize m_logicArray;
@property(retain, nonatomic) MonoServiceMsgHistory *m_msgHistory; // @synthesize m_msgHistory;
@property(retain, nonatomic) NSMutableArray *m_queue; // @synthesize m_queue;
@property(retain, nonatomic) VibrationRepeatObject *m_vibrationObject; // @synthesize m_vibrationObject=_m_vibrationObject;
- (void)onServiceClearData;
- (void)processCancelMsg:(id)arg1;
- (void)processInviteMsg:(id)arg1;
- (void)processMsg:(id)arg1;
- (void)repeatInAppVibration;
- (void)repeatOutAppVibration;
- (void)repeatOutAppVibrationForNotify;
- (void)showLocalNotificationWithMsg:(id)arg1 repeatVibration:(_Bool)arg2;
- (void)stopInAppVibration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

