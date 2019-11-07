//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface WXGBackupIndexDB : NSObject
{
    WCTDatabase *m_db;
}

- (void).cxx_destruct;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)p_getRecoverInfoTable;
- (id)p_getMsgListTable;
- (id)getAllSessionName;
- (unsigned long long)getTotalSessionCount;
- (id)getRecoverInfoObjectOfSession:(id)arg1;
- (_Bool)deleteIndexObjectByMsgID:(id)arg1;
- (id)getMsgListIDForSessionName:(id)arg1;
- (id)getMsgListIDArray;
- (long long)getLastTimeOfSessionName:(id)arg1;
- (void)insertDataWithRecoverInfoObject:(id)arg1;
- (void)insertDataWithIndexObject:(id)arg1;
- (void)removeDBFile;
- (void)closeDB;
- (void)createDataBase;
- (void)dealloc;
- (id)init;

@end

