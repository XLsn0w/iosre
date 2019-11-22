//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol KSAudioFileProtocol <NSObject>
- (void)close;
@property(readonly, nonatomic) long long curPacketOffset;
@property(readonly, nonatomic) unsigned int databytesPerSecond;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) struct AudioStreamBasicDescription fileFormat;
@property(readonly, nonatomic) _Bool isEof;
- (_Bool)isFileReadyToParsing;
- (_Bool)isOpened;
@property(readonly, nonatomic) long long lastReadingPos;
@property(readonly, nonatomic) unsigned int maxPacketSize;
- (_Bool)open:(id *)arg1;
- (struct AudioStreamBasicDescription *)outputDes;
- (_Bool)readPCMPacket:(struct AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(struct AudioStreamPacketDescription *)arg4;
- (_Bool)seekPacketPos:(double)arg1;

@optional
@property(retain, nonatomic) NSData *magicCookie;
@end
