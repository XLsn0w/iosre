//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FaceRecog3rdVerifyConfirmLogicDelegate.h"
#import "FaceRecog3rdVerifyConfirmViewControllerDelegate.h"
#import "FaceRecogHandlerDelegate.h"

@class FaceRecog3rdVerifyConfirmLogic, FaceRecog3rdVerifyConfirmViewController, FaceRecog3rdVerifyHandler, MMUIViewController, NSString;

@interface FaceRecogPrivateVerifyHandler : MMObject <FaceRecog3rdVerifyConfirmLogicDelegate, FaceRecogHandlerDelegate, FaceRecog3rdVerifyConfirmViewControllerDelegate>
{
    _Bool _needConfirmView;
    _Bool _needVideo;
    unsigned int _checkAliveType;
    unsigned int _scene;
    id <FaceRecogPrivateVerifyHandlerDelegate> _delegate;
    MMUIViewController *_fromVC;
    NSString *_funcName;
    FaceRecog3rdVerifyConfirmViewController *_confirmVC;
    FaceRecog3rdVerifyHandler *_verifyHandler;
    FaceRecog3rdVerifyConfirmLogic *_confirmLogic;
    NSString *_appId;
    NSString *_verifyInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int checkAliveType; // @synthesize checkAliveType=_checkAliveType;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic; // @synthesize confirmLogic=_confirmLogic;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmViewController *confirmVC; // @synthesize confirmVC=_confirmVC;
@property(nonatomic) __weak id <FaceRecogPrivateVerifyHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disMissAll:(_Bool)arg1;
- (void)doStartFaceReco;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(copy, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
- (id)getCurVC;
- (void)initData;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 needVideo:(_Bool)arg3 scene:(unsigned int)arg4;
- (id)initWithAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithUnionVideoAppId:(id)arg1 verifyInfo:(id)arg2 scene:(unsigned int)arg3;
@property(nonatomic) _Bool needConfirmView; // @synthesize needConfirmView=_needConfirmView;
@property(nonatomic) _Bool needVideo; // @synthesize needVideo=_needVideo;
- (void)onConfirmCancel;
- (void)onConfirmStartFaceReco;
- (void)onGetConfirmInfo:(id)arg1 failedCauseOf:(unsigned int)arg2 msg:(id)arg3;
- (void)onGetConfirmInfoFail;
- (void)onGetConfirmInfoSucceed:(id)arg1;
- (void)reportWithResult:(int)arg1;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) FaceRecog3rdVerifyHandler *verifyHandler; // @synthesize verifyHandler=_verifyHandler;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
- (void)start;
- (void)startLoading;
- (void)stopLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

