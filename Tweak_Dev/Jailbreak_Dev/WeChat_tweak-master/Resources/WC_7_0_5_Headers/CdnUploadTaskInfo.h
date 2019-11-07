//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDNUploadMsgImgPrepareResponse, NSString;

@interface CdnUploadTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFileId;
    NSString *m_nsAesKey;
    unsigned long long m_nFileLength;
    NSString *m_nsFileMD5;
    NSString *m_nsTransInfo;
    int m_nRetCode;
    NSString *m_nsChatName;
    NSString *m_nsThumbAesKey;
    int m_nThumbImgLength;
    NSString *m_nsThumbMd5;
    int m_nMidimgLength;
    NSString *m_nsStreamId;
    NSString *m_nsFileUrl;
    NSString *m_nsThumbUrl;
    unsigned int m_uiScene;
    unsigned int m_nHitCacheType;
    _Bool m_bNeedSendMsg;
    unsigned long long m_nSvrMsgId;
    _Bool m_bFileExist;
    CDNUploadMsgImgPrepareResponse *m_pbUploadResp;
    _Bool _m_useSafeCdn;
    unsigned int _m_uiCrc32;
    NSString *_m_videoNewMd5;
    NSString *_m_lastSvrIP;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool m_bFileExist; // @synthesize m_bFileExist;
@property(nonatomic) _Bool m_bNeedSendMsg; // @synthesize m_bNeedSendMsg;
@property(retain, nonatomic) NSString *m_lastSvrIP; // @synthesize m_lastSvrIP=_m_lastSvrIP;
@property(nonatomic) unsigned long long m_nFileLength; // @synthesize m_nFileLength;
@property(nonatomic) unsigned int m_nHitCacheType; // @synthesize m_nHitCacheType;
@property(nonatomic) int m_nMidimgLength; // @synthesize m_nMidimgLength;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned long long m_nSvrMsgId; // @synthesize m_nSvrMsgId;
@property(nonatomic) int m_nThumbImgLength; // @synthesize m_nThumbImgLength;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
@property(retain, nonatomic) NSString *m_nsFileId; // @synthesize m_nsFileId;
@property(retain, nonatomic) NSString *m_nsFileMD5; // @synthesize m_nsFileMD5;
@property(retain, nonatomic) NSString *m_nsFileUrl; // @synthesize m_nsFileUrl;
@property(retain, nonatomic) NSString *m_nsStreamId; // @synthesize m_nsStreamId;
@property(retain, nonatomic) NSString *m_nsThumbAesKey; // @synthesize m_nsThumbAesKey;
@property(retain, nonatomic) NSString *m_nsThumbMd5; // @synthesize m_nsThumbMd5;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @synthesize m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsTransInfo; // @synthesize m_nsTransInfo;
@property(retain, nonatomic) CDNUploadMsgImgPrepareResponse *m_pbUploadResp; // @synthesize m_pbUploadResp;
@property(nonatomic) unsigned int m_uiCrc32; // @synthesize m_uiCrc32=_m_uiCrc32;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) _Bool m_useSafeCdn; // @synthesize m_useSafeCdn=_m_useSafeCdn;
@property(retain, nonatomic) NSString *m_videoNewMd5; // @synthesize m_videoNewMd5=_m_videoNewMd5;

@end

