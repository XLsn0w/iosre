//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayAlertItem;

@interface WCPayTransferPrepayResponseStruct : NSObject
{
    NSString *m_nsReqKey;
    unsigned int m_uiHasUnarriveMoney;
    long long m_lExtMoney;
    NSString *m_nsInterruptDesc;
    NSString *m_nsMsgContent;
    unsigned int m_uiChargeFee;
    unsigned int m_uiAccFee;
    unsigned int m_uiFeeLimit;
    unsigned int m_uiRemainFee;
    unsigned int m_uiExceedFee;
    NSString *m_nsChargeRate;
    NSString *m_nsTransferInterruptChargeDesc;
    unsigned int m_uiUsedFee;
    _Bool m_isShowCharge;
    NSString *m_nsReceiverTrueName;
    _Bool _isNeedCheckName;
    unsigned int _amount;
    unsigned int _fee;
    unsigned int _scanScene;
    unsigned int _get_dynamic_code_flag;
    unsigned int _checkNameMessageErrortype;
    unsigned int _return_to_session;
    WCPayAlertItem *_alertItem;
    NSString *_f2fId;
    NSString *_transId;
    NSString *_extendStr;
    NSString *_receiverOpenId;
    NSString *_doubleCheckWording;
    NSString *_transferId;
    NSString *_transactionId;
    NSString *_transferReceiverOpenId;
    NSString *_placeorderSucSign;
    NSString *_paySucExtend;
    NSString *_get_dynamic_code_sign;
    NSString *_get_dynamic_code_extend;
    NSString *_show_paying_wording;
    NSString *_dynamic_code_spam_wording;
    NSString *_checkNameMessageTitle;
    NSString *_checkNameMessageWording;
    NSString *_checkNameMessageDisplayName;
    NSString *_checkNameMessageCheckNameSign;
    NSString *_zaituMsgWording;
    NSString *_zaituMsgBtnTitle;
    NSString *_zaituMsgOpenUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property(nonatomic) unsigned int amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *checkNameMessageCheckNameSign; // @synthesize checkNameMessageCheckNameSign=_checkNameMessageCheckNameSign;
@property(retain, nonatomic) NSString *checkNameMessageDisplayName; // @synthesize checkNameMessageDisplayName=_checkNameMessageDisplayName;
@property(nonatomic) unsigned int checkNameMessageErrortype; // @synthesize checkNameMessageErrortype=_checkNameMessageErrortype;
@property(retain, nonatomic) NSString *checkNameMessageTitle; // @synthesize checkNameMessageTitle=_checkNameMessageTitle;
@property(retain, nonatomic) NSString *checkNameMessageWording; // @synthesize checkNameMessageWording=_checkNameMessageWording;
- (void)dealloc;
@property(retain, nonatomic) NSString *doubleCheckWording; // @synthesize doubleCheckWording=_doubleCheckWording;
@property(retain, nonatomic) NSString *dynamic_code_spam_wording; // @synthesize dynamic_code_spam_wording=_dynamic_code_spam_wording;
@property(retain, nonatomic) NSString *extendStr; // @synthesize extendStr=_extendStr;
@property(retain, nonatomic) NSString *f2fId; // @synthesize f2fId=_f2fId;
@property(nonatomic) unsigned int fee; // @synthesize fee=_fee;
@property(retain, nonatomic) NSString *get_dynamic_code_extend; // @synthesize get_dynamic_code_extend=_get_dynamic_code_extend;
@property(nonatomic) unsigned int get_dynamic_code_flag; // @synthesize get_dynamic_code_flag=_get_dynamic_code_flag;
@property(retain, nonatomic) NSString *get_dynamic_code_sign; // @synthesize get_dynamic_code_sign=_get_dynamic_code_sign;
@property(nonatomic) _Bool isNeedCheckName; // @synthesize isNeedCheckName=_isNeedCheckName;
@property(nonatomic) _Bool m_isShowCharge; // @synthesize m_isShowCharge;
@property(nonatomic) long long m_lExtMoney; // @synthesize m_lExtMoney;
@property(retain, nonatomic) NSString *m_nsChargeRate; // @synthesize m_nsChargeRate;
@property(retain, nonatomic) NSString *m_nsInterruptDesc; // @synthesize m_nsInterruptDesc;
@property(retain, nonatomic) NSString *m_nsMsgContent; // @synthesize m_nsMsgContent;
@property(retain, nonatomic) NSString *m_nsReceiverTrueName; // @synthesize m_nsReceiverTrueName;
@property(retain, nonatomic) NSString *m_nsReqKey; // @synthesize m_nsReqKey;
@property(retain, nonatomic) NSString *m_nsTransferInterruptChargeDesc; // @synthesize m_nsTransferInterruptChargeDesc;
@property(nonatomic) unsigned int m_uiAccFee; // @synthesize m_uiAccFee;
@property(nonatomic) unsigned int m_uiChargeFee; // @synthesize m_uiChargeFee;
@property(nonatomic) unsigned int m_uiExceedFee; // @synthesize m_uiExceedFee;
@property(nonatomic) unsigned int m_uiFeeLimit; // @synthesize m_uiFeeLimit;
@property(nonatomic) unsigned int m_uiHasUnarriveMoney; // @synthesize m_uiHasUnarriveMoney;
@property(nonatomic) unsigned int m_uiRemainFee; // @synthesize m_uiRemainFee;
@property(nonatomic) unsigned int m_uiUsedFee; // @synthesize m_uiUsedFee;
@property(retain, nonatomic) NSString *paySucExtend; // @synthesize paySucExtend=_paySucExtend;
@property(retain, nonatomic) NSString *placeorderSucSign; // @synthesize placeorderSucSign=_placeorderSucSign;
@property(retain, nonatomic) NSString *receiverOpenId; // @synthesize receiverOpenId=_receiverOpenId;
@property(nonatomic) unsigned int return_to_session; // @synthesize return_to_session=_return_to_session;
@property(nonatomic) unsigned int scanScene; // @synthesize scanScene=_scanScene;
@property(retain, nonatomic) NSString *show_paying_wording; // @synthesize show_paying_wording=_show_paying_wording;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *transferId; // @synthesize transferId=_transferId;
@property(retain, nonatomic) NSString *transferReceiverOpenId; // @synthesize transferReceiverOpenId=_transferReceiverOpenId;
@property(retain, nonatomic) NSString *zaituMsgBtnTitle; // @synthesize zaituMsgBtnTitle=_zaituMsgBtnTitle;
@property(retain, nonatomic) NSString *zaituMsgOpenUrl; // @synthesize zaituMsgOpenUrl=_zaituMsgOpenUrl;
@property(retain, nonatomic) NSString *zaituMsgWording; // @synthesize zaituMsgWording=_zaituMsgWording;

@end

