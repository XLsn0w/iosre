//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCSTrainModelRoute : NSObject
{
    _Bool _isLeaf;
    _Bool _isExtBooster;
    NSString *_key;
    unsigned long long _eCond;
    unsigned long long _oper;
    double _value;
    NSString *_trueKey;
    NSString *_falseKey;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long eCond; // @synthesize eCond=_eCond;
@property(retain, nonatomic) NSString *falseKey; // @synthesize falseKey=_falseKey;
@property(nonatomic) _Bool isExtBooster; // @synthesize isExtBooster=_isExtBooster;
@property(nonatomic) _Bool isLeaf; // @synthesize isLeaf=_isLeaf;
@property(nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long oper; // @synthesize oper=_oper;
- (_Bool)parseCondByCond1:(id)arg1 cond2:(id)arg2;
@property(retain, nonatomic) NSString *trueKey; // @synthesize trueKey=_trueKey;
@property(nonatomic) double value; // @synthesize value=_value;

@end

