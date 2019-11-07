//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "IMMFontMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMService.h"

@class BaseMsgContentLogicController, NSMutableArray, NSString;

@interface MMMsgLogicManager : MMService <MMService, IMMLanguageMgrExt, IMMFontMgrExt, IContactMgrExt, IMMNewSessionMgrExt>
{
    NSMutableArray *_arrLogicControllers;
    BaseMsgContentLogicController *_topLogicController;
    BaseMsgContentLogicController *_weixinLogicController;
    BaseMsgContentLogicController *_roomLogicController;
    BaseMsgContentLogicController *_lastPeekController;
}

- (void).cxx_destruct;
- (void)CheckIfTopViewControllerPoped;
- (id)GetCurrentLogicController;
- (Class)GetLogicClassByContact:(id)arg1;
- (id)GetLogicControllerFromCacheWithContact:(id)arg1;
- (id)GetReuseableLogicControllerFromCacheWithContact:(Class)arg1;
- (void)PopLogicController:(id)arg1;
- (void)PopLogicController:(id)arg1 withReuse:(_Bool)arg2;
- (void)PresentMultiSelectLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)PushLBSRoomLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)PushNewLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 jumpToLocationNode:(id)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 extraInfo:(id)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(int)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3 searchScene:(int)arg4 extraInfo:(id)arg5;
- (void)PushOtherLogicController:(id)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(int)arg5;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(_Bool)arg4 fromeScene:(int)arg5 userData:(id)arg6;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 animated:(_Bool)arg5;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(_Bool)arg5 animated:(_Bool)arg6;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(_Bool)arg5 animated:(_Bool)arg6 extraInfo:(id)arg7;
- (void)PushSpecLogicControllerByContact:(id)arg1 navigationController:(id)arg2;
@property(retain, nonatomic) NSMutableArray *arrLogicControllers;
- (void)cleanUnuseLogicController;
- (void)cleanUp;
- (void)cleanUpLogicByName:(id)arg1;
- (void)dealloc;
- (void)finishedPeekingWithController:(id)arg1;
- (id)getTopLogicController;
- (id)logicControllerForPeekingWithContact:(id)arg1 messageWrap:(id)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)onModifyContact:(id)arg1;
- (void)onPluginsChanged:(id)arg1;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)setMsgLogicToCache:(id)arg1;
@property(retain, nonatomic) BaseMsgContentLogicController *topLogicController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

