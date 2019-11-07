//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IMMFacebookMgrExt.h"
#import "IRsaCertMgrExt.h"
#import "MMImageLoaderObserver.h"
#import "MMKernelExt.h"
#import "WCBaseControlMgrExt.h"

@class NSString;

@interface WCAccountThirdAppRegisterControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, MMImageLoaderObserver, WCBaseControlMgrExt, MMKernelExt, IRsaCertMgrExt>
{
    _Bool m_hasStartDownloadImage;
    _Bool m_fromLoginToReg;
    unsigned int m_lastPhoneRegLogicTag;
}

+ (void)ReportThirdAppLoginRegWithType:(int)arg1 action:(unsigned long long)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callCancelLogic;
- (void)callFailLogicWithErrMsg:(id)arg1;
- (void)callGotoLoginLogicWithToken:(id)arg1;
- (void)callSuccessLogic;
- (void)dealloc;
- (void)handleThirdAppVerifyReturn:(id)arg1;
- (void)onFBDidNotLogin:(_Bool)arg1;
- (void)onLoginFacebookBegan:(id)arg1;
- (void)onNewRegOK;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)reportAction:(unsigned long long)arg1;
- (void)startDownloadHeadImageWithUrl:(id)arg1;
- (void)startFacebookAuth;
- (void)startGetThirdAppInfo;
- (void)startLogic;
- (void)startThirdVerifyToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

