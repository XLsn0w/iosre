//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface ReportVoiceSendResultReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) SKBuiltinString_t *vadVersion; // @dynamic vadVersion;
@property(nonatomic) unsigned int voiceIdCount; // @dynamic voiceIdCount;
@property(retain, nonatomic) NSMutableArray *voiceIdList; // @dynamic voiceIdList;
@property(retain, nonatomic) SKBuiltinString_t *voiceResult; // @dynamic voiceResult;

@end

