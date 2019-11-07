//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNoDisturbInfo, NSData, NSString, SubscriptBrandInfo;

@interface CUsrInfo : NSObject
{
    NSString *m_nsUsrName;
    NSString *m_nsAliasName;
    NSString *m_nsNickName;
    unsigned int m_uiUin;
    NSString *m_nsEmail;
    NSString *m_nsMobile;
    unsigned int m_uiStatus;
    unsigned int m_uiSex;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    unsigned int m_uiPersonalCardStatus;
    NSString *m_nsHDHeadImgMD5;
    CNoDisturbInfo *m_oNoDisturbInfo;
    NSString *m_nsBottleHDImgMD5;
    NSData *m_dtBottleImg;
    unsigned int m_uiPluginInstallStatus;
    unsigned int m_uiCertificationFlag;
    NSString *m_nsCertificationInfo;
    NSString *m_nsWeiboAddress;
    NSString *m_nsWeiboNickName;
    unsigned int m_uiWeiboFlag;
    unsigned int m_uiWeiShiFlag;
    unsigned int m_uiFacebookFlag;
    NSString *m_nsFacebookID;
    NSString *m_nsFacebookName;
    NSString *m_nsFacebookToken;
    unsigned int m_uiPluginSwitch;
    NSString *m_nsGMailAccount;
    unsigned int m_uiGMailStatus;
    unsigned int m_uiGMailSwitch;
    NSString *m_nsExternalInfo;
    NSString *m_nsBrandSubscriptConfigUrl;
    unsigned int m_uiBrandSubscriptionSettings;
    SubscriptBrandInfo *m_subBrandInfo;
}

@property(retain, nonatomic) SubscriptBrandInfo *m_subBrandInfo; // @synthesize m_subBrandInfo;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(nonatomic) unsigned int m_uiGMailSwitch; // @synthesize m_uiGMailSwitch;
@property(nonatomic) unsigned int m_uiGMailStatus; // @synthesize m_uiGMailStatus;
@property(retain, nonatomic) NSString *m_nsGMailAccount; // @synthesize m_nsGMailAccount;
@property(nonatomic) unsigned int m_uiPluginSwitch; // @synthesize m_uiPluginSwitch;
@property(retain, nonatomic) NSString *m_nsFacebookToken; // @synthesize m_nsFacebookToken;
@property(retain, nonatomic) NSString *m_nsFacebookName; // @synthesize m_nsFacebookName;
@property(retain, nonatomic) NSString *m_nsFacebookID; // @synthesize m_nsFacebookID;
@property(nonatomic) unsigned int m_uiFacebookFlag; // @synthesize m_uiFacebookFlag;
@property(nonatomic) unsigned int m_uiWeiShiFlag; // @synthesize m_uiWeiShiFlag;
@property(nonatomic) unsigned int m_uiWeiboFlag; // @synthesize m_uiWeiboFlag;
@property(retain, nonatomic) NSString *m_nsWeiboNickName; // @synthesize m_nsWeiboNickName;
@property(retain, nonatomic) NSString *m_nsWeiboAddress; // @synthesize m_nsWeiboAddress;
@property(retain, nonatomic) NSString *m_nsCertificationInfo; // @synthesize m_nsCertificationInfo;
@property(nonatomic) unsigned int m_uiCertificationFlag; // @synthesize m_uiCertificationFlag;
@property(nonatomic) unsigned int m_uiPluginInstallStatus; // @synthesize m_uiPluginInstallStatus;
@property(retain, nonatomic) NSData *m_dtBottleImg; // @synthesize m_dtBottleImg;
@property(retain, nonatomic) NSString *m_nsBottleHDImgMD5; // @synthesize m_nsBottleHDImgMD5;
@property(retain, nonatomic) CNoDisturbInfo *m_oNoDisturbInfo; // @synthesize m_oNoDisturbInfo;
@property(retain, nonatomic) NSString *m_nsHDHeadImgMD5; // @synthesize m_nsHDHeadImgMD5;
@property(nonatomic) unsigned int m_uiPersonalCardStatus; // @synthesize m_uiPersonalCardStatus;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) NSString *m_nsMobile; // @synthesize m_nsMobile;
@property(retain, nonatomic) NSString *m_nsEmail; // @synthesize m_nsEmail;
@property(nonatomic) unsigned int m_uiUin; // @synthesize m_uiUin;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (id)description;
- (id)keyPaths;
- (_Bool)isHasPersonalCard;
- (id)init;

@end

