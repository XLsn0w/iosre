//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface NewOCRTranslationRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(retain, nonatomic) NSString *imageAeskey; // @dynamic imageAeskey;
@property(retain, nonatomic) NSData *imageData; // @dynamic imageData;
@property(nonatomic) unsigned int imageDataOffset; // @dynamic imageDataOffset;
@property(retain, nonatomic) NSString *imageFileId; // @dynamic imageFileId;
@property(nonatomic) unsigned int imageSize; // @dynamic imageSize;
@property(retain, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sessionId; // @dynamic sessionId;

@end

