//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidasBaseReqParams : NSObject
{
    NSString *_offerId;
    NSString *_openId;
    NSString *_openKey;
    NSString *_sessionId;
    NSString *_sessionType;
    NSString *_pf;
    NSString *_environment;
}

- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
- (_Bool)isValid;
@property(retain, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;

@end

