//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, TSTrackedItem<TSFinalTrackedItem>;

@interface TSRecord : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _reported;
    long long _scene;
    long long _action;
    double _timestamp;
    TSTrackedItem<TSFinalTrackedItem> *_item;
    NSMutableDictionary *_externals;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *attacker;
@property(retain, nonatomic) NSString *command;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *externals; // @synthesize externals=_externals;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackedItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3 timestamp:(double)arg4;
@property(nonatomic) unsigned long long interfaceType;
- (_Bool)isGesturePasscode;
@property(retain, nonatomic) TSTrackedItem<TSFinalTrackedItem> *item; // @synthesize item=_item;
@property(retain, nonatomic) NSDictionary *marks;
@property(nonatomic) unsigned long long ownerPredictionResult;
@property(nonatomic) unsigned long long ownerQueryType;
@property(nonatomic) unsigned long long ownerReport;
@property(retain, nonatomic) NSString *passcodeContext;
@property(nonatomic) unsigned long long passcodeType;
@property(nonatomic) long long positionCode;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long segmentIdentifier;
- (void)setIsGesturePasscode:(_Bool)arg1;
@property(retain, nonatomic) NSArray *splitingPoints;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *userAge;
@property(retain, nonatomic) NSString *userHeight;
@property(retain, nonatomic) NSString *userIdentifier;
@property(retain, nonatomic) NSString *userSex;
@property(retain, nonatomic) NSString *userWeight;

@end

