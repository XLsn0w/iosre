//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetResourceLoadingRequest;

@interface AVRSLoadingRuestTaskInfo : NSObject
{
    unsigned int _m_uiDownloadSec;
    AVAssetResourceLoadingRequest *_m_oLoadingRequest;
}

- (void).cxx_destruct;
- (_Bool)isEqualToLoadingRequest:(id)arg1;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *m_oLoadingRequest; // @synthesize m_oLoadingRequest=_m_oLoadingRequest;
@property(nonatomic) unsigned int m_uiDownloadSec; // @synthesize m_uiDownloadSec=_m_uiDownloadSec;

@end

