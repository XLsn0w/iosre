//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CMessageWrap, MsgDataDownloadLogic;

@interface WAMsgSelectInfo : MMObject
{
    _Bool _selected;
    _Bool _expired;
    _Bool _downloading;
    _Bool _downloadingHD;
    _Bool _showPercent;
    CMessageWrap *_msg;
    double _percent;
    MsgDataDownloadLogic *_downloadLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MsgDataDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(nonatomic) _Bool downloading; // @synthesize downloading=_downloading;
@property(nonatomic) _Bool downloadingHD; // @synthesize downloadingHD=_downloadingHD;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) CMessageWrap *msg; // @synthesize msg=_msg;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool showPercent; // @synthesize showPercent=_showPercent;
- (void)stopDownloading;

@end

