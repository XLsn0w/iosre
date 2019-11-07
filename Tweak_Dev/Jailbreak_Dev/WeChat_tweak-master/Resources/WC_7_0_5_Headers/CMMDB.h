//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer, NSArray, NSRecursiveLock, NewContactDB, OpLogDB, WCDBSharedLockCenter, WCTDatabase, WCTTable;

@interface CMMDB : NSObject
{
    NSRecursiveLock *m_lockMMDB;
    OpLogDB *m_oplogWcdb;
    MMTimer *m_backupTimer;
    WCTDatabase *m_mmdb;
    NewContactDB *m_contactDB;
    NSArray *m_messages;
    WCTTable *m_tableContact;
    WCTTable *m_tableContactExt;
    WCTTable *m_tableContactMeta;
    WCTTable *m_tableRevokeMsg;
    WCTTable *m_tableSecMsg;
    WCTTable *m_tableBottle;
    WCTTable *m_tableBottleContact;
    WCTTable *m_tableMassSendContact;
    WCTDatabase *_m_brandMsgDB;
    WCTTable *_m_tableQQContact;
    WCTTable *_m_tableMessageBizExt;
    WCDBSharedLockCenter *_lockCenter;
    unsigned long long _state;
}

+ (id)brandMsgDBPathWithDocDir:(id)arg1 userName:(id)arg2;
+ (id)dbPathWithDocDir:(id)arg1 userName:(id)arg2;
+ (Class)getClassFromMessageTableName:(id)arg1;
+ (id)helloMessageTableName:(id)arg1;
+ (id)md5StringFromUserName:(id)arg1;
+ (id)messageDBPathWithDocDir:(id)arg1 userName:(id)arg2 index:(int)arg3;
+ (id)messageExtTableName:(id)arg1;
+ (id)messageTableName:(id)arg1;
- (void).cxx_destruct;
- (void)Close;
- (void)Close:(CDUnknownBlockType)arg1;
- (void)CloseOplogDB;
- (id)ContactExtTableName;
- (id)ContactTableName;
- (_Bool)CreateHelloMessageTable:(id)arg1;
- (_Bool)CreateMessageExtTable:(id)arg1;
- (_Bool)CreateMessageTable:(id)arg1;
- (void)CreateNewWCPayBizExtTable:(unsigned int)arg1;
- (void)CreateWCPayMessageBizExtTable;
- (_Bool)DeleteAllHelloMessageByChatName:(id)arg1 helloUser:(id)arg2;
- (_Bool)DeleteBottle:(unsigned int)arg1;
- (_Bool)DeleteBottleContact:(id)arg1;
- (_Bool)DeleteContactAndExtByUserNames:(id)arg1;
- (_Bool)DeleteContactByUserName:(id)arg1;
- (_Bool)DeleteContactExtByUserName:(id)arg1;
- (_Bool)DeleteMassSendContact:(id)arg1;
- (_Bool)DeleteMessageAndExtForBatchDeleteByChatName:(id)arg1 localIDs:(id)arg2;
- (_Bool)DeleteMessageByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)DeleteMessageExtByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)DeleteMessageExtForBatchDeleteByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)DeleteMessageForBatchDeleteByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)DeleteOplog:(unsigned int)arg1;
- (void)DropMessageExtTable:(id)arg1;
- (void)DropMessageTable:(id)arg1;
- (id)GetAllBottle:(const SyntaxList_7f15fe8c *)arg1;
- (id)GetAllBottleContact:(const SyntaxList_7f15fe8c *)arg1;
- (id)GetAllMassSendContact;
- (id)GetBottleByLocalID:(unsigned int)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2;
- (id)GetBottleContact:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2;
- (id)GetContactAndExtWithContactProperty:(const SyntaxList_d92903c3 *)arg1 contactExtProperty:(const SyntaxList_d92903c3 *)arg2 fromTables:(id)arg3 where:(const struct Expression *)arg4 getError:(id *)arg5 limit:(int)arg6;
- (id)GetContactByUserName:(id)arg1 property:(const SyntaxList_7f15fe8c *)arg2;
- (id)GetContactExtByUserName:(id)arg1 property:(const SyntaxList_7f15fe8c *)arg2;
- (id)GetContactsWhere:(const struct Expression *)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 getError:(id *)arg3;
- (unsigned int)GetCountOfBottleContact;
- (unsigned int)GetCountOfNewWCPayBizExtOnDistinctProperty:(const struct WCTProperty *)arg1 Where:(const struct Expression *)arg2 bizType:(unsigned int)arg3;
- (unsigned int)GetFriendMetaFlag:(id)arg1;
- (id)GetHelloMessageByChatName:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 where:(const struct Expression *)arg3 order:(const SyntaxList_64caf671 *)arg4;
- (unsigned int)GetHelloMessageCountByChatName:(id)arg1 withProperty:(const struct ResultColumn *)arg2 Where:(const struct Expression *)arg3;
- (id)GetHelloMessageTable:(id)arg1;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 where:(const struct Expression *)arg3 order:(const SyntaxList_64caf671 *)arg4 groupBy:(const SyntaxList_04d0acd9 *)arg5 limit:(int)arg6;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 where:(const struct Expression *)arg3 order:(const SyntaxList_64caf671 *)arg4 limit:(int)arg5;
- (unsigned int)GetLastUpdateTimeOfUser:(id)arg1;
- (unsigned int)GetLocalIDInBottleByBottleID:(id)arg1;
- (unsigned int)GetMaxCreateTimeInHelloMessage:(id)arg1;
- (unsigned int)GetMaxCreateTimeInMessage:(id)arg1;
- (unsigned int)GetMaxMessageLocalIdByChatName:(id)arg1 where:(const struct Expression *)arg2;
- (id)GetMessageByChatName:(id)arg1 OnProperty:(const SyntaxList_7f15fe8c *)arg2 where:(const struct Expression *)arg3;
- (unsigned int)GetMessageCountByChatName:(id)arg1 where:(const struct Expression *)arg2;
- (id)GetMessageExtTable:(id)arg1;
- (id)GetMessageExtyChatName:(id)arg1 OnProperty:(const SyntaxList_7f15fe8c *)arg2 where:(const struct Expression *)arg3;
- (id)GetMessageTable:(id)arg1;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 where:(const struct Expression *)arg3 order:(const SyntaxList_64caf671 *)arg4 limit:(int)arg5;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 where:(const struct Expression *)arg3 order:(const SyntaxList_64caf671 *)arg4 limit:(int)arg5 hasError:(_Bool *)arg6;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1 where:(const struct Expression *)arg2;
- (id)GetMsgExtInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned int)arg3;
- (id)GetMsgSourceInMessageExt:(id)arg1 localId:(unsigned int)arg2;
- (id)GetMsgSourceInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned int)arg3;
- (id)GetNewWCPayBizExtTable:(unsigned int)arg1;
- (id)GetOplogsAfterOplogId:(unsigned int)arg1 limit:(int)arg2;
- (id)GetRevokeMsgBySvrId:(long long)arg1;
- (id)GetSecMsgBySvrId:(long long)arg1;
- (unsigned int)GetServerIDInBottleByLocalID:(unsigned int)arg1;
- (void)InitMMDB:(id)arg1 UsrName:(id)arg2 NewUser:(_Bool *)arg3;
- (_Bool)InsertBackupMessageExts:(id)arg1 withChatName:(id)arg2 onProperty:(const SyntaxList_7f15fe8c *)arg3;
- (id)InsertBackupMessages:(id)arg1 withChatName:(id)arg2 onProperty:(const SyntaxList_7f15fe8c *)arg3;
- (unsigned int)InsertBottle:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2;
- (_Bool)InsertBottleContact:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2;
- (unsigned int)InsertHelloMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const SyntaxList_7f15fe8c *)arg3;
- (unsigned int)InsertMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const SyntaxList_7f15fe8c *)arg3;
- (_Bool)InsertMessageExt:(id)arg1 withChatName:(id)arg2 onProperty:(const SyntaxList_7f15fe8c *)arg3;
- (_Bool)InsertOplog:(id)arg1;
- (_Bool)InsertRevokeMessage:(id)arg1;
- (_Bool)InsertSecMessage:(id)arg1;
- (_Bool)IsContactExist:(id)arg1;
- (_Bool)IsContactExtExist:(id)arg1;
- (_Bool)IsMessageExistWithChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)IsMessageExtExistWithChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)RemoveOldRevokeMessagesBefore:(unsigned int)arg1;
- (_Bool)RemoveOldSecMessagesBefore:(unsigned int)arg1;
- (void)SetupOplogDBWithDocDir:(id)arg1 userName:(id)arg2;
- (_Bool)UpdateBottle:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 byLocalId:(unsigned int)arg3;
- (_Bool)UpdateBottleContact:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 byUserName:(id)arg3;
- (_Bool)UpdateHelloMessage:(id)arg1 byChatName:(id)arg2 onProperty:(const SyntaxList_7f15fe8c *)arg3 where:(const struct Expression *)arg4;
- (_Bool)UpdateMessageByChatName:(id)arg1 localId:(unsigned int)arg2 withDBMessage:(id)arg3 OnProperty:(const SyntaxList_7f15fe8c *)arg4;
- (_Bool)UpdateMessageByChatName:(id)arg1 withDBMessages:(id)arg2 OnProperty:(const SyntaxList_7f15fe8c *)arg3;
- (_Bool)UpdateMessageExtFlag:(unsigned int)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (_Bool)UpdateMessageExtSource:(id)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (_Bool)UpdateMessageStatus:(unsigned int)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (_Bool)UpdateWCPayMessageBizStatus:(unsigned int)arg1 byChatName:(id)arg2 byMsgLocalId:(unsigned int)arg3 bizType:(unsigned int)arg4;
- (void)asyncMigrate:(id)arg1;
- (void)autoMigrateBrand:(id)arg1;
- (void)autoMigrateMessage:(id)arg1 atIndex:(int)arg2;
- (void)backup;
- (id)backupPaths;
- (void)cleanOneTable:(id)arg1;
- (void)clearBackup;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (void)continueCleanUp;
- (void)createBottleTable;
- (void)createContactTable;
- (void)createEmoticonTable;
- (void)createMessagesTable;
- (void)createOtherTable;
- (void)createTables;
- (id)dbPath;
- (id)dbPaths;
- (void)dealloc;
- (_Bool)deleteNewWCPayBizExtMsg:(const struct Expression *)arg1 OnType:(unsigned int)arg2;
- (_Bool)deleteWCPayMessageBizExtWithChatname:(id)arg1;
- (_Bool)deleteWCPayMessageBizExtWithChatname:(id)arg1 OnType:(unsigned int)arg2;
- (_Bool)deleteWCPayMessageBizExtWithChatname:(id)arg1 bizId:(id)arg2 onType:(unsigned int)arg3;
- (void)finishMigration;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (unsigned int)getContactCount;
- (id)getOrCreateMigrationInfos:(id)arg1;
- (unsigned long long)getTableLocation:(id)arg1;
- (id)getTableRepairMetas;
- (id)getTargetingDatabaseWithUserName:(id)arg1;
- (id)getWCPayMessageBizExtArrayOnProperty:(const SyntaxList_7f15fe8c *)arg1 where:(const struct Expression *)arg2;
- (id)getWCPayMessageBizExtArrayOnProperty:(const SyntaxList_7f15fe8c *)arg1 where:(const struct Expression *)arg2 OnType:(unsigned int)arg3;
- (int)indexOfDatabaseForMD5UserName:(id)arg1;
- (int)indexOfDatabaseForTableName:(id)arg1;
- (int)indexOfDatabaseForUserName:(id)arg1;
- (id)init;
- (_Bool)insertWCPayMessageBizExt:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2;
- (_Bool)insertWCPayMessageBizExt:(id)arg1 onProperty:(const SyntaxList_7f15fe8c *)arg2 type:(unsigned int)arg3;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (_Bool)isCleanUpFinished;
- (_Bool)isMigrationDisabled:(unsigned long long)arg1;
- (_Bool)isNewWCPayBizExtExistWithChatname:(id)arg1 localId:(unsigned int)arg2 type:(unsigned int)arg3;
- (_Bool)isWCPayMessageBizExtExistWithChatname:(id)arg1 localId:(unsigned int)arg2;
- (void)lazyCreateBrand:(id)arg1;
- (optional_a953c506)lazyCreateBrandTable:(id)arg1;
- (void)lazyCreateMessage:(id)arg1 atIndex:(int)arg2;
- (optional_a953c506)lazyCreateMessageTable:(id)arg1;
- (void)lazyVacuum:(id)arg1;
@property(readonly, nonatomic) WCDBSharedLockCenter *lockCenter; // @synthesize lockCenter=_lockCenter;
@property(retain) WCTDatabase *m_brandMsgDB; // @synthesize m_brandMsgDB=_m_brandMsgDB;
@property(retain) NewContactDB *m_contactDB; // @synthesize m_contactDB;
@property(retain) NSArray *m_messages; // @synthesize m_messages;
@property(retain) WCTDatabase *m_mmdb; // @synthesize m_mmdb;
@property(retain, nonatomic) OpLogDB *m_oplogWcdb; // @synthesize m_oplogWcdb;
@property(retain) WCTTable *m_tableBottle; // @synthesize m_tableBottle;
@property(retain) WCTTable *m_tableBottleContact; // @synthesize m_tableBottleContact;
@property(retain) WCTTable *m_tableContact; // @synthesize m_tableContact;
@property(retain) WCTTable *m_tableContactExt; // @synthesize m_tableContactExt;
@property(retain) WCTTable *m_tableContactMeta; // @synthesize m_tableContactMeta;
@property(retain) WCTTable *m_tableMassSendContact; // @synthesize m_tableMassSendContact;
@property(retain) WCTTable *m_tableMessageBizExt; // @synthesize m_tableMessageBizExt=_m_tableMessageBizExt;
@property(retain) WCTTable *m_tableQQContact; // @synthesize m_tableQQContact=_m_tableQQContact;
@property(retain) WCTTable *m_tableRevokeMsg; // @synthesize m_tableRevokeMsg;
@property(retain) WCTTable *m_tableSecMsg; // @synthesize m_tableSecMsg;
- (void)markMigrationAsDisable:(unsigned long long)arg1;
- (void)markMigrationAsFinished:(unsigned long long)arg1;
- (void)markMigrationAsStarted:(unsigned long long)arg1;
- (id)migrationInfoPath;
- (id)oplogDBDirWithDocDir:(id)arg1 userName:(id)arg2;
- (void)restartBackup;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 forHelloMessageOfUser:(id)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 forMessageOfUser:(id)arg2;
- (void)setAutoBackup:(_Bool)arg1;
- (void)setSequence:(int)arg1 forTableNames:(id)arg2;
@property unsigned long long state; // @synthesize state=_state;
- (optional_a953c506)shouldCreateTable:(id)arg1 inDatabase:(id)arg2;
- (void)startMigrate:(id)arg1;
- (void)startMigrateBrand:(id)arg1;
- (void)startMigrateMessage:(id)arg1;
- (void)stepMigrate:(id)arg1;
- (void)stopBackup;
- (void)tryMigrate;

@end

