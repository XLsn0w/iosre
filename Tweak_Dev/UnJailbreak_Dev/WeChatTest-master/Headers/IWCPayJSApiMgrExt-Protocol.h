//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCPayJSApiMgrExt <NSObject>

@optional
- (void)onWCPayJSApiResult:(NSString *)arg1 needCloseWebview:(_Bool)arg2;
- (void)onWCPayJSApiEnd:(_Bool)arg1;
- (void)onWCPayJSApiBegin:(_Bool)arg1;
@end

