//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCardDataSeed : MMObject
{
    unsigned int _fromScene;
    unsigned int _statScene;
    NSString *_cardId;
    NSString *_cardExt;
    NSString *_fromUserName;
    NSString *_chatName;
    NSString *_webUrl;
    NSString *_consumedboxCardId;
    NSString *_templateMsgId;
    NSString *_recommendCardId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *consumedboxCardId; // @synthesize consumedboxCardId=_consumedboxCardId;
- (void)dealloc;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *recommendCardId; // @synthesize recommendCardId=_recommendCardId;
@property(nonatomic) unsigned int statScene; // @synthesize statScene=_statScene;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;

@end

