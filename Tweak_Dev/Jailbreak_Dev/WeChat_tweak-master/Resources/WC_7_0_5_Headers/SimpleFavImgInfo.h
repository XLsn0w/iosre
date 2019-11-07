//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleMsgInfo.h"

#import "IFavCdnDownloadMgrExt.h"

@class FavoritesItem, FavoritesItemDataField, NSString;

@interface SimpleFavImgInfo : SimpleMsgInfo <IFavCdnDownloadMgrExt>
{
    FavoritesItemDataField *_m_favData;
    FavoritesItem *_m_favItem;
}

- (void).cxx_destruct;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)dealloc;
- (id)getDefaultImg;
- (id)getImgPath;
- (id)getSightPath;
- (id)getSquareImgDir;
- (unsigned int)getVideoTime;
- (_Bool)isImgMsg;
- (_Bool)isVideoMsg;
@property(retain, nonatomic) FavoritesItemDataField *m_favData; // @synthesize m_favData=_m_favData;
@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem=_m_favItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

