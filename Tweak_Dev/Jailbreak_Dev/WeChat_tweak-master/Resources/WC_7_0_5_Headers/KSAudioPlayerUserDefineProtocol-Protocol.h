//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KSAudioDataProvider, KSLimitNetParam, KSSongInfo, LZAudioDataDownloader, NSObject<OS_dispatch_queue>, NSString;

@protocol KSAudioPlayerUserDefineProtocol <NSObject>
- (_Bool)isNetOk;

@optional
- (LZAudioDataDownloader *)createAudioDownloader;
- (KSAudioDataProvider *)createDataProvider:(KSSongInfo *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 context:(void *)arg3 downloadProtocol:(id <KSAudioPlayerUserDefineProtocol>)arg4;
- (id <KSAudioProcessorProtocol>)createUserAudioProcessor:(KSSongInfo *)arg1;
- (unsigned int)downloadRetryCnt;
- (KSLimitNetParam *)limitNetParam;
- (NSString *)retryUrlFilter:(KSSongInfo *)arg1 lastUrl:(NSString *)arg2 retryCnt:(unsigned int)arg3;
- (_Bool)setUserDefineAudioSessionCategoryWithError:(id *)arg1;
@end

