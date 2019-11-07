//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMTimer, NSData, NSMutableArray, NSRecursiveLock, NSString;

@interface VOIPCSSyncMgr : MMService <PBMessageObserverDelegate, MMService>
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsNeedSync;
    long long mRoomId;
    long long mRoomKey;
    _Bool m_isDoingSync;
    int cancelInviteStatus;
    unsigned int mCSNotifySeq;
    unsigned int m_syncTimerCnt;
    unsigned int m_syncTimerStopValue;
    NSData *mKeyBuf;
    NSMutableArray *mOplogList;
    NSRecursiveLock *mOplogLock;
    MMTimer *m_syncTimer;
}

- (void).cxx_destruct;
- (void)AddOplog:(unsigned int)arg1 data:(id)arg2;
- (void)ClearOplog;
- (id)GetOplog;
- (void)HandleVoipCSSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)PushControlStatus:(unsigned int)arg1;
- (void)PushRelayData:(id)arg1;
- (void)RemoveOplog:(id)arg1;
- (void)SendCSSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)SendSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)StartSessionWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)StartWeakSessionWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)StopSession;
- (void)StopSyncTimer;
- (void)SyncByNotifyWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)check_next_sync;
- (void)dealloc;
- (void)forceCheck_next_sync;
- (long long)getRoomId;
- (long long)getRoomKey;
- (int)getSitemStatus;
- (id)init;
- (_Bool)isCSNotifySeqNew:(unsigned int)arg1;
- (_Bool)isSyncKeyNew:(id)arg1;
@property(retain, nonatomic) NSData *mKeyBuf; // @synthesize mKeyBuf;
@property(retain, nonatomic) NSMutableArray *mOplogList; // @synthesize mOplogList;
@property(retain, nonatomic) NSRecursiveLock *mOplogLock; // @synthesize mOplogLock;
@property(retain, nonatomic) MMTimer *m_syncTimer; // @synthesize m_syncTimer;
@property(nonatomic) unsigned int m_syncTimerCnt; // @synthesize m_syncTimerCnt;
@property(nonatomic) unsigned int m_syncTimerStopValue; // @synthesize m_syncTimerStopValue;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)retriveKeyFrom:(id)arg1 StatusKey:(unsigned int *)arg2 RelayKey:(unsigned int *)arg3 ConnectingKey:(unsigned int *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

