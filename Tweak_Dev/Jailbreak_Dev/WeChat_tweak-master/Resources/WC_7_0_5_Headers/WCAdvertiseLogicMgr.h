//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface WCAdvertiseLogicMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *arrUpdateItemList;
    _Bool bUpdating;
    unsigned int updateTime;
    id <WCLogicMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)deleteAdvertiseDataItem:(id)arg1;
- (int)getNetworkType;
- (id)init;
@property(nonatomic) __weak id <WCLogicMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)onOperation:(id)arg1 Finished:(long long)arg2;
- (void)requestForSnsADObjectDetailRequest:(id)arg1 FromScene:(unsigned int)arg2 source:(int)arg3;
- (void)requestForSnsADObjectDetailRequest:(id)arg1 FromScene:(unsigned int)arg2 source:(int)arg3 syncBuffer:(id)arg4 RemindFriendsInfoData:(id)arg5;
- (_Bool)requestForSnsADObjectOpRequest:(id)arg1;
- (_Bool)responseForSnsADObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)responseForSnsADObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)spanUnInterestAdvertiseReasonListForData:(id)arg1;
- (_Bool)unCommentAdvertiseDataItem:(id)arg1 commentID:(id)arg2 source:(int)arg3;
- (void)unInterestAdvertiseDataItem:(id)arg1;
- (_Bool)unLikeAdvertiseDataItem:(id)arg1 source:(int)arg2;
- (void)updateAdvertiseDataItemDetail:(id)arg1 source:(int)arg2;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)updateDataItemDetail:(id)arg1 source:(int)arg2 RemindFriendsInfoData:(id)arg3;

@end

