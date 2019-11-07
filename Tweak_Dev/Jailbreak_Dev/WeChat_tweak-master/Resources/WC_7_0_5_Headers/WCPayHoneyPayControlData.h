//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, CheckHoneyPayerResp, CheckHoneyPayerResp_HPCardTypeInfo, CheckHoneyUserResp, CreateHoneyPayCardResp, GetCreateTokenSignResp, GetHoneyPayCardResp, GetMCreditLineTokenSignResp, HoneyPayListResp, HoneyPayListResp_HoneyPayRecord, NSString, QryHoneyPayCardDetailResp, QryHoneyPayerDetailResp, QryHoneyUserDetailResp, WCPayBindCardInfo;

@interface WCPayHoneyPayControlData : NSObject
{
    _Bool _popWebView;
    HoneyPayListResp *_honeyPayListResp;
    CContact *_userContact;
    CheckHoneyPayerResp *_checkPayerResp;
    CheckHoneyPayerResp_HPCardTypeInfo *_selectedCardTypeInfo;
    CheckHoneyUserResp *_checkUserResp;
    GetCreateTokenSignResp *_getCreateTokenSignResp;
    CreateHoneyPayCardResp *_createdReponse;
    GetMCreditLineTokenSignResp *_getMCreditLineTokenSignResp;
    unsigned long long _maximumAmount;
    NSString *_wishing;
    HoneyPayListResp_HoneyPayRecord *_selectedHoneyPayRecord;
    QryHoneyPayerDetailResp *_payerDetailResp;
    QryHoneyUserDetailResp *_receiverDetailResp;
    GetHoneyPayCardResp *_getHoneyPayResp;
    QryHoneyPayCardDetailResp *_cardDetailResp;
    NSString *_cellCardNo;
    WCPayBindCardInfo *_honeyPayCardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QryHoneyPayCardDetailResp *cardDetailResp; // @synthesize cardDetailResp=_cardDetailResp;
@property(copy, nonatomic) NSString *cellCardNo; // @synthesize cellCardNo=_cellCardNo;
@property(retain, nonatomic) CheckHoneyPayerResp *checkPayerResp; // @synthesize checkPayerResp=_checkPayerResp;
@property(retain, nonatomic) CheckHoneyUserResp *checkUserResp; // @synthesize checkUserResp=_checkUserResp;
@property(retain, nonatomic) CreateHoneyPayCardResp *createdReponse; // @synthesize createdReponse=_createdReponse;
@property(retain, nonatomic) GetCreateTokenSignResp *getCreateTokenSignResp; // @synthesize getCreateTokenSignResp=_getCreateTokenSignResp;
@property(retain, nonatomic) GetHoneyPayCardResp *getHoneyPayResp; // @synthesize getHoneyPayResp=_getHoneyPayResp;
@property(retain, nonatomic) GetMCreditLineTokenSignResp *getMCreditLineTokenSignResp; // @synthesize getMCreditLineTokenSignResp=_getMCreditLineTokenSignResp;
@property(retain, nonatomic) WCPayBindCardInfo *honeyPayCardInfo; // @synthesize honeyPayCardInfo=_honeyPayCardInfo;
@property(retain, nonatomic) HoneyPayListResp *honeyPayListResp; // @synthesize honeyPayListResp=_honeyPayListResp;
@property(nonatomic) unsigned long long maximumAmount; // @synthesize maximumAmount=_maximumAmount;
@property(retain, nonatomic) QryHoneyPayerDetailResp *payerDetailResp; // @synthesize payerDetailResp=_payerDetailResp;
@property(nonatomic) _Bool popWebView; // @synthesize popWebView=_popWebView;
@property(retain, nonatomic) QryHoneyUserDetailResp *receiverDetailResp; // @synthesize receiverDetailResp=_receiverDetailResp;
@property(retain, nonatomic) CheckHoneyPayerResp_HPCardTypeInfo *selectedCardTypeInfo; // @synthesize selectedCardTypeInfo=_selectedCardTypeInfo;
@property(retain, nonatomic) HoneyPayListResp_HoneyPayRecord *selectedHoneyPayRecord; // @synthesize selectedHoneyPayRecord=_selectedHoneyPayRecord;
@property(retain, nonatomic) CContact *userContact; // @synthesize userContact=_userContact;
@property(copy, nonatomic) NSString *wishing; // @synthesize wishing=_wishing;

@end

