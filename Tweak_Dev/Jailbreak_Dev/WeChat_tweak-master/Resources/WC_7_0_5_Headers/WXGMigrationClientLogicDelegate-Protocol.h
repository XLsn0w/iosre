//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WXGMigrationClientLogicDelegate <NSObject>
- (void)onClientFirstPacketOK:(_Bool)arg1;
- (void)onClientLogicAlertCode:(unsigned long long)arg1;
- (void)onClientLogicCurrentTransferSpeed:(float)arg1;
- (void)onClientLogicNotifyCode:(unsigned long long)arg1;
- (void)onClientProcessCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientProcessCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
@end

