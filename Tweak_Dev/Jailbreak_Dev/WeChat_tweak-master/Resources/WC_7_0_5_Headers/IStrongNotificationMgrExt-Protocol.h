//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IStrongNotificationMgrExt <NSObject>

@optional
- (void)onAcceptWeAppStrongNotification:(NSString *)arg1 resultFlag:(_Bool)arg2 errorMsg:(NSString *)arg3;
- (void)onAddStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2 resultFlag:(_Bool)arg3;
- (void)onDeleteStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2 resultFlag:(_Bool)arg3;
- (void)onModifyStrongNotification:(NSString *)arg1 contactUserName:(NSString *)arg2;
- (void)onModifyStrongNotificationBanner;
@end

