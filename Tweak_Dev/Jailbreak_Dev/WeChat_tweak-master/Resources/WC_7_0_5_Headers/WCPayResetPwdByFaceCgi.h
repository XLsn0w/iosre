//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString;

@interface WCPayResetPwdByFaceCgi : WCPayBaseTenPayCgi
{
    NSString *_auth_token;
    NSString *_passwd;
    id <WCPayResetPwdByFaceCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *auth_token; // @synthesize auth_token=_auth_token;
@property(nonatomic) __weak id <WCPayResetPwdByFaceCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property(retain, nonatomic) NSString *passwd; // @synthesize passwd=_passwd;
- (void)startRequest;

@end

