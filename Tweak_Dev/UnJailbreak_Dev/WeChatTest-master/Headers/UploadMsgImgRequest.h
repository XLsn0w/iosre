//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface UploadMsgImgRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int cdnbigImgSize; // @dynamic cdnbigImgSize;
@property(retain, nonatomic) NSString *cdnbigImgUrl; // @dynamic cdnbigImgUrl;
@property(nonatomic) int cdnmidImgSize; // @dynamic cdnmidImgSize;
@property(retain, nonatomic) NSString *cdnmidImgUrl; // @dynamic cdnmidImgUrl;
@property(retain, nonatomic) NSString *cdnthumbAeskey; // @dynamic cdnthumbAeskey;
@property(nonatomic) int cdnthumbImgHeight; // @dynamic cdnthumbImgHeight;
@property(nonatomic) int cdnthumbImgSize; // @dynamic cdnthumbImgSize;
@property(retain, nonatomic) NSString *cdnthumbImgUrl; // @dynamic cdnthumbImgUrl;
@property(nonatomic) int cdnthumbImgWidth; // @dynamic cdnthumbImgWidth;
@property(retain, nonatomic) SKBuiltinString_t *clientImgId; // @dynamic clientImgId;
@property(nonatomic) unsigned int compressType; // @dynamic compressType;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int dataLen; // @dynamic dataLen;
@property(nonatomic) int encryVer; // @dynamic encryVer;
@property(retain, nonatomic) SKBuiltinString_t *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int hitMd5; // @dynamic hitMd5;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) NSString *mediaTagName; // @dynamic mediaTagName;
@property(retain, nonatomic) NSString *meesageExt; // @dynamic meesageExt;
@property(retain, nonatomic) NSString *messageAction; // @dynamic messageAction;
@property(nonatomic) unsigned int msgForwardType; // @dynamic msgForwardType;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) int photoFrom; // @dynamic photoFrom;
@property(nonatomic) unsigned int reqTime; // @dynamic reqTime;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(retain, nonatomic) SKBuiltinString_t *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;

@end

