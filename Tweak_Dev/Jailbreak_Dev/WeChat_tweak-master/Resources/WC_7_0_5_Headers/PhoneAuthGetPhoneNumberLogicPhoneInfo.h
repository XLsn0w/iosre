//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface PhoneAuthGetPhoneNumberLogicPhoneInfo : MMObject
{
    _Bool _isBindWechat;
    _Bool _needAuth;
    _Bool _allowSendSms;
    NSString *_mobile;
    NSString *_showMobile;
    NSString *_encryptData;
    NSString *_iv;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowSendSms; // @synthesize allowSendSms=_allowSendSms;
@property(copy, nonatomic) NSString *encryptData; // @synthesize encryptData=_encryptData;
- (id)getResultDic;
@property(nonatomic) _Bool isBindWechat; // @synthesize isBindWechat=_isBindWechat;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) _Bool needAuth; // @synthesize needAuth=_needAuth;
@property(copy, nonatomic) NSString *showMobile; // @synthesize showMobile=_showMobile;

@end

