//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface SessionDeleteInfo : NSObject <WCTTableCoding>
{
    NSString *m_userName;
    unsigned int m_lastMsgSequence;
    unsigned int m_deleteTime;
    long long _SESSION_DEL_COL_INTRES1;
    long long _SESSION_DEL_COL_INTRES2;
    long long _SESSION_DEL_COL_INTRES3;
    NSString *_SESSION_DEL_COL_STRRES1;
    NSString *_SESSION_DEL_COL_STRRES2;
    NSString *_SESSION_DEL_COL_STRRES3;
}

+ (const struct WCTProperty *)SESSION_DEL_COL_STRRES3;
+ (const struct WCTProperty *)SESSION_DEL_COL_STRRES2;
+ (const struct WCTProperty *)SESSION_DEL_COL_STRRES1;
+ (const struct WCTProperty *)SESSION_DEL_COL_INTRES3;
+ (const struct WCTProperty *)SESSION_DEL_COL_INTRES2;
+ (const struct WCTProperty *)SESSION_DEL_COL_INTRES1;
+ (const struct WCTProperty *)m_deleteTime;
+ (const struct WCTProperty *)m_lastMsgSequence;
+ (const struct WCTProperty *)m_userName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES3; // @synthesize SESSION_DEL_COL_STRRES3=_SESSION_DEL_COL_STRRES3;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES2; // @synthesize SESSION_DEL_COL_STRRES2=_SESSION_DEL_COL_STRRES2;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES1; // @synthesize SESSION_DEL_COL_STRRES1=_SESSION_DEL_COL_STRRES1;
@property(nonatomic) long long SESSION_DEL_COL_INTRES3; // @synthesize SESSION_DEL_COL_INTRES3=_SESSION_DEL_COL_INTRES3;
@property(nonatomic) long long SESSION_DEL_COL_INTRES2; // @synthesize SESSION_DEL_COL_INTRES2=_SESSION_DEL_COL_INTRES2;
@property(nonatomic) long long SESSION_DEL_COL_INTRES1; // @synthesize SESSION_DEL_COL_INTRES1=_SESSION_DEL_COL_INTRES1;
@property(nonatomic) unsigned int m_deleteTime; // @synthesize m_deleteTime;
@property(nonatomic) unsigned int m_lastMsgSequence; // @synthesize m_lastMsgSequence;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

