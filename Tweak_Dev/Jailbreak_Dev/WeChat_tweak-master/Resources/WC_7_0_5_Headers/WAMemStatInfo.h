//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WAMemStatInfo : NSObject
{
    _Bool _isCache;
    unsigned int _appVersion;
    unsigned int _openSeq;
    unsigned int _lastTimeEnterBg;
    NSString *_appID;
    long long _processMemUsedWhenLaunch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) unsigned int lastTimeEnterBg; // @synthesize lastTimeEnterBg=_lastTimeEnterBg;
@property(nonatomic) unsigned int openSeq; // @synthesize openSeq=_openSeq;
@property(nonatomic) long long processMemUsedWhenLaunch; // @synthesize processMemUsedWhenLaunch=_processMemUsedWhenLaunch;

@end

