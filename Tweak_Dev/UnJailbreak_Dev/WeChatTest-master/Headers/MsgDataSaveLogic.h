//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MsgDataDownloadDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol MsgDataSaveLogicDelegate;

@interface MsgDataSaveLogic : NSObject <MsgDataDownloadDelegate>
{
    id <MsgDataSaveLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicMsgDownloading;
    NSMutableArray *m_arrMsgToSave;
    NSMutableArray *m_arrMsgExpired;
    _Bool m_bOK;
    _Bool m_bExpired;
    _Bool m_bDownloadFail;
    _Bool m_bSaveFail;
    _Bool m_bAllSaved;
    unsigned int m_uiShareForbided;
    _Bool _saveToAlbum;
}

@property(nonatomic) _Bool saveToAlbum; // @synthesize saveToAlbum=_saveToAlbum;
- (void).cxx_destruct;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)checkDownLoadEnd;
- (void)cancelLogic;
- (void)startDownload;
- (void)onSave:(id)arg1;
- (void)saveOneByOne:(id)arg1;
- (void)saveMsg:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)imagePath:(id)arg1 forSave:(_Bool)arg2;
- (void)endLogic;
- (id)initWithDelegate:(id)arg1;

@end

