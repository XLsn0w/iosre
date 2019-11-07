//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface WCCardOfflineCodeInfoData : MMObject <WCTTableCoding>
{
    unsigned int status;
    NSString *cardId;
    NSString *qrCodeId;
    NSData *code;
}

+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTProperty *)cardId;
+ (const struct WCTProperty *)code;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (const struct WCTProperty *)qrCodeId;
+ (const struct WCTProperty *)status;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSData *code; // @synthesize code;
@property(retain, nonatomic) NSString *qrCodeId; // @synthesize qrCodeId;
@property(nonatomic) unsigned int status; // @synthesize status;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

