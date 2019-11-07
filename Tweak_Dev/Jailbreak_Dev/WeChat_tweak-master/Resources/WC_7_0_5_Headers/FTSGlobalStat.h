//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FTSGlobalStat : NSObject
{
    unsigned int _msgIndexCount;
    unsigned int _favIndexCount;
    unsigned int _allContactCount;
    unsigned int _singleContactResultCnt;
    unsigned int _groupContactResultCnt;
    unsigned int _brandContactResultCnt;
    unsigned int _addressBookResultCnt;
    NSString *_searchId;
    NSMutableDictionary *_moduleStat;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int addressBookResultCnt; // @synthesize addressBookResultCnt=_addressBookResultCnt;
@property(nonatomic) unsigned int allContactCount; // @synthesize allContactCount=_allContactCount;
@property(nonatomic) unsigned int brandContactResultCnt; // @synthesize brandContactResultCnt=_brandContactResultCnt;
- (void)doReportOneGlobalSearch:(id)arg1;
@property(nonatomic) unsigned int favIndexCount; // @synthesize favIndexCount=_favIndexCount;
- (void)finishContactSearchWithSingleCount:(unsigned int)arg1 groupCount:(unsigned int)arg2 brandCount:(unsigned int)arg3 abfCount:(unsigned int)arg4;
- (void)finishModule:(unsigned long long)arg1 withResultCount:(unsigned int)arg2;
- (id)getModuleForType:(unsigned long long)arg1;
@property(nonatomic) unsigned int groupContactResultCnt; // @synthesize groupContactResultCnt=_groupContactResultCnt;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *moduleStat; // @synthesize moduleStat=_moduleStat;
@property(nonatomic) unsigned int msgIndexCount; // @synthesize msgIndexCount=_msgIndexCount;
- (id)parseModuleResultCount;
- (id)parseModuleTime;
- (void)removeModule:(unsigned long long)arg1;
@property(nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(nonatomic) unsigned int singleContactResultCnt; // @synthesize singleContactResultCnt=_singleContactResultCnt;
- (void)startGlobalModule;
- (void)startModeule:(unsigned long long)arg1;

@end

