//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class NSString;

@interface WAPermissionLaunchAction : NSObject <PBCoding, WCTColumnCoding>
{
    _Bool isUpdateHistoryList;
    unsigned int actionCode;
    NSString *openURL;
    NSString *alertMsg;
    NSString *alertTitle;
}

+ (int)columnTypeForWCDB;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode;
@property(retain, nonatomic) NSString *alertMsg; // @synthesize alertMsg;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle;
- (struct NSObject *)archivedWCTValue;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool isUpdateHistoryList; // @synthesize isUpdateHistoryList;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

