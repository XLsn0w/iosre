//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactLabelMgrExt.h"
#import "IContactMgrExt.h"
#import "IFriendListMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMService.h"
#import "WXGImportMessageNotification.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface FTSContactDataProvider : MMService <IContactMgrExt, IFriendListMgrExt, IContactLabelMgrExt, IMMNewSessionMgrExt, WXGImportMessageNotification, MMService>
{
    NSMutableArray *_arrContact;
    NSMutableDictionary *_dicContact;
    NSMutableArray *_arrSessionContact;
    NSMutableDictionary *_dicNewestCreateTimeForSession;
    NSMutableDictionary *_dicTagNames;
    NSMutableArray *_arrAddressBookFriend;
    NSMutableDictionary *_dicNickNameToFriends;
    NSMutableDictionary *_dicAddressBook;
    _Bool _hasLoadedAddressContact;
    _Bool _hasLoadedSessionContact;
    _Bool _hasLoadedChatRoomData;
    NSMutableSet *_ftsContactVerifySet;
    unsigned int _lastVerifyTime;
    NSMutableSet *_setChatRoomWithoutMemList;
}

- (void).cxx_destruct;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)asyncLoadAllSessionContact;
- (void)asyncParseChatRoomData:(id)arg1;
- (void)clearData;
- (void)clearSessionCreateTime;
- (void)dealloc;
- (void)doInit;
- (id)getArrAddressBookFriend;
- (id)getArrContacts;
- (id)getArrContactsWithoutOpenIM;
- (id)getArrSessionContacts;
- (id)getBrandContact;
- (id)getDicAddressBook;
- (id)getDicContacts;
- (id)getDicNicknameToFriends;
- (id)getDicSessionCreateTime;
- (id)getDicTagNames;
- (id)getGroupContact;
- (id)getMMSingleContacts;
- (id)getMMSingleContactsWithoutOpenIM;
- (_Bool)hasAllContactLoaded;
- (_Bool)hasInitSessionContact;
- (_Bool)hasLoadedAddressContact;
- (_Bool)hasLoadedChatRoomData;
- (_Bool)hasLoadedSessionContact;
- (void)internalReportChatRoomStatus;
- (void)internalReportSourceVerifyStatusWithSession:(id)arg1 andListContact:(id)arg2;
- (void)internalVerifySourceConsistency;
- (_Bool)isFtsValidContact:(id)arg1;
- (void)loadAllSessionContact;
- (id)loadSessionUserName;
- (void)makeupFtsContactSource:(id)arg1;
- (void)notifyReload;
- (void)onAllTagNameUpdate;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onContactTagNameUpdate:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (void)onImportMessageSuccess;
- (void)onModifyContact:(id)arg1;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(int)arg2;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (_Bool)shouldAsyncParseChatRoomData;
- (void)sortFriendList;
- (void)tryDoVerifyReport;
- (void)tryInitSessionContactTime;
- (void)tryLoadAddressBook;
- (void)tryLoadAddressBookFriends;
- (void)tryLoadContacts;
- (void)updateChatRoomData:(id)arg1;
- (void)updateChatRoomDataLoading;
- (void)verifyChatRoomStatus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

