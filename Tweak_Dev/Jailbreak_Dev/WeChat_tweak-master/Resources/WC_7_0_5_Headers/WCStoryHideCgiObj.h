//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCStoryBaseCGIObj.h"

@class NSString;

@interface WCStoryHideCgiObj : WCStoryBaseCGIObj
{
    _Bool _isInvisibility;
    CDUnknownBlockType _dbSyncBlock;
    NSString *_dataItemTid;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
- (void)createRequest;
@property(retain, nonatomic) NSString *dataItemTid; // @synthesize dataItemTid=_dataItemTid;
@property(copy, nonatomic) CDUnknownBlockType dbSyncBlock; // @synthesize dbSyncBlock=_dbSyncBlock;
- (void)didFailWithError:(id)arg1 reponse:(id)arg2;
- (void)didGetResponse:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
- (id)initWithDataItemTid:(id)arg1 isInvisibility:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool isInvisibility; // @synthesize isInvisibility=_isInvisibility;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;

@end

