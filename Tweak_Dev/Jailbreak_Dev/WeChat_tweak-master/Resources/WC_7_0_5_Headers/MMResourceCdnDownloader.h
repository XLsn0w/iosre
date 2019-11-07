//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMResourceCdnDownloaderNotifierDelegate.h"
#import "MMResourceDownloader.h"

@class MMResourceCdnDownloaderNotifier, NSArray, NSString;

@interface MMResourceCdnDownloader : NSObject <MMResourceCdnDownloaderNotifierDelegate, MMResourceDownloader>
{
    MMResourceCdnDownloaderNotifier *_notifier;
    id <MMResourceDownloadDelegate> downloadDelegate;
    NSString *downloadIdentifier;
    NSString *_resUrl;
    NSArray *_arrDnsIp;
    NSString *_successFilePath;
}

+ (unsigned int)genIncreaseSequence;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrDnsIp; // @synthesize arrDnsIp=_arrDnsIp;
- (void)cancel;
- (void)clearData;
- (void)createSaveFileDirIfNotExist;
- (void)createSuccessFileDirIfNotExist;
- (void)dealloc;
- (void)doNewDns;
@property(nonatomic) __weak id <MMResourceDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate;
@property(retain, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier;
- (id)generateSuccessFilePath;
- (id)getSaveFileDir;
- (id)getSaveFilePath;
- (id)getSuccessFileDir;
- (id)initWithUrl:(id)arg1;
- (void)mainThread_cancelDownload;
- (void)mainThread_clearDownloadData;
- (void)mainThread_startDownload;
- (void)onCdnDownloadFinish:(id)arg1;
- (void)onEndDownloading:(long long)arg1 data:(id)arg2;
- (void)reportCdnErrorWithRet:(int)arg1;
- (void)reportWithKey:(unsigned int)arg1;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(retain, nonatomic) NSString *successFilePath; // @synthesize successFilePath=_successFilePath;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

