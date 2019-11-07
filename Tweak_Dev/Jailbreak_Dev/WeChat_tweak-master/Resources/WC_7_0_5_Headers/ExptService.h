//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IExptLogicCallback.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"

@class ExptLogic, NSMutableDictionary, NSString;

@interface ExptService : MMService <IExptLogicCallback, IMsgExt, MMKernelExt, MMService>
{
    _Bool _hadLoadedExpt;
    NSMutableDictionary *_exptItemMap;
    NSMutableDictionary *_exptKeyMap;
    ExptLogic *_exptLogic;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)checkNeedDelAllExpt:(unsigned int)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *exptItemMap; // @synthesize exptItemMap=_exptItemMap;
@property(retain, nonatomic) NSMutableDictionary *exptKeyMap; // @synthesize exptKeyMap=_exptKeyMap;
@property(retain, nonatomic) ExptLogic *exptLogic; // @synthesize exptLogic=_exptLogic;
- (id)getAllExpt;
- (_Bool)getExpt:(id)arg1 withBoolDef:(_Bool)arg2;
- (id)getExpt:(id)arg1 withDef:(id)arg2;
- (void)getLocalExptList:(id)arg1;
- (void)getSvrExpt;
- (void)getSvrExptByManulLogin;
@property(nonatomic) _Bool hadLoadedExpt; // @synthesize hadLoadedExpt=_hadLoadedExpt;
- (id)mmExptPath:(id)arg1;
- (id)mmExptPath:(id)arg1 md5:(id)arg2;
- (void)onAuthOK;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onGotSvrExptList:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (void)onManulLoginOK;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)tryToLoadExpt;
- (void)tryToSaveExpt;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

