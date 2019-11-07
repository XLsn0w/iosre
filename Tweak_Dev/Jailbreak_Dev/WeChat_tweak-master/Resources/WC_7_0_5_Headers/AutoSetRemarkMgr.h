//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IAddressBookMgrExt.h"
#import "IContactMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface AutoSetRemarkMgr : MMService <MMService, IContactMgrExt, IAddressBookMgrExt>
{
    NSMutableDictionary *m_dicMobileRemarkList;
    NSMutableDictionary *m_dicStrangerRemarkList;
    NSMutableDictionary *m_dicGoogleRemarkList;
    NSMutableDictionary *m_dicUserAssociateMobileList;
    NSMutableDictionary *m_dicStrangerAttributeList;
    NSMutableDictionary *m_dicWaitToSetRemark;
}

+ (id)GetPathOfGoogleRemarkList;
+ (id)GetPathOfStrangerAttributeList;
+ (id)GetPathOfStrangerRemarkList;
+ (id)GetPathOfUserAssociateMobileList;
+ (id)GetPathOfVerifyList;
- (void).cxx_destruct;
- (void)AddVerifyUsr:(id)arg1 MobileIdentify:(id)arg2;
- (void)AssociateVerifyMobileUsr:(id)arg1 MobileIdentify:(id)arg2;
- (void)AutoSetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)ClearStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (id)GetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (id)GetStrangerRemark:(id)arg1;
- (void)InternalSetStrangerAttribute:(id)arg1 ObjValue:(id)arg2;
- (void)InternalSetStrangerAttribute:(id)arg1 StringValue:(id)arg2;
- (void)InternalSetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)LoadData;
- (void)OnAddressBookLoadedComplete;
- (void)SaveGoogleData;
- (void)SaveMobileData;
- (void)SaveStrangerData;
- (void)SaveVerifyMobileData;
- (void)SetDesc:(id)arg1;
- (void)SetGoogleRemark:(id)arg1 Remark:(id)arg2;
- (void)SetRemark:(id)arg1;
- (void)SetStrangerAttribute:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (void)SetStrangerAttributeByName:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (void)SetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)SetUserAssociateMobileIdentify:(id)arg1;
- (void)autoSetRemark:(id)arg1;
- (void)clearRemark:(id)arg1;
- (void)dealloc;
- (id)getAndClearGoogleRemark:(id)arg1;
- (id)getAndClearMobileIdentify:(id)arg1;
- (id)getAndClearStrangerRemark:(id)arg1;
- (id)getAndClearUserAssociateMobileIdentify:(id)arg1;
- (id)init;
- (void)onModifyContact:(id)arg1;
- (void)onModifyContactProcessDesc:(id)arg1;
- (void)onModifyContactProcessMoblie:(id)arg1;
- (void)onModifyContactProcessPhone:(id)arg1;
- (void)onModifyContactProcessRemark:(id)arg1;
- (void)onModifyContactProcessTagName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

