//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportMainFrameAliasConflictAction : WAReportBaseItem
{
    NSString *_alias;
    NSString *_appidList;
    NSString *_conflictTypeList;
    NSString *_posTypeList;
    NSString *_posList;
    NSString *_appVersionList;
    NSString *_appStateList;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *appStateList; // @synthesize appStateList=_appStateList;
@property(copy, nonatomic) NSString *appVersionList; // @synthesize appVersionList=_appVersionList;
@property(copy, nonatomic) NSString *appidList; // @synthesize appidList=_appidList;
@property(copy, nonatomic) NSString *conflictTypeList; // @synthesize conflictTypeList=_conflictTypeList;
@property(copy, nonatomic) NSString *posList; // @synthesize posList=_posList;
@property(copy, nonatomic) NSString *posTypeList; // @synthesize posTypeList=_posTypeList;
- (id)reportString;

@end

