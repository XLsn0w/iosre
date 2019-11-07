//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface GameCenterMsgDbModel : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    _Bool _showInMsgCenter;
    _Bool _unRead;
    unsigned int _localId;
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _recvTime;
    long long lastInsertedRowID;
    NSString *_svrMsgId;
    NSString *_content;
    NSString *_mergeId;
}

+ (void)__wcdb_column_constraint_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTProperty *)content;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)localId;
+ (const struct WCTProperty *)mergeId;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (const struct WCTProperty *)recvTime;
+ (const struct WCTProperty *)showInMsgCenter;
+ (const struct WCTProperty *)svrMsgId;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)unRead;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
- (id)initWithGameCenterMsg:(id)arg1;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(nonatomic) unsigned int recvTime; // @synthesize recvTime=_recvTime;
@property(nonatomic) _Bool showInMsgCenter; // @synthesize showInMsgCenter=_showInMsgCenter;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) _Bool unRead; // @synthesize unRead=_unRead;

@end

