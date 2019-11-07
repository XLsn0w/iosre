//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "MMConfigMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSData, NSNumber, NSString;

@interface OCRTransMgr : MMService <ICdnComMgrExt, MMConfigMgrExt, IMMLanguageMgrExt, MMService, PBMessageObserverDelegate>
{
    unsigned int m_uOcrId;
    _Bool m_bUploading;
    NSData *_imageBuf;
    unsigned int _sessionId;
    unsigned int _uploadEvent;
    unsigned int _scene;
    NSNumber *_isBottomBarAvaliable;
    NSNumber *_isNewOCRTransAvaliable;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)dealloc;
- (id)getFromLang;
- (id)getToLang;
- (id)init;
- (_Bool)isBottomBarAvaliable;
- (_Bool)isNewOCRTransAvaliable;
@property(nonatomic) unsigned int ocrId; // @synthesize ocrId=m_uOcrId;
- (void)onLanguageChange;
- (void)onMMDynamicConfigUpdated;
- (int)sendOCRTransImage:(id)arg1 BufLen:(unsigned int)arg2 ImageType:(int)arg3 SessionId:(unsigned int)arg4;
- (int)sendOCRTransImage:(id)arg1 SessionId:(unsigned int)arg2 scene:(unsigned int)arg3;
- (_Bool)setFromLang:(id)arg1;
- (_Bool)setToLang:(id)arg1;
- (int)uploadOCRTransImage:(id)arg1 SessionId:(unsigned int)arg2 scene:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

