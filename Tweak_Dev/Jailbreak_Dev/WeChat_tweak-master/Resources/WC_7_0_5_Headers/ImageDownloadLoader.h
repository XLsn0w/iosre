//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMImageLoaderObserver.h"

@class NSArray, NSMutableSet, NSString, NSURL;

@interface ImageDownloadLoader : MMObject <MMImageLoaderObserver>
{
    NSMutableSet *m_filePathSet;
    _Bool m_isDownloading;
    id <ImageDownloadLoaderDelegate> _delegate;
    NSURL *_imgUrl;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)addDownloadTaskWithFilePath:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) id <ImageDownloadLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *filePathToSaveList;
- (void)finishDownloadWithData:(id)arg1;
@property(retain, nonatomic) NSURL *imgUrl; // @synthesize imgUrl=_imgUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

