//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface OpLogDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

- (void).cxx_destruct;
- (_Bool)DeleteOplogInDB:(unsigned int)arg1;
- (unsigned int)GetOpLogCount;
- (id)GetOplogsAfterOplogId:(unsigned int)arg1 limit:(int)arg2;
- (_Bool)InsertOplogInDB:(id)arg1;
- (void)CloseDB;
- (_Bool)ConfigWithDir:(id)arg1;
- (void)dealloc;

@end

