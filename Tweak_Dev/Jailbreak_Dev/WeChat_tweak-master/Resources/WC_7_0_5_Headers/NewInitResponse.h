//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, SKBuiltinBuffer_t;

@interface NewInitResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cmdCount; // @dynamic cmdCount;
@property(retain, nonatomic) NSMutableArray *cmdList; // @dynamic cmdList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *currentSynckey; // @dynamic currentSynckey;
@property(retain, nonatomic) SKBuiltinBuffer_t *maxSynckey; // @dynamic maxSynckey;
@property(nonatomic) unsigned int ratio; // @dynamic ratio;
@property(nonatomic) unsigned int selectBitmap; // @dynamic selectBitmap;

@end

