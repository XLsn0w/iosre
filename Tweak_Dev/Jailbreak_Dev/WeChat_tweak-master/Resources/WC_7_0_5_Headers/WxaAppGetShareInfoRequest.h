//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface WxaAppGetShareInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool isUpdatablemsg; // @dynamic isUpdatablemsg;
@property(retain, nonatomic) NSMutableArray *shareName; // @dynamic shareName;
@property(retain, nonatomic) NSString *templateId; // @dynamic templateId;

@end

