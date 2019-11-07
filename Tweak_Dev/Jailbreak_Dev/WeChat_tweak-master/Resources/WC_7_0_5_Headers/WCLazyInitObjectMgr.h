//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer, NSMutableArray, NSRecursiveLock;

@interface WCLazyInitObjectMgr : NSObject
{
    _Bool _bDelayLoad;
    NSMutableArray *_lazyInitArray;
    MMTimer *_refreshTimer;
    double _currentTimeDis;
    NSRecursiveLock *_threadLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addLazyInitObject:(id)arg1;
@property(nonatomic) _Bool bDelayLoad; // @synthesize bDelayLoad=_bDelayLoad;
@property(nonatomic) double currentTimeDis; // @synthesize currentTimeDis=_currentTimeDis;
- (void)destroyAllEvent;
- (id)init;
- (_Bool)isDelayLoad;
@property(retain, nonatomic) NSMutableArray *lazyInitArray; // @synthesize lazyInitArray=_lazyInitArray;
@property(retain, nonatomic) MMTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSRecursiveLock *threadLock; // @synthesize threadLock=_threadLock;
- (void)timeToInit;
- (void)triggerObjectToInit:(id)arg1;

@end

