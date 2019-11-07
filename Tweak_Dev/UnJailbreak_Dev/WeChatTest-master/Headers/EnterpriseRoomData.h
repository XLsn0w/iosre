//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EnterpriseRoomData : MMObject <PBCoding, WCTColumnCoding>
{
    unsigned int m_uiMaxMemberCount;
    NSMutableArray *m_aryMemberList;
    NSString *m_nsOwner;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *m_nsOwner; // @synthesize m_nsOwner;
@property(nonatomic) unsigned int m_uiMaxMemberCount; // @synthesize m_uiMaxMemberCount;
@property(retain, nonatomic) NSMutableArray *m_aryMemberList; // @synthesize m_aryMemberList;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

