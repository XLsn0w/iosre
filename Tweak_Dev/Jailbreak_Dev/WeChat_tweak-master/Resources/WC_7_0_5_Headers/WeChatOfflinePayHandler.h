//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "WCPaySDKOpenOfflinePayControlLogicExt.h"
#import "WCShareAuthViewControllerDelegate.h"

@class NSString, NSURL, WCShareAuthViewController;

@interface WeChatOfflinePayHandler : NSObject <IPreEnterWechatLogicExt, WCShareAuthViewControllerDelegate, WCPaySDKOpenOfflinePayControlLogicExt>
{
    NSString *_appId;
    NSString *_bundleId;
    NSURL *_appUrl;
    WCShareAuthViewController *_authVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSURL *appUrl; // @synthesize appUrl=_appUrl;
@property(retain, nonatomic) WCShareAuthViewController *authVC; // @synthesize authVC=_authVC;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)cancelWeChatOfflinePay;
- (void)dealloc;
- (id)init;
- (id)makeBizCustomLinkIfNeed;
- (void)onPreEnterWechatDone;
- (void)onSDKOpenOfflinePayLogicDidStop;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)startAuth;
- (void)startOfflinePay;
- (void)startWeChatOfflinePay:(id)arg1 bundleId:(id)arg2 payInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

