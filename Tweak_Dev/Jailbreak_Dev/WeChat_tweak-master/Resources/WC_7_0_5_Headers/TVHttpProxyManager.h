//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVHttpProxyManager : NSObject
{
}

+ (id)getInstance;
- (id)TVHttpProxyBuildPlayURLMP4:(int)arg1;
- (void)TVHttpProxyDeinit;
- (int)TVHttpProxyGetLocalServerPort;
- (id)TVHttpProxyGetVersion;
- (void)TVHttpProxyHandlerMemoryWarning;
- (int)TVHttpProxyInit:(id)arg1;
- (int)TVHttpProxyPreLoad:(int)arg1 withDuration:(int)arg2;
- (void)TVHttpProxySetNetWorkState:(int)arg1;
- (void)TVHttpProxySetPlayerState:(int)arg1;
- (void)TVHttpProxySetRemainTime:(int)arg1 withRemainTime:(int)arg2;
- (int)TVHttpProxyStartPlay:(id)arg1 withFileType:(int)arg2 withFileID:(id)arg3 withFileSize:(long long)arg4 withFileDuration:(int)arg5;
- (void)TVHttpProxyStopPlay:(int)arg1;
- (void)deinitLog;
- (void)deinitModule;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (id)init;
- (void)initLog;
- (int)initModule:(CDUnknownFunctionPointerType)arg1 withReportFunc:(CDUnknownFunctionPointerType)arg2 withIDKeyReportFunc:(CDUnknownFunctionPointerType)arg3 withKVReportFunc:(CDUnknownFunctionPointerType)arg4;

@end

