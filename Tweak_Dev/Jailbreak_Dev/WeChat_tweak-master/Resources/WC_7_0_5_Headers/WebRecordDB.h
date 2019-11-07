//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCTDatabase, WCTTable;

@interface WebRecordDB : MMObject
{
    WCTDatabase *_db;
    WCTTable *_webRecordTable;
}

- (void).cxx_destruct;
- (void)closeDB;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (_Bool)db_DeleteAllRecord;
- (_Bool)db_DeleteRecordInfoDataByUrl:(id)arg1;
- (id)db_GetAllRecordInfoData;
- (unsigned int)db_GetRecordCount;
- (id)db_GetRecordInfoDataByUrl:(id)arg1;
- (_Bool)db_InsertOrUpdateRecordInfoData:(id)arg1;
- (_Bool)db_tryDeleteOutOfDateLink;
- (void)deleteRedundent;
- (_Bool)initDB;
@property(retain, nonatomic) WCTTable *webRecordTable; // @synthesize webRecordTable=_webRecordTable;

@end

