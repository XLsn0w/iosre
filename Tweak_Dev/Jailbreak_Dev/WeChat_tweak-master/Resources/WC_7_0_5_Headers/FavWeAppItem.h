//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavWeAppItem : NSObject
{
    NSString *_appUserName;
    NSString *_title;
    NSString *_desc;
    NSString *_thumbUrl;
    NSString *_pagePath;
    unsigned int _debugMode;
    unsigned int _appType;
    unsigned int _pkgType;
    NSString *_userName;
    NSString *_sourceDisplayName;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(copy, nonatomic) NSString *sourceDisplayName; // @synthesize sourceDisplayName=_sourceDisplayName;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

