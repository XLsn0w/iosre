//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "WCFacadeExt-Protocol.h"

@class NSString;

@interface AlbumContactInfoAssist : PluginContactInfoAssist <WCFacadeExt>
{
}

- (void)reloadUninstalledTableViewData;
- (void)reloadInstalledTableViewData;
- (void)openGroup:(id)arg1;
- (void)openAlbum;
- (void)onWCGroupUpdatedReturn:(_Bool)arg1;
- (void)dealloc;
- (id)getUnInstallBtnTitle;
- (id)getUnInstallTip;
- (id)getPluginIntro;
- (void)initHeaderView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

