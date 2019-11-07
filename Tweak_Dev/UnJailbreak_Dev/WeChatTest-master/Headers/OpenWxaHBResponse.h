//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, RealNameInfo;

@interface OpenWxaHBResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) NSString *amountTitle; // @dynamic amountTitle;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errorwording; // @dynamic errorwording;
@property(nonatomic) int hbStatus; // @dynamic hbStatus;
@property(nonatomic) int hbType; // @dynamic hbType;
@property(retain, nonatomic) NSString *headTitle; // @dynamic headTitle;
@property(nonatomic) int isContinue; // @dynamic isContinue;
@property(nonatomic) int isSender; // @dynamic isSender;
@property(nonatomic) unsigned long long rcvdAmount; // @dynamic rcvdAmount;
@property(nonatomic) unsigned int rcvdNum; // @dynamic rcvdNum;
@property(retain, nonatomic) NSMutableArray *rcvdUserList; // @dynamic rcvdUserList;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) int receiveStatus; // @dynamic receiveStatus;
@property(retain, nonatomic) NSString *sendHeadimg; // @dynamic sendHeadimg;
@property(retain, nonatomic) NSString *sendNickname; // @dynamic sendNickname;
@property(retain, nonatomic) NSString *sendUsername; // @dynamic sendUsername;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;
@property(nonatomic) unsigned int wxahbStatus; // @dynamic wxahbStatus;

@end

