//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNAttachmentBaseView.h"

#import "FavSightViewDelegate.h"
#import "FavVideoCompressExt.h"

@class FavSightView, NSString;

@interface WNAttachmentVideoView : WNAttachmentBaseView <FavSightViewDelegate, FavVideoCompressExt>
{
    FavSightView *_videoPlayer;
}

+ (double)getHeightOfAttachment:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;
- (void)layoutView;
- (void)onClickObject;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (void)tryConfigCompressVideoPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

