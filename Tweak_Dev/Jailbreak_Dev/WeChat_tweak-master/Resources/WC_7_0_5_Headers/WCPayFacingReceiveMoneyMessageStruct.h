//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayFacingReceiveMoneyMessageStruct : NSObject
{
    int m_enWCPayFacingReceiveMoneyScene;
    NSString *m_nsTransactionID;
    NSString *m_nsUserName;
    NSString *m_nsDisplayName;
    unsigned int m_uiTimeStamp;
    long long m_llFee;
    NSString *m_nsFeeType;
    int m_enWCPayFacingReceiveMoneyStatus;
    NSString *m_nsOutTradeNo;
    unsigned int _m_expireTime;
    NSString *_m_voiceContent;
    NSString *_m_nsOutTradeNo;
    NSString *_m_nsType;
    long long _m_n64SvrId;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) int m_enWCPayFacingReceiveMoneyScene; // @synthesize m_enWCPayFacingReceiveMoneyScene;
@property(nonatomic) int m_enWCPayFacingReceiveMoneyStatus; // @synthesize m_enWCPayFacingReceiveMoneyStatus;
@property(nonatomic) unsigned int m_expireTime; // @synthesize m_expireTime=_m_expireTime;
@property(nonatomic) long long m_llFee; // @synthesize m_llFee;
@property(nonatomic) long long m_n64SvrId; // @synthesize m_n64SvrId=_m_n64SvrId;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType;
@property(retain, nonatomic) NSString *m_nsOutTradeNo; // @synthesize m_nsOutTradeNo=_m_nsOutTradeNo;
@property(retain, nonatomic) NSString *m_nsTransactionID; // @synthesize m_nsTransactionID;
@property(retain, nonatomic) NSString *m_nsType; // @synthesize m_nsType=_m_nsType;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(nonatomic) unsigned int m_uiTimeStamp; // @synthesize m_uiTimeStamp;
@property(retain, nonatomic) NSString *m_voiceContent; // @synthesize m_voiceContent=_m_voiceContent;

@end

