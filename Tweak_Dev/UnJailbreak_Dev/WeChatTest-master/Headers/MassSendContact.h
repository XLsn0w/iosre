//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MassSendContact : NSObject <WCTTableCoding>
{
    NSString *m_nsUsrName;
    NSString *m_nsDetail;
    unsigned int m_uiToListCount;
    unsigned int ConIntRes2;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
}

+ (const struct WCTProperty *)ConStrRes2;
+ (const struct WCTProperty *)ConStrRes1;
+ (const struct WCTProperty *)ConIntRes2;
+ (const struct WCTProperty *)m_uiToListCount;
+ (const struct WCTProperty *)m_nsDetail;
+ (const struct WCTProperty *)m_nsUsrName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int m_uiToListCount; // @synthesize m_uiToListCount;
@property(retain, nonatomic) NSString *m_nsDetail; // @synthesize m_nsDetail;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

