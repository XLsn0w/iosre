//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface QRCodeOAuthState : MMObject
{
    unsigned int _errCode;
    NSString *_redirectUrl;
    NSString *_nickName;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) unsigned int errCode; // @synthesize errCode=_errCode;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;

@end

