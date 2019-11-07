//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class DBContactBrand, DBContactChatRoom, DBContactHeadImage, DBContactLocal, DBContactOpenIM, DBContactOther, DBContactProfile, DBContactRemark, DBContactSocial, NSString;

@interface DBContactTable : NSObject <WCTTableCoding>
{
    unsigned int _type;
    unsigned int _certificationFlag;
    unsigned int _imgStatus;
    unsigned int _extFlag;
    NSString *_userName;
    NSString *_encodeUserName;
    DBContactLocal *_dbContactLocal;
    DBContactOther *_dbContactOther;
    DBContactRemark *_dbContactRemark;
    DBContactHeadImage *_dbContactHeadImage;
    DBContactProfile *_dbContactProfile;
    DBContactSocial *_dbContactSocial;
    DBContactChatRoom *_dbContactChatRoom;
    DBContactBrand *_dbContactBrand;
    NSString *_openIMAppid;
    DBContactOpenIM *_dbContactOpenIM;
}

+ (void)__wcdb_column_constraint_16:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_17:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_18:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_19:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTProperty *)certificationFlag;
+ (const struct WCTProperty *)dbContactBrand;
+ (const struct WCTProperty *)dbContactChatRoom;
+ (const struct WCTProperty *)dbContactHeadImage;
+ (const struct WCTProperty *)dbContactLocal;
+ (const struct WCTProperty *)dbContactOpenIM;
+ (const struct WCTProperty *)dbContactOther;
+ (const struct WCTProperty *)dbContactProfile;
+ (const struct WCTProperty *)dbContactRemark;
+ (const struct WCTProperty *)dbContactSocial;
+ (const struct WCTProperty *)encodeUserName;
+ (const struct WCTProperty *)extFlag;
+ (const struct WCTProperty *)imgStatus;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (const struct WCTProperty *)openIMAppid;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)userName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag=_certificationFlag;
@property(retain, nonatomic) DBContactBrand *dbContactBrand; // @synthesize dbContactBrand=_dbContactBrand;
@property(retain, nonatomic) DBContactChatRoom *dbContactChatRoom; // @synthesize dbContactChatRoom=_dbContactChatRoom;
@property(retain, nonatomic) DBContactHeadImage *dbContactHeadImage; // @synthesize dbContactHeadImage=_dbContactHeadImage;
@property(retain, nonatomic) DBContactLocal *dbContactLocal; // @synthesize dbContactLocal=_dbContactLocal;
@property(retain, nonatomic) DBContactOpenIM *dbContactOpenIM; // @synthesize dbContactOpenIM=_dbContactOpenIM;
@property(retain, nonatomic) DBContactOther *dbContactOther; // @synthesize dbContactOther=_dbContactOther;
@property(retain, nonatomic) DBContactProfile *dbContactProfile; // @synthesize dbContactProfile=_dbContactProfile;
@property(retain, nonatomic) DBContactRemark *dbContactRemark; // @synthesize dbContactRemark=_dbContactRemark;
@property(retain, nonatomic) DBContactSocial *dbContactSocial; // @synthesize dbContactSocial=_dbContactSocial;
@property(retain, nonatomic) NSString *encodeUserName; // @synthesize encodeUserName=_encodeUserName;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus=_imgStatus;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid=_openIMAppid;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

