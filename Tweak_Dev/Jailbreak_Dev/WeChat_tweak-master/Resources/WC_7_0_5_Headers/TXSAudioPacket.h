//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface TXSAudioPacket : NSObject
{
    int _sampleRate;
    int _channelsPerSample;
    int _bitsPerChannel;
    int _packetType;
    unsigned long long _timestamp;
    NSData *_audioData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property(nonatomic) int bitsPerChannel; // @synthesize bitsPerChannel=_bitsPerChannel;
@property(nonatomic) int channelsPerSample; // @synthesize channelsPerSample=_channelsPerSample;
- (id)init;
@property(nonatomic) int packetType; // @synthesize packetType=_packetType;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end

