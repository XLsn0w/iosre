//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DownloadStats : NSObject
{
    long long _beforeParseVideoBytes;
    long long _beforeParseAudioBytes;
    long long _afterParseVideoBytes;
    long long _afterParseAudioBytes;
    long long _videoGop;
    long long _startTS;
    long long _dnsTS;
    long long _connTS;
    long long _firstVideoTS;
    long long _firstAudioTS;
    NSString *_serverIp;
}

- (void).cxx_destruct;
@property(nonatomic) long long afterParseAudioBytes; // @synthesize afterParseAudioBytes=_afterParseAudioBytes;
@property(nonatomic) long long afterParseVideoBytes; // @synthesize afterParseVideoBytes=_afterParseVideoBytes;
@property(nonatomic) long long beforeParseAudioBytes; // @synthesize beforeParseAudioBytes=_beforeParseAudioBytes;
@property(nonatomic) long long beforeParseVideoBytes; // @synthesize beforeParseVideoBytes=_beforeParseVideoBytes;
@property(nonatomic) long long connTS; // @synthesize connTS=_connTS;
@property(nonatomic) long long dnsTS; // @synthesize dnsTS=_dnsTS;
@property(nonatomic) long long firstAudioTS; // @synthesize firstAudioTS=_firstAudioTS;
@property(nonatomic) long long firstVideoTS; // @synthesize firstVideoTS=_firstVideoTS;
@property(retain, nonatomic) NSString *serverIp; // @synthesize serverIp=_serverIp;
@property(nonatomic) long long startTS; // @synthesize startTS=_startTS;
@property(nonatomic) long long videoGop; // @synthesize videoGop=_videoGop;

@end

