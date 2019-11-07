//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "FullScreenGestureDelegate.h"
#import "SNSVideoABTestExt.h"
#import "WCFacadeExt.h"
#import "WCPlayerConfigDelegate.h"
#import "WCPlayerDownloaderExt.h"

@class ForwardMessageLogicController, NSObject<WCPlayerConfigViewControllerDelegate>, NSObject<WCPlayerMediaExt>, NSString, UIImage, UIView, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView, WXFullScreenGestureRecognizer;

@interface WCPlayerConfigFullScreenViewController : FullScreenViewController <WCPlayerConfigDelegate, FullScreenGestureDelegate, ForwardMessageLogicDelegate, WCPlayerDownloaderExt, WCFacadeExt, SNSVideoABTestExt>
{
    _Bool _isNeedChangeContentModeAtExist;
    _Bool _bPreventRotate;
    _Bool _bDismissSelfOnPresentOther;
    _Bool _m_toolViewHidden;
    _Bool _isBufferingViewLoading;
    WCPlayerView *_playerView;
    CDUnknownBlockType _detailVCPopCallback;
    unsigned long long _playerScene;
    UIImage *_thumbImage;
    WCPlayerPlayArgs *_playerInfo;
    NSString *_attachTitle;
    NSObject<WCPlayerMediaExt> *_mediaWrap;
    NSObject<WCPlayerConfigViewControllerDelegate> *_delegate;
    WCPlayerConfigControlView *_controlView;
    WXFullScreenGestureRecognizer *_gestureReconizer;
    ForwardMessageLogicController *_forwardMsgLogic;
    UIView *_fullScreenContent;
    SEL _completeSelector;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSString *attachTitle; // @synthesize attachTitle=_attachTitle;
@property(nonatomic) _Bool bDismissSelfOnPresentOther; // @synthesize bDismissSelfOnPresentOther=_bDismissSelfOnPresentOther;
@property(nonatomic) _Bool bPreventRotate; // @synthesize bPreventRotate=_bPreventRotate;
- (void)clearSubviews;
@property(nonatomic) SEL completeSelector; // @synthesize completeSelector=_completeSelector;
@property(retain, nonatomic) WCPlayerConfigControlView *controlView; // @synthesize controlView=_controlView;
- (void)dealloc;
@property(nonatomic) __weak NSObject<WCPlayerConfigViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType detailVCPopCallback; // @synthesize detailVCPopCallback=_detailVCPopCallback;
- (void)favoriteVideo;
- (void)favoriteVideoOnGetAllData;
- (void)fetchAllVideoDataWithMode:(unsigned long long)arg1 CompleteSelector:(SEL)arg2;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
- (void)forwardVideoOnGetAllData;
- (void)forwardVideoToFriend;
@property(retain, nonatomic) UIView *fullScreenContent; // @synthesize fullScreenContent=_fullScreenContent;
- (id)generateConfig;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *gestureReconizer; // @synthesize gestureReconizer=_gestureReconizer;
- (id)getCurrentViewController;
@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
- (_Bool)isChatPlayerMode;
@property(nonatomic) _Bool isNeedChangeContentModeAtExist; // @synthesize isNeedChangeContentModeAtExist=_isNeedChangeContentModeAtExist;
@property(nonatomic) _Bool m_toolViewHidden; // @synthesize m_toolViewHidden=_m_toolViewHidden;
@property(retain, nonatomic) NSObject<WCPlayerMediaExt> *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenSingleTap;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onPlayToEnd;
- (void)onSightIconProgressEnd;
- (void)onTapAttachButton:(id)arg1;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onTimeLineVcWillPop;
- (void)onToolViewAutoClose;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)saveVideo;
- (void)saveVideoOnGetAllData;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
- (void)showVCAnimation;
- (void)stopAndCloseFullScreenWindow;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

