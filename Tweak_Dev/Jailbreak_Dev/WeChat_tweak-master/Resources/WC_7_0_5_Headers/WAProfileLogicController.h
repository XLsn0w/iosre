//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IWAProfileServiceExt.h"
#import "WAContactMgrExtension.h"

@class GetProfileInfoResponse, NSMutableArray, NSMutableDictionary, NSString, WAContact;

@interface WAProfileLogicController : MMObject <IWAProfileServiceExt, WAContactMgrExtension>
{
    NSString *_userName;
    NSMutableArray *_sectionList;
    NSMutableDictionary *_sectonType2RowNum;
    CDUnknownBlockType _requestProfileDataCompleteBlock;
    _Bool _bProfileResponseDataReturned;
    GetProfileInfoResponse *_profileResponseData;
    WAContact *_contact;
}

- (void).cxx_destruct;
@property _Bool bProfileResponseDataReturned; // @synthesize bProfileResponseDataReturned=_bProfileResponseDataReturned;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)dealloc;
- (id)evaluateBasicInfo;
- (id)friendLikeList;
- (id)initWithUsername:(id)arg1;
- (long long)numberOfSections;
- (void)onFetchProfileInfo:(id)arg1 userName:(id)arg2;
- (void)onModifyWeAppContact:(id)arg1;
- (id)previewMediaList;
@property(retain, nonatomic) GetProfileInfoResponse *profileResponseData; // @synthesize profileResponseData=_profileResponseData;
- (id)relatedBrandList;
- (id)relatedWeAppList;
- (void)reloadSections;
- (void)requestProfileData:(CDUnknownBlockType)arg1;
- (void)tryNotifyProfileDataReady;
- (unsigned int)typeOfSection:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

