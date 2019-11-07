//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "NewTipsNetworkLogicDelegate.h"

@class NSMutableDictionary, NSString, NewTipsNetworkLogic, NewTipsUtils;

@interface MMNewTipsMgr : MMService <MMService, IMsgExt, NewTipsNetworkLogicDelegate>
{
    NewTipsUtils *_tipsUtils;
    NewTipsNetworkLogic *_networkLogic;
    NSMutableDictionary *_dicTipsInfo;
    NSMutableDictionary *_pathRedPointInfos;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)canShowRedPathPointWithKey:(id)arg1;
- (void)checkLocalConfigForPath;
- (void)checkPointPathWithPathKey:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dicTipsInfo; // @synthesize dicTipsInfo=_dicTipsInfo;
- (void)disposeRedPathPointWithKey:(id)arg1;
- (void)disposeTipsWithId:(unsigned int)arg1;
- (id)getNewTipsInfoWithId:(unsigned int)arg1;
- (id)getPathDicWithPathKey:(id)arg1;
@property(retain, nonatomic) NewTipsNetworkLogic *networkLogic; // @synthesize networkLogic=_networkLogic;
- (void)onClickRedPathPointWithKey:(id)arg1;
- (void)onServerRejectShowTipsId:(unsigned int)arg1 Version:(unsigned int)arg2;
- (void)onServiceInit;
- (void)onServiceReloadData;
@property(retain, nonatomic) NSMutableDictionary *pathRedPointInfos; // @synthesize pathRedPointInfos=_pathRedPointInfos;
- (void)registerDynamicTips:(unsigned int)arg1;
- (void)registerDynamicTips:(unsigned int)arg1 FilterClass:(id)arg2 Path:(id)arg3;
- (void)registerLocalTips:(unsigned int)arg1 Version:(unsigned int)arg2 Key:(id)arg3;
- (void)reportPageStayTimeWithTipsId:(unsigned int)arg1;
@property(retain, nonatomic) NewTipsUtils *tipsUtils; // @synthesize tipsUtils=_tipsUtils;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

