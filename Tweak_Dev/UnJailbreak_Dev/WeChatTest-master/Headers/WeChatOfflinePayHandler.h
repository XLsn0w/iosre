//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPreEnterWechatLogicExt-Protocol.h"
#import "WCPaySDKOpenOfflinePayControlLogicExt-Protocol.h"
#import "WCShareAuthViewControllerDelegate-Protocol.h"

@class NSString, NSURL, WCShareAuthViewController;

@interface WeChatOfflinePayHandler : NSObject <IPreEnterWechatLogicExt, WCShareAuthViewControllerDelegate, WCPaySDKOpenOfflinePayControlLogicExt>
{
    NSString *_appId;
    NSString *_bundleId;
    NSURL *_appUrl;
    WCShareAuthViewController *_authVC;
}

@property(retain, nonatomic) WCShareAuthViewController *authVC; // @synthesize authVC=_authVC;
@property(retain, nonatomic) NSURL *appUrl; // @synthesize appUrl=_appUrl;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)onSDKOpenOfflinePayLogicDidStop;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)startAuth;
- (void)startOfflinePay;
- (void)onPreEnterWechatDone;
- (void)cancelWeChatOfflinePay;
- (void)startWeChatOfflinePay:(id)arg1 bundleId:(id)arg2 payInfo:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

