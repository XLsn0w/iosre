//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString, WCPayBalanceMenuInfo;

@interface WCPayBalanceInfo : NSObject <NSCoding>
{
    unsigned long long m_uiTotalBalance;
    unsigned long long m_uiAvailableBalance;
    unsigned long long m_uiFrozenBalance;
    unsigned long long m_uiFetchBalance;
    NSDate *m_ndFetchArriveTime;
    NSString *m_nsFetchArriveTimeWording;
    NSString *m_nsBankType;
    NSString *m_nsBindSerial;
    NSString *m_nsForbidWord;
    NSString *m_nsBalanceTelPhone;
    NSString *m_nsBalanceListUrl;
    _Bool m_bSupportOfflinePay;
    NSString *m_nsAvailFetchWording;
    NSString *m_nsMaxFetchWording;
    unsigned long long m_uiBalanceVersion;
    unsigned long long m_uiBalanceExpiredDate;
    NSString *_m_forbid_title;
    NSString *_m_forbid_url;
    NSString *_m_balanceShowWording;
    WCPayBalanceMenuInfo *_balance_menu_info;
    NSString *_m_balanceLogoUrl;
    unsigned long long _wallet_balance;
    unsigned long long _wallet_entrance_balance_switch_state;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBalanceMenuInfo *balance_menu_info; // @synthesize balance_menu_info=_balance_menu_info;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool m_bSupportOfflinePay; // @synthesize m_bSupportOfflinePay;
@property(retain, nonatomic) NSString *m_balanceLogoUrl; // @synthesize m_balanceLogoUrl=_m_balanceLogoUrl;
@property(retain, nonatomic) NSString *m_balanceShowWording; // @synthesize m_balanceShowWording=_m_balanceShowWording;
@property(retain, nonatomic) NSString *m_forbid_title; // @synthesize m_forbid_title=_m_forbid_title;
@property(retain, nonatomic) NSString *m_forbid_url; // @synthesize m_forbid_url=_m_forbid_url;
@property(retain, nonatomic) NSDate *m_ndFetchArriveTime; // @synthesize m_ndFetchArriveTime;
@property(retain, nonatomic) NSString *m_nsAvailFetchWording; // @synthesize m_nsAvailFetchWording;
@property(retain, nonatomic) NSString *m_nsBalanceListUrl; // @synthesize m_nsBalanceListUrl;
@property(retain, nonatomic) NSString *m_nsBalanceTelPhone; // @synthesize m_nsBalanceTelPhone;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsFetchArriveTimeWording; // @synthesize m_nsFetchArriveTimeWording;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(retain, nonatomic) NSString *m_nsMaxFetchWording; // @synthesize m_nsMaxFetchWording;
@property(nonatomic) unsigned long long m_uiAvailableBalance; // @synthesize m_uiAvailableBalance;
@property(nonatomic) unsigned long long m_uiBalanceExpiredDate; // @synthesize m_uiBalanceExpiredDate;
@property(nonatomic) unsigned long long m_uiBalanceVersion; // @synthesize m_uiBalanceVersion;
@property(nonatomic) unsigned long long m_uiFetchBalance; // @synthesize m_uiFetchBalance;
@property(nonatomic) unsigned long long m_uiFrozenBalance; // @synthesize m_uiFrozenBalance;
@property(nonatomic) unsigned long long m_uiTotalBalance; // @synthesize m_uiTotalBalance;
@property(nonatomic) unsigned long long wallet_balance; // @synthesize wallet_balance=_wallet_balance;
@property(nonatomic) unsigned long long wallet_entrance_balance_switch_state; // @synthesize wallet_entrance_balance_switch_state=_wallet_entrance_balance_switch_state;

@end

