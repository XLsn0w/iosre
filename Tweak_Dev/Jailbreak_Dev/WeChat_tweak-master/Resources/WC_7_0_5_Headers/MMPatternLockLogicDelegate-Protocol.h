//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MMPatternLockLogicDelegate <NSObject>

@optional
- (_Bool)needBlockLeftBarbuttonItemInEnteranceScene;
- (_Bool)needCancelPopAnimation;
- (void)onPatternLockErrorOutOfLimit;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockToPwdVerifyCancel;
- (void)onPatternLockToPwdVerifyResult:(_Bool)arg1;
- (void)onPatternLockVerifyResult:(_Bool)arg1;
@end

