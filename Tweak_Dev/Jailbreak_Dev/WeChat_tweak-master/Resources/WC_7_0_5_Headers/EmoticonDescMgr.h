//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonDescRecommandLogicDelegate.h"
#import "IEmoticonPackageMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class EmoticonDescRecommandLogic, NSMutableDictionary, NSMutableSet, NSString;

@interface EmoticonDescMgr : MMService <EmoticonDescRecommandLogicDelegate, IEmoticonPackageMgrExt, MMService, PBMessageObserverDelegate, IMMLanguageMgrExt>
{
    NSMutableSet *_m_requestPidSet;
    NSMutableDictionary *_m_emoticonDescCache;
    NSMutableDictionary *_m_emoticonPackageHasDesc;
    EmoticonDescRecommandLogic *_descRecommandLogic;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdateEmoticonPackageList;
- (void)OnUpdateEmoticonPackageListAfterSort;
- (void)dealloc;
@property(retain, nonatomic) EmoticonDescRecommandLogic *descRecommandLogic; // @synthesize descRecommandLogic=_descRecommandLogic;
- (_Bool)getEmoticonButtonDescByPid:(id)arg1;
- (id)getEmoticonDescByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3;
- (_Bool)getEmoticonDescByPid:(id)arg1 LastRequestTime:(unsigned int)arg2;
- (id)getEmoticonDescFromFileByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3;
- (id)getEmoticonPackageDescForPid:(id)arg1;
- (id)getWordingFromDic:(id)arg1 withCode:(id)arg2;
- (void)handleRespForGetEmotionDesc:(id)arg1;
- (_Bool)hasDescPid:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonDescCache; // @synthesize m_emoticonDescCache=_m_emoticonDescCache;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonPackageHasDesc; // @synthesize m_emoticonPackageHasDesc=_m_emoticonPackageHasDesc;
@property(retain, nonatomic) NSMutableSet *m_requestPidSet; // @synthesize m_requestPidSet=_m_requestPidSet;
- (void)onEmoticonDescRecommandLogicFinishSearchWithKeyword:(id)arg1 result:(id)arg2 abTestItem:(id)arg3;
- (void)onLanguageChange;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)updateDescFromFile:(id)arg1;
- (void)updateDescToMd5CacheFromServerPackageDesc:(id)arg1;
- (void)updateEmoticonDescCacheWithDescList:(id)arg1;
- (id)updateEmoticonDescFromServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

