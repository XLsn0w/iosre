//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BakChatUploadMediaResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bakChatClientId; // @dynamic bakChatClientId;
@property(nonatomic) unsigned int bakChatSvrId; // @dynamic bakChatSvrId;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cancelFlag; // @dynamic cancelFlag;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int maxLength; // @dynamic maxLength;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(nonatomic) unsigned int offset; // @dynamic offset;

@end

