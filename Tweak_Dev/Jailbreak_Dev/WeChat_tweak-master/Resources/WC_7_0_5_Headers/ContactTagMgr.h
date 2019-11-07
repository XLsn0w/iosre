//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class ContactTagCacheMgr, NSMutableDictionary, NSString;

@interface ContactTagMgr : MMService <MMService, MMKernelExt, IContactMgrExt, PBMessageObserverDelegate>
{
    _Bool isCompleteLoadCache;
    _Bool isManulAuthOK;
    NSMutableDictionary *_dicNameToId;
    NSMutableDictionary *_dicIdToName;
    NSMutableDictionary *_dicOperateCache;
    ContactTagCacheMgr *m_CacheMgr;
    unsigned int lastTimeGetAllLabelsFromServer;
}

+ (id)GetPathOfContactLabelList;
+ (void)reportContactTagWithReportScene:(unsigned int)arg1 andActionCode:(unsigned int)arg2 andHandlePage:(unsigned int)arg3;
- (void).cxx_destruct;
- (void)BuildCacheDataFromContacts;
- (void)BuildCacheDataFromFile;
- (void)CleanCurrentTagNameAndIdCache;
- (void)ClearCacheDataWithNamePair:(id)arg1;
- (void)ClearCacheDataWithNames:(id)arg1;
- (id)GetContactLabelItemsFromFile;
- (id)GetDicOfUserNameToTagNamesWithContacts:(id)arg1;
- (id)IdToLabelName:(unsigned int)arg1;
- (unsigned int)LabelNameToId:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAddLabel:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDeleteLabel:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetAllLabels:(id)arg1 Event:(unsigned int)arg2;
- (void)OnSetLabels:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdateLabelName:(id)arg1 Event:(unsigned int)arg2;
- (void)SaveCacheDataToFile;
- (void)UpdateCacheData:(unsigned int)arg1 LabelName:(id)arg2;
- (void)UpdateCacheMgrWithUserNameAndIDList:(id)arg1;
- (unsigned int)addLabel:(id)arg1;
- (id)arrIDListToNameListInternal:(id)arg1;
- (id)arrIdListToFormatString:(id)arg1;
- (id)arrIdListToTagNames:(id)arg1;
- (id)arrLabelNameToIdFormatString:(id)arg1;
- (void)dealloc;
- (unsigned int)deleteLabel:(id)arg1;
- (id)getAllLabelName;
- (id)getAllLabelsFromLocal;
- (id)getAllLabelsFromServer;
- (id)getContactTagIDListToNameList:(id)arg1;
- (id)getContactsForLabel:(id)arg1;
- (id)getContactsForTagName:(id)arg1;
- (id)getDicOfUserNameAndTagNames:(id)arg1;
- (id)getDicWithUserNameForAllTag;
- (id)getLabelsForContact:(id)arg1;
- (id)getLabelsNameForContact:(id)arg1;
- (id)getLabelsNameForStrangerWithTagIDList:(id)arg1;
- (id)init;
- (_Bool)isAlreadyExistTagName:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onManulLoginOK;
- (void)onModifyContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onServiceInit;
- (id)searchLabel;
- (_Bool)searchLabel:(id)arg1 forContact:(id)arg2;
- (unsigned int)setLabelsToContact:(id)arg1;
- (void)shouldGetAllLabelsFromServer:(id)arg1;
- (unsigned int)updateLabelName:(id)arg1 newName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

