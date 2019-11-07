//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavAudioInfo, FavoritesItemDataField, MMMusicInfo, NSMutableArray, NSString;

@protocol RecordNodeDataSource <NSObject>
- (void)IsUrlWeAppThumbPath:(id *)arg1 ThumbUrl:(id *)arg2;
- (_Bool)StartDownload;
- (NSString *)GetSightPath;
- (NSString *)GetThumbPath;
- (NSString *)GetFilePath;
- (NSString *)GetFileName;
- (NSString *)GetFileExt;
- (MMMusicInfo *)GetMusicInfo;
- (_Bool)IsUrlMusicThumbPath:(id *)arg1;
- (NSString *)GetWebPageDomin;
- (_Bool)IsUrlWebPageThumbPath:(id *)arg1;
- (unsigned int)GetVideoDuration;
- (NSString *)GetVideoTitle;
- (_Bool)IsUrlVideoThumbPath:(id *)arg1;
- (unsigned int)GetVoiceFormat;
- (FavAudioInfo *)GetAudioInfo;
- (NSMutableArray *)GetImgArray;
- (unsigned int)GetImgCount;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (NSString *)GetImageSourcePath;
- (NSString *)GetImagePath;
- (NSString *)GetImageLocalID;
- (unsigned int)GetParentLocalID;
- (_Bool)CanbeForwardToWC;
- (_Bool)CanbeForwardToChat;
- (unsigned int)GetDataIndex;
- (FavoritesItemDataField *)GetDataItem;
- (id)GetParent;
- (NSString *)GetDataSrcName;
- (double)GetRecordNodeContentHeight;
@end

