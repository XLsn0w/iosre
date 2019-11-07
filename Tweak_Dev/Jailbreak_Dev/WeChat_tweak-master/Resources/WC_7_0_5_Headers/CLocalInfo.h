//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSString;

@interface CLocalInfo : NSObject <NSCoding>
{
    _Bool m_bHasShowChooseView;
    _Bool m_bIsAuthPushLoginURL;
    _Bool m_IsIpadClassic;
    _Bool m_IsLoadOldSet;
    _Bool m_IsShowChooseVC;
    _Bool m_isAreadyLoginByIphone6Or6P;
    _Bool m_bIsOpenVoicePrint;
    _Bool m_isAreadyShowFontSettingTips;
    _Bool m_isAreadyChangeWeChatFontSetting;
    unsigned int m_uiLastUin;
    unsigned int m_uiRegType;
    unsigned int m_uiBindAcountFlag;
    unsigned int m_uiLastLoginAcountType;
    unsigned int m_uiFontLevel;
    unsigned int m_uiGlobalFontLevel;
    unsigned int m_uiWebviewFontLevel;
    unsigned int m_uiNetControlBitFlag;
    NSString *m_nsCurUsrName;
    NSString *m_nsLastUserName;
    NSString *m_nsLastLoginName;
    NSString *m_nsLastNickName;
    NSString *m_nsLastApnsToken;
    NSData *m_dtAutoAuthKey;
    NSData *m_dtLastKSid;
    NSData *m_nsLastSvrID;
    NSString *m_nsPushLoginURLTips;
    NSString *m_nsLastPhoneNumber;
    NSString *m_nsSystemContentSize;
}

+ (id)getLocalInfo:(_Bool *)arg1;
- (void).cxx_destruct;
- (void)copyFromLocalInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool m_IsIpadClassic; // @synthesize m_IsIpadClassic;
@property(nonatomic) _Bool m_IsLoadOldSet; // @synthesize m_IsLoadOldSet;
@property(nonatomic) _Bool m_IsShowChooseVC; // @synthesize m_IsShowChooseVC;
@property(nonatomic) _Bool m_bHasShowChooseView; // @synthesize m_bHasShowChooseView;
@property(nonatomic) _Bool m_bIsAuthPushLoginURL; // @synthesize m_bIsAuthPushLoginURL;
@property(nonatomic) _Bool m_bIsOpenVoicePrint; // @synthesize m_bIsOpenVoicePrint;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey;
@property(retain, nonatomic) NSData *m_dtLastKSid; // @synthesize m_dtLastKSid;
@property(nonatomic) _Bool m_isAreadyChangeWeChatFontSetting; // @synthesize m_isAreadyChangeWeChatFontSetting;
@property(nonatomic) _Bool m_isAreadyLoginByIphone6Or6P; // @synthesize m_isAreadyLoginByIphone6Or6P;
@property(nonatomic) _Bool m_isAreadyShowFontSettingTips; // @synthesize m_isAreadyShowFontSettingTips;
@property(retain, nonatomic) NSString *m_nsCurUsrName; // @synthesize m_nsCurUsrName;
@property(retain, nonatomic) NSString *m_nsLastApnsToken; // @synthesize m_nsLastApnsToken;
@property(retain, nonatomic) NSString *m_nsLastLoginName; // @synthesize m_nsLastLoginName;
@property(retain, nonatomic) NSString *m_nsLastNickName; // @synthesize m_nsLastNickName;
@property(copy, nonatomic) NSString *m_nsLastPhoneNumber; // @synthesize m_nsLastPhoneNumber;
@property(retain, nonatomic) NSData *m_nsLastSvrID; // @synthesize m_nsLastSvrID;
@property(retain, nonatomic) NSString *m_nsLastUserName; // @synthesize m_nsLastUserName;
@property(retain, nonatomic) NSString *m_nsPushLoginURLTips; // @synthesize m_nsPushLoginURLTips;
@property(retain, nonatomic) NSString *m_nsSystemContentSize; // @synthesize m_nsSystemContentSize;
@property(nonatomic) unsigned int m_uiBindAcountFlag; // @synthesize m_uiBindAcountFlag;
@property(nonatomic) unsigned int m_uiFontLevel; // @synthesize m_uiFontLevel;
@property(nonatomic) unsigned int m_uiGlobalFontLevel; // @synthesize m_uiGlobalFontLevel;
@property(nonatomic) unsigned int m_uiLastLoginAcountType; // @synthesize m_uiLastLoginAcountType;
@property(nonatomic) unsigned int m_uiLastUin; // @synthesize m_uiLastUin;
@property(nonatomic) unsigned int m_uiNetControlBitFlag; // @synthesize m_uiNetControlBitFlag;
@property(nonatomic) unsigned int m_uiRegType; // @synthesize m_uiRegType;
@property(nonatomic) unsigned int m_uiWebviewFontLevel; // @synthesize m_uiWebviewFontLevel;

@end

