//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetResourceLoadingRequest;

@interface WCPlayerLoadingRuestTaskInfo : NSObject
{
    unsigned int _downloadSec;
    AVAssetResourceLoadingRequest *_loadingRequest;
    struct _NSRange _dataRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange dataRange; // @synthesize dataRange=_dataRange;
@property(nonatomic) unsigned int downloadSec; // @synthesize downloadSec=_downloadSec;
- (_Bool)isEqualToLoadingRequest:(id)arg1;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;

@end

