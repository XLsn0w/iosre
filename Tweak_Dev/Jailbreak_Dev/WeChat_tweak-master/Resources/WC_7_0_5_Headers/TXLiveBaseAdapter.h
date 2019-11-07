//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXLiveAudioSessionDelegate.h"
#import "TXLiveBaseDelegate.h"

@class NSString;

@interface TXLiveBaseAdapter : NSObject <TXLiveBaseDelegate, TXLiveAudioSessionDelegate>
{
    _Bool _isLoging;
}

+ (id)shareInstance;
- (unsigned long long)covertAVCategroy2WCCategroy:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isLoging; // @synthesize isLoging=_isLoging;
- (void)onLog:(id)arg1 LogLevel:(int)arg2 WhichModule:(id)arg3;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (void)startLog;
- (void)stopLog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

