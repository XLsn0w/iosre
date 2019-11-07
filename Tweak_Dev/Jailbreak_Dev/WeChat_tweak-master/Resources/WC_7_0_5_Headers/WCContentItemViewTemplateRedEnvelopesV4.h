//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCIMageGreetingExtV4.h"
#import "WCImageViewDelegate.h"

@class MMUILabel, NSString, UIButton, UIView, WCImageView;

@interface WCContentItemViewTemplateRedEnvelopesV4 : WCContentItemBaseView <WCImageViewDelegate, WCIMageGreetingExtV4>
{
    WCImageView *_imageView;
    UIButton *_imageButton;
    MMUILabel *_moneyLabel;
    MMUILabel *_rmbLabel;
    UIView *_blurView;
    _Bool _bTimeLineScene;
}

+ (struct CGSize)getImageSize:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
- (void)OnSuccessGreetingCallback;
@property(nonatomic) _Bool bTimeLineScene; // @synthesize bTimeLineScene=_bTimeLineScene;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)getNSStringFromTopViewControllerClass;
- (id)getTimeLineViewController;
- (id)getTopViewController;
- (void)hideMenu;
- (void)initViewsWithWCDataItem:(id)arg1;
- (_Bool)isCurTopViewControllerMatchTheScene;
- (void)jumpDetailView;
- (void)layoutSubviews;
- (void)onClickWCImage:(id)arg1;
- (void)onDownloadFinish:(id)arg1;
- (void)onExposeFromImage:(id)arg1;
- (void)onImageBtnClick:(id)arg1;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onReceiveRedEnvelopesClick;
- (void)onShowDetailView;
- (void)onShowGreetingEntry;
- (void)onShowGreetingView;
- (void)showGreetingView;
- (void)updateImageButtonView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

