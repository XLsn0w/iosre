//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportPhoneAuthActionItem : WAReportBaseItem
{
    _Bool _isBindPhone;
    _Bool _bindSuccess;
    unsigned long long _getPhoneNumberCount;
    unsigned long long _clickConfirmCount;
    unsigned long long _clickDenyCount;
    unsigned long long _clickCancelCount;
    unsigned long long _confirmBindedPhoneCount;
    unsigned long long _confirmUnBindPhoneCount;
    unsigned long long _clickInfoCount;
    unsigned long long _clickUseOtherPhoneCount;
    unsigned long long _clickManagePhoneCount;
    unsigned long long _clickGetVerifyCodeCount;
    unsigned long long _getVerifyCodeSuccessCount;
    unsigned long long _getVerifyCodeFailedCount;
    unsigned long long _clickAddPhoneDoneCount;
    unsigned long long _addPhoneSuccessCount;
    unsigned long long _addPhoneFailedCount;
    unsigned long long _addPhoneAndSaveCount;
    unsigned long long _addPhoneNotSaveCount;
    unsigned long long _clickAddPhoneOnManagePageCount;
    unsigned long long _deletePhoneCount;
    unsigned long long _deletePhoneSuccessCount;
    unsigned long long _deletePhoneFailedCount;
    unsigned long long _verifyCodeCount;
    unsigned long long _verifyCodeSuccessCount;
    unsigned long long _verifyCodeFailedCount;
}

@property(nonatomic) unsigned long long addPhoneAndSaveCount; // @synthesize addPhoneAndSaveCount=_addPhoneAndSaveCount;
@property(nonatomic) unsigned long long addPhoneFailedCount; // @synthesize addPhoneFailedCount=_addPhoneFailedCount;
@property(nonatomic) unsigned long long addPhoneNotSaveCount; // @synthesize addPhoneNotSaveCount=_addPhoneNotSaveCount;
@property(nonatomic) unsigned long long addPhoneSuccessCount; // @synthesize addPhoneSuccessCount=_addPhoneSuccessCount;
@property(nonatomic) _Bool bindSuccess; // @synthesize bindSuccess=_bindSuccess;
@property(nonatomic) unsigned long long clickAddPhoneDoneCount; // @synthesize clickAddPhoneDoneCount=_clickAddPhoneDoneCount;
@property(nonatomic) unsigned long long clickAddPhoneOnManagePageCount; // @synthesize clickAddPhoneOnManagePageCount=_clickAddPhoneOnManagePageCount;
@property(nonatomic) unsigned long long clickCancelCount; // @synthesize clickCancelCount=_clickCancelCount;
@property(nonatomic) unsigned long long clickConfirmCount; // @synthesize clickConfirmCount=_clickConfirmCount;
@property(nonatomic) unsigned long long clickDenyCount; // @synthesize clickDenyCount=_clickDenyCount;
@property(nonatomic) unsigned long long clickGetVerifyCodeCount; // @synthesize clickGetVerifyCodeCount=_clickGetVerifyCodeCount;
@property(nonatomic) unsigned long long clickInfoCount; // @synthesize clickInfoCount=_clickInfoCount;
@property(nonatomic) unsigned long long clickManagePhoneCount; // @synthesize clickManagePhoneCount=_clickManagePhoneCount;
@property(nonatomic) unsigned long long clickUseOtherPhoneCount; // @synthesize clickUseOtherPhoneCount=_clickUseOtherPhoneCount;
@property(nonatomic) unsigned long long confirmBindedPhoneCount; // @synthesize confirmBindedPhoneCount=_confirmBindedPhoneCount;
@property(nonatomic) unsigned long long confirmUnBindPhoneCount; // @synthesize confirmUnBindPhoneCount=_confirmUnBindPhoneCount;
@property(nonatomic) unsigned long long deletePhoneCount; // @synthesize deletePhoneCount=_deletePhoneCount;
@property(nonatomic) unsigned long long deletePhoneFailedCount; // @synthesize deletePhoneFailedCount=_deletePhoneFailedCount;
@property(nonatomic) unsigned long long deletePhoneSuccessCount; // @synthesize deletePhoneSuccessCount=_deletePhoneSuccessCount;
@property(nonatomic) unsigned long long getPhoneNumberCount; // @synthesize getPhoneNumberCount=_getPhoneNumberCount;
@property(nonatomic) unsigned long long getVerifyCodeFailedCount; // @synthesize getVerifyCodeFailedCount=_getVerifyCodeFailedCount;
@property(nonatomic) unsigned long long getVerifyCodeSuccessCount; // @synthesize getVerifyCodeSuccessCount=_getVerifyCodeSuccessCount;
@property(nonatomic) _Bool isBindPhone; // @synthesize isBindPhone=_isBindPhone;
- (int)reportID;
- (id)reportString;
@property(nonatomic) unsigned long long verifyCodeCount; // @synthesize verifyCodeCount=_verifyCodeCount;
@property(nonatomic) unsigned long long verifyCodeFailedCount; // @synthesize verifyCodeFailedCount=_verifyCodeFailedCount;
@property(nonatomic) unsigned long long verifyCodeSuccessCount; // @synthesize verifyCodeSuccessCount=_verifyCodeSuccessCount;

@end

