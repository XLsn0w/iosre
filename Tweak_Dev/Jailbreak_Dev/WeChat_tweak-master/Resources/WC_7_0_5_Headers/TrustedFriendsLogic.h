//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MultiSelectContactsViewControllerDelegate.h"
#import "TrustedFriendsCgiDelegate.h"

@class NSMutableArray, NSString, TrustedFriendsCgi;

@interface TrustedFriendsLogic : MMObject <MultiSelectContactsViewControllerDelegate, TrustedFriendsCgiDelegate>
{
    _Bool _m_isListHadChanged;
    unsigned int _m_maxTrustedFriendCount;
    id <TrustedFriendsLogicDelegate> _m_delegate;
    TrustedFriendsCgi *_m_trustedFriendCgi;
    NSMutableArray *_m_trustedFriendList;
}

- (void).cxx_destruct;
- (_Bool)canAddFriendToTrustedFriendList;
- (_Bool)canDeleteFriendFromTrustedFriendList;
- (void)dealloc;
- (id)getContactsFromBaseContacts:(id)arg1;
- (id)getContactsFromTrustedFriendContacts:(id)arg1;
- (unsigned long long)getMaxLimit;
- (id)getTrustedFriendViewController;
- (id)getTrustedFriends;
- (unsigned long long)getTrustedFriendsCount;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) __weak id <TrustedFriendsLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_isListHadChanged; // @synthesize m_isListHadChanged=_m_isListHadChanged;
@property(nonatomic) unsigned int m_maxTrustedFriendCount; // @synthesize m_maxTrustedFriendCount=_m_maxTrustedFriendCount;
@property(retain, nonatomic) TrustedFriendsCgi *m_trustedFriendCgi; // @synthesize m_trustedFriendCgi=_m_trustedFriendCgi;
@property(retain, nonatomic) NSMutableArray *m_trustedFriendList; // @synthesize m_trustedFriendList=_m_trustedFriendList;
- (void)onCgiFailed:(unsigned int)arg1 error:(int)arg2 msg:(id)arg3;
- (void)onGetTrustedFriendsListSuccess:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onSyncTrustedFriendsSuccess:(id)arg1;
- (_Bool)shouldNofityUserForCurrentFriendNotEnough;
- (_Bool)shouldSyncTrustedFriendList;
- (_Bool)showErrorTips:(id)arg1 forReason:(unsigned int)arg2;
- (void)startChooseTrustedFriendsForAdding;
- (void)startChooseTrustedFriendsForRemoving:(id)arg1;
- (void)startGetTrustedFriends;
- (void)startSyncTrustedFriends;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

