//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString, SKBuiltinBuffer_t;

@interface GetPOIListMgr : MMService <PBMessageObserverDelegate, MMService>
{
    SKBuiltinBuffer_t *_nearBuff;
    SKBuiltinBuffer_t *_searchBuff;
    struct CLLocationCoordinate2D _lastCoordinate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)autoSearchPOIList:(struct CLLocationCoordinate2D)arg1 Keyword:(id)arg2 Scene:(unsigned int)arg3 UserActuallyLocation:(id)arg4 StartFromFirst:(_Bool)arg5;
- (void)dealloc;
- (_Bool)getNearPOIList:(struct CLLocationCoordinate2D)arg1 StartFromFirst:(_Bool)arg2 Scene:(unsigned int)arg3 UserActuallyLocation:(id)arg4;
- (_Bool)getSearchPOIList:(struct CLLocationCoordinate2D)arg1 KeyWord:(id)arg2 StartFromFirst:(_Bool)arg3 Scene:(unsigned int)arg4 UserActuallyLocation:(id)arg5;
@property(retain, nonatomic) SKBuiltinBuffer_t *nearBuff; // @synthesize nearBuff=_nearBuff;
@property(retain, nonatomic) SKBuiltinBuffer_t *searchBuff; // @synthesize searchBuff=_searchBuff;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

