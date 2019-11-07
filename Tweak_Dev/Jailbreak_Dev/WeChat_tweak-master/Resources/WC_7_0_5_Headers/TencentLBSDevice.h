//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TencentLBSDevice : NSObject
{
    _Bool _canUseHttp;
    NSString *_model;
    NSString *_systemVersion;
    NSString *_identifierForVendor;
    NSString *_identifierForIdentifier;
    NSString *_appName;
    NSString *_accessTokenMD5;
    NSString *_sdkVersion;
    NSString *_appLabel;
    NSString *_appVersion;
    NSString *_deviceModel;
    NSString *_phoneNumber;
}

+ (id)currentDevice;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessTokenMD5; // @synthesize accessTokenMD5=_accessTokenMD5;
@property(copy, nonatomic) NSString *appLabel; // @synthesize appLabel=_appLabel;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool canUseHttp; // @synthesize canUseHttp=_canUseHttp;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (id)deviceModelName;
- (void)getStoredId;
@property(copy, nonatomic) NSString *identifierForIdentifier; // @synthesize identifierForIdentifier=_identifierForIdentifier;
@property(copy, nonatomic) NSString *identifierForVendor; // @synthesize identifierForVendor=_identifierForVendor;
- (id)init;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
- (_Bool)supportATS;

@end

