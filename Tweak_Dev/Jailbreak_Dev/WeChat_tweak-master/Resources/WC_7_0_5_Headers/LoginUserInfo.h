//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface LoginUserInfo : NSObject <PBCoding>
{
    _Bool m_bIsOpenVoicePrint;
    _Bool m_bIsOpenFace;
    unsigned int m_uiBindAcountFlag;
    unsigned int m_uiLastLoginAcountType;
    NSString *m_nsUserName;
    NSString *m_nsLoginName;
    NSString *m_nsNickName;
    unsigned long long m_ui64Uin;
    NSString *m_nsPhoneNumber;
    NSString *m_nsNoPwdLoginTicket;
    NSData *m_dtAutoAuthKey;
    NSString *m_bindLoginUserName;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)getLastLoginName;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool m_bIsOpenFace; // @synthesize m_bIsOpenFace;
@property(nonatomic) _Bool m_bIsOpenVoicePrint; // @synthesize m_bIsOpenVoicePrint;
@property(retain, nonatomic) NSString *m_bindLoginUserName; // @synthesize m_bindLoginUserName;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey;
@property(retain, nonatomic) NSString *m_nsLoginName; // @synthesize m_nsLoginName;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsNoPwdLoginTicket; // @synthesize m_nsNoPwdLoginTicket;
@property(retain, nonatomic) NSString *m_nsPhoneNumber; // @synthesize m_nsPhoneNumber;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(nonatomic) unsigned long long m_ui64Uin; // @synthesize m_ui64Uin;
@property(nonatomic) unsigned int m_uiBindAcountFlag; // @synthesize m_uiBindAcountFlag;
@property(nonatomic) unsigned int m_uiLastLoginAcountType; // @synthesize m_uiLastLoginAcountType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

