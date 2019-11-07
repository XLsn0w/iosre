//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSessionInfo, NSString;

@protocol IMMNewSessionMgrExt <NSObject>

@optional
- (void)onActiveUsrNameChange:(NSString *)arg1 curUsrName:(NSString *)arg2;
- (void)onAppIconTotalUnreadCountChange:(unsigned int)arg1;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(NSString *)arg2;
- (void)onDeleteSessionOfUser:(NSString *)arg1;
- (void)onNeedRebuild;
- (void)onNeedReload;
- (void)onNewMsgArriving:(MMSessionInfo *)arg1 NotifyFlag:(int)arg2;
- (void)onSessionChanged:(MMSessionInfo *)arg1;
- (void)onSessionRebuildBegin;
- (void)onSessionRebuildEnd;
- (void)onSessionTopStatusChanged:(NSString *)arg1 bTop:(_Bool)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onSessionUpgrade;
- (void)onWillDeleteAllSession;
- (void)onWillDeleteSession:(MMSessionInfo *)arg1;
@end

