//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, WCCardPkgDB;
@protocol WCCardPkgBatchDelMgrDelegate;

@interface WCCardPkgBatchDelMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardPkgDB *_wccardPkgDB;
    NSMutableArray *_batchDelArray;
    id <WCCardPkgBatchDelMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <WCCardPkgBatchDelMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleBatchDelWCCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryStartBatchDel;
- (void)addBatchDelWCCardList:(id)arg1;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

