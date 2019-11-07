//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFacebookAuthExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class FacebookAuth, NSString;

@interface MMFacebookMgr : MMService <MMService, IFacebookAuthExt, PBMessageObserverDelegate>
{
    FacebookAuth *m_facebookAuth;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)clearFacebookToken;
- (void)dealloc;
- (void)fbDidLogin;
- (void)fbDidNotLogin:(_Bool)arg1;
- (id)getFacebookName;
- (_Bool)hasInitSDK;
- (_Bool)isFacebookBounded;
@property(retain, nonatomic) FacebookAuth *m_facebookAuth; // @synthesize m_facebookAuth;
- (_Bool)needSetFacebookUsageType;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)setFacebookUsageType:(int)arg1;
- (void)tryBindFacebook;
- (void)tryConnectFacebook;
- (_Bool)tryExtendToken;
- (void)tryUnBindFacebook;
- (void)updateTokenToSvr;
- (void)verifyAccessTokenValid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

