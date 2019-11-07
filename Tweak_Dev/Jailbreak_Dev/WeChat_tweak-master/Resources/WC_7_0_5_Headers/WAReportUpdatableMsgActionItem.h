//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSNumber, NSString;

@interface WAReportUpdatableMsgActionItem : WAReportBaseItem
{
    unsigned int _subscribeState;
    NSString *_shareTicket;
    NSString *_chatName;
    NSString *_fullPagePath;
    unsigned long long _eventId;
    NSNumber *_pushMsgState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *fullPagePath; // @synthesize fullPagePath=_fullPagePath;
- (void)makeSafeString;
@property(retain, nonatomic) NSNumber *pushMsgState; // @synthesize pushMsgState=_pushMsgState;
- (int)reportID;
- (id)reportString;
@property(retain, nonatomic) NSString *shareTicket; // @synthesize shareTicket=_shareTicket;
@property(nonatomic) unsigned int subscribeState; // @synthesize subscribeState=_subscribeState;

@end

