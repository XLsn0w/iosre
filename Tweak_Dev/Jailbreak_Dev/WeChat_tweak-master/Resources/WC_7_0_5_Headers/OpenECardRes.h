//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, InputMobileItem, NSString, OpenSuccItem, PopItem;

@interface OpenECardRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindToken; // @dynamic bindToken;
@property(retain, nonatomic) PopItem *guideInfo; // @dynamic guideInfo;
@property(retain, nonatomic) InputMobileItem *inputTips; // @dynamic inputTips;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *rettext; // @dynamic rettext;
@property(retain, nonatomic) OpenSuccItem *succTips; // @dynamic succTips;
@property(retain, nonatomic) NSString *verifyMsgDesc; // @dynamic verifyMsgDesc;

@end

