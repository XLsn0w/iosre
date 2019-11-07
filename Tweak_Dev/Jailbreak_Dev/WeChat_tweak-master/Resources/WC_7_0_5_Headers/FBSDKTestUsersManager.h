//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FBSDKTestUsersManager : NSObject
{
    NSString *_appID;
    NSString *_appSecret;
    NSMutableDictionary *_accounts;
}

+ (id)sharedInstanceForAppID:(id)arg1 appSecret:(id)arg2;
- (void).cxx_destruct;
- (void)addTestAccountWithPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)appAccessToken;
- (void)fetchExistingTestAccountsWithAfterCursor:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithAppID:(id)arg1 appSecret:(id)arg2;
- (void)makeFriendsWithFirst:(id)arg1 second:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)removeTestAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestTestAccountTokensWithArraysOfPermissions:(id)arg1 createIfNotFound:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)tokenDataForTokenString:(id)arg1 permissions:(id)arg2 userId:(id)arg3;
- (id)userIdAndTokenOfExistingAccountWithPermissions:(id)arg1 skip:(id)arg2;

@end

