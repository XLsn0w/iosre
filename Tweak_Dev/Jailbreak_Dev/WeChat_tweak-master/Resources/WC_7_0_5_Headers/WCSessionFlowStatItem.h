//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface WCSessionFlowStatItem : MMObject <NSCopying>
{
    _Bool _isReport;
    unsigned int _pId;
    unsigned int _seq;
    unsigned int _flowSeq;
    NSString *_pName;
    unsigned long long _enterTimestampMs;
    unsigned long long _quitTimestampMs;
    unsigned long long _interval;
    NSMutableArray *_sessionFlows;
    NSMutableArray *_mergeInfos;
    NSMutableArray *_matchPagePaths;
    NSMutableArray *_mergePagePathInfos;
    NSMutableArray *_businessDatas;
    NSMutableArray *_businessDataFilterCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *businessDataFilterCache; // @synthesize businessDataFilterCache=_businessDataFilterCache;
@property(retain, nonatomic) NSMutableArray *businessDatas; // @synthesize businessDatas=_businessDatas;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long enterTimestampMs; // @synthesize enterTimestampMs=_enterTimestampMs;
@property(nonatomic) unsigned int flowSeq; // @synthesize flowSeq=_flowSeq;
- (id)init;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(retain, nonatomic) NSMutableArray *matchPagePaths; // @synthesize matchPagePaths=_matchPagePaths;
@property(retain, nonatomic) NSMutableArray *mergeInfos; // @synthesize mergeInfos=_mergeInfos;
@property(retain, nonatomic) NSMutableArray *mergePagePathInfos; // @synthesize mergePagePathInfos=_mergePagePathInfos;
@property(nonatomic) unsigned int pId; // @synthesize pId=_pId;
@property(retain, nonatomic) NSString *pName; // @synthesize pName=_pName;
@property(nonatomic) unsigned long long quitTimestampMs; // @synthesize quitTimestampMs=_quitTimestampMs;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSMutableArray *sessionFlows; // @synthesize sessionFlows=_sessionFlows;
- (id)toString;

@end

