//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "MsgDataDownloadDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CMessageWrap, CdnFavMediaInfo, CdnRecordMediaInfo, CdnUploadTaskInfo, FavoritesItemDataField, MsgDataDownloadLogic, NSString;

@interface RecordUploadTask : NSObject <ICdnComMgrExt, PBMessageObserverDelegate, MsgDataDownloadDelegate>
{
    _Bool m_hasDownload;
    _Bool m_enableHitCheck;
    _Bool m_isThumb;
    _Bool m_fromFav;
    FavoritesItemDataField *m_recordData;
    CMessageWrap *m_recordMsg;
    CdnFavMediaInfo *m_downloadFavMediaInfo;
    CMessageWrap *m_sourceMsg;
    CdnRecordMediaInfo *m_downloadMediaInfo;
    MsgDataDownloadLogic *m_downloadLogic;
    _Bool _isMsgThumb;
    CdnRecordMediaInfo *_cdnInfo;
    CdnUploadTaskInfo *_uploadResult;
    id <RecordUploadTaskDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
@property(retain, nonatomic) CdnRecordMediaInfo *cdnInfo; // @synthesize cdnInfo=_cdnInfo;
- (void)checkMd5:(id)arg1;
- (void)convertHevcVideo;
- (void)dealloc;
@property(nonatomic) __weak id <RecordUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getFilePath:(id)arg1 data:(id)arg2;
- (id)getTempFilePath:(id)arg1 data:(id)arg2;
- (void)handleRecordDownLoadSuess;
- (void)handleRecordThumbDownLoadSuess;
- (id)init;
- (id)initWithMsg:(id)arg1 recordData:(id)arg2 isThumb:(_Bool)arg3;
- (id)initWithMsg:(id)arg1 recordData:(id)arg2 isThumb:(_Bool)arg3 fromFav:(_Bool)arg4;
- (id)initWithThumbInMsg:(id)arg1 fromFav:(_Bool)arg2;
@property(nonatomic) _Bool isMsgThumb; // @synthesize isMsgThumb=_isMsgThumb;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=m_isThumb;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)realDownload;
@property(retain, nonatomic) FavoritesItemDataField *recordData; // @synthesize recordData=m_recordData;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadResult; // @synthesize uploadResult=_uploadResult;
- (void)startDownload;
- (void)startUpload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

