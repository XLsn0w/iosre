//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogBaseHandler.h"

#import "FaceRecogPayConfigLogicDelegate.h"

@class FaceRecogPayConfigLogic, NSString;

@interface FaceRecogPayBaseHandler : FaceRecogBaseHandler <FaceRecogPayConfigLogicDelegate>
{
    _Bool _bClickBizBtnTitle;
    FaceRecogPayConfigLogic *_config;
    NSString *_other_verify_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bClickBizBtnTitle; // @synthesize bClickBizBtnTitle=_bClickBizBtnTitle;
@property(retain, nonatomic) FaceRecogPayConfigLogic *config; // @synthesize config=_config;
- (void)faceRecogDidClickBizBtn;
- (void)faceRecogDidRotate;
- (void)initConfigLogic;
- (id)initWithScene:(unsigned int)arg1;
- (void)onGetPayBioConfig:(id)arg1 failedCauseOf:(int)arg2 errMsg:(id)arg3;
- (void)onGetPayBioConfigOK:(id)arg1;
@property(retain, nonatomic) NSString *other_verify_title; // @synthesize other_verify_title=_other_verify_title;
- (void)procedureDidStartUploadResultData;
- (void)requestConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

