//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSString;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_mutableEvents;
    unsigned long long _numSkipped;
    NSString *_tokenString;
    NSString *_appID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONStringForEvents:(_Bool)arg1;
- (void)addEvent:(id)arg1 isImplicit:(_Bool)arg2;
- (void)addEventsFromAppEventState:(id)arg1;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic, getter=areAllEventsImplicit) _Bool allEventsImplicit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *events;
- (id)extractReceiptData;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 appID:(id)arg2;
- (_Bool)isCompatibleWithAppEventsState:(id)arg1;
- (_Bool)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2;
@property(readonly, nonatomic) unsigned long long numSkipped; // @synthesize numSkipped=_numSkipped;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;

@end

