//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QDBDatabase, QDataStoreSelectorHandDrawMap, QDataStoreSelectorSpecialmap, QDataStoreSelectorWorldmap;

@interface QDataCacheSql : NSObject
{
    QDataStoreSelectorWorldmap *_worldmap;
    QDataStoreSelectorSpecialmap *_specialmap;
    QDataStoreSelectorHandDrawMap *_handDrawMap;
    NSString *_dbpath;
    QDBDatabase *_db;
}

+ (id)singlton;
@property(retain, nonatomic) QDBDatabase *db; // @synthesize db=_db;
@property(retain, nonatomic) NSString *dbpath; // @synthesize dbpath=_dbpath;
@property(retain, nonatomic) QDataStoreSelectorHandDrawMap *handDrawMap; // @synthesize handDrawMap=_handDrawMap;
@property(retain, nonatomic) QDataStoreSelectorSpecialmap *specialmap; // @synthesize specialmap=_specialmap;
@property(retain, nonatomic) QDataStoreSelectorWorldmap *worldmap; // @synthesize worldmap=_worldmap;
- (void).cxx_destruct;
- (_Bool)executeInsert:(id)arg1;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)executeQuery:(id)arg1;
- (void)resetHandDrawMapData;
- (void)resetWorldMapData;
- (id)encryptItem:(id)arg1;
- (id)decryptItem:(id)arg1;
- (id)selector:(id)arg1;
- (void)close;
- (void)open;
- (void)initData;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

