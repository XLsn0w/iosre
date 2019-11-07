//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"

@class MMWebViewController, NSString, UIViewController, WOAPObject;

@interface WOAPPrivacyConfirmLogic : MMObject <PBMessageObserverDelegate, MMWebViewDelegate>
{
    CDUnknownBlockType _completionBlock;
    UIViewController *_viewController;
    MMWebViewController *_privacyWebView;
    WOAPObject *_requestObj;
}

+ (_Bool)isNeedPrivacyConfirm;
+ (void)setForcePrivacyConfirmRequirement;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)bizStringFromWOAPObjectType:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)completionPrivacyConfirmLogicWithResult:(long long)arg1;
- (void)dealloc;
- (void)handleGetGDRPAuthResponse:(id)arg1;
- (void)handleSetGDRPAuthResponse:(id)arg1;
- (void)onWebViewClickClose;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
@property(retain, nonatomic) MMWebViewController *privacyWebView; // @synthesize privacyWebView=_privacyWebView;
- (void)reqeustSetGDPRPrivacyConfirmState:(id)arg1;
@property(retain, nonatomic) WOAPObject *requestObj; // @synthesize requestObj=_requestObj;
- (void)requestPrivacyConfirmrequirement:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)showPrivacyViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

