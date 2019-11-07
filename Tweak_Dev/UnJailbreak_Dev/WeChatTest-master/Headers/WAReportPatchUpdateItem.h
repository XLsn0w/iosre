//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportPatchUpdateItem : WAReportBaseItem
{
    _Bool _canUsePatchUpdate;
    _Bool _isUpdateComplete;
    _Bool _isUpdateCompleteWithPatch;
    unsigned int _fullPkgSize;
    unsigned int _patchSize;
    long long _oldVersion;
    long long _targetVersion;
    double _spendTime;
}

@property(nonatomic) unsigned int patchSize; // @synthesize patchSize=_patchSize;
@property(nonatomic) unsigned int fullPkgSize; // @synthesize fullPkgSize=_fullPkgSize;
@property(nonatomic) _Bool isUpdateCompleteWithPatch; // @synthesize isUpdateCompleteWithPatch=_isUpdateCompleteWithPatch;
@property(nonatomic) _Bool isUpdateComplete; // @synthesize isUpdateComplete=_isUpdateComplete;
@property(nonatomic) _Bool canUsePatchUpdate; // @synthesize canUsePatchUpdate=_canUsePatchUpdate;
@property(nonatomic) double spendTime; // @synthesize spendTime=_spendTime;
@property(nonatomic) long long targetVersion; // @synthesize targetVersion=_targetVersion;
@property(nonatomic) long long oldVersion; // @synthesize oldVersion=_oldVersion;
- (id)reportString;
- (int)reportID;

@end

