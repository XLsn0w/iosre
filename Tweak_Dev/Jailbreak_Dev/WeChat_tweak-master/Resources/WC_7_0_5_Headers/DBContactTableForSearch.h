//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface DBContactTableForSearch : NSObject <WCTTableCoding>
{
    NSString *_userName;
    NSData *_dbContactRemark;
}

+ (const struct WCTProperty *)__wcdb_synthesize_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_22:(struct WCTBinding *)arg1;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTProperty *)dbContactRemark;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (const struct WCTProperty *)userName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *dbContactRemark; // @synthesize dbContactRemark=_dbContactRemark;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

