//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TXIVideoEncoder, TXSNALPacket;

@protocol TXIVideoEncoderDelegate <NSObject>
- (void)onEncodeNAL:(TXSNALPacket *)arg1 ErrorCode:(int)arg2;

@optional
- (void)encodeFinished:(TXIVideoEncoder *)arg1;
- (void)onEncodeFinished:(unsigned int)arg1 gopIndex:(unsigned long long)arg2 rpsFrameIndex:(unsigned long long)arg3;
@end
