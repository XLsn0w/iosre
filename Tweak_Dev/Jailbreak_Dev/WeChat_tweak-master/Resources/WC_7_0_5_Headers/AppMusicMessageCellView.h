//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMMusicPlayerContollerDelegate.h"
#import "MMWebImageViewDelegate.h"

@class AppMusicMessageViewModel, MMMusicPlayerContoller, NSString, UIImageView, UILabel;

@interface AppMusicMessageCellView : CommonMessageCellView <MMWebImageViewDelegate, MMMusicPlayerContollerDelegate>
{
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UIImageView *m_thumbImageView;
    UIImageView *m_blurBgImageView;
    MMMusicPlayerContoller *_playButton;
}

- (void).cxx_destruct;
- (void)addBlurEffectAlbumView;
- (void)addMagicTapActions:(id)arg1;
- (void)addMusicPlayView;
- (id)blurEffectAlbumImage;
- (double)calBlurImageHeight;
- (_Bool)canPeek;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)initDetailLabel;
- (void)initThumbImageView;
- (void)initTitleLabel;
- (void)layoutContentView;
- (void)onAppear;
- (void)onClickToPlayMusic:(id)arg1 playState:(int)arg2;
- (void)onForward:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)updateThumbImage;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppMusicMessageViewModel *viewModel; // @dynamic viewModel;

@end

