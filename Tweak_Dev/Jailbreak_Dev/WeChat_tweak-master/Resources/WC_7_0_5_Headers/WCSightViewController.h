//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "FullScreenGestureDelegate.h"
#import "IUiUtilExt.h"
#import "SNSVideoABTestExt.h"
#import "SightViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPlayerDownloaderExt.h"

@class ForwardMessageLogicController, MMUIButton, MMUIViewController, NSString, SightView, UIImageView, UIView, WCDataItem, WCMediaItem, WXFullScreenGestureRecognizer;

@interface WCSightViewController : FullScreenViewController <SightViewDelegate, IUiUtilExt, FullScreenGestureDelegate, WCPlayerDownloaderExt, ForwardMessageLogicDelegate, WCActionSheetDelegate, SNSVideoABTestExt>
{
    unsigned int _startTime;
    MMUIViewController *_fullScreenWindow;
    UIView *_nodeView;
    UIView *_fullScreenContent;
    SightView *_sightView;
    double _videoTime;
    _Bool _fullScreenPlaying;
    WCMediaItem *_mediaItem;
    UIImageView *_thumbImageView;
    struct CGRect _thumbRect;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    WCDataItem *_dataItem;
    _Bool _bTimelineScene;
    unsigned int m_uOperateMode;
    _Bool m_bPreventRotate;
    CDStruct_1b6d18a9 m_currentPlayTime;
    NSString *_nsFromVCName;
    ForwardMessageLogicController *m_forwardMsgLogic;
    MMUIButton *_gameButton;
    _Bool _silencePlay;
    _Bool _bIgnoreLongPress;
}

- (void).cxx_destruct;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)OnDownloadSuccessForForwardVideoToFriend;
- (void)OnDownloadSuccessForSaveVideoToAlbum;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addGameTailButton;
@property(nonatomic) _Bool bIgnoreLongPress; // @synthesize bIgnoreLongPress=_bIgnoreLongPress;
- (double)calTransformFromRect:(struct CGRect)arg1;
- (_Bool)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)clearSubviews;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getCurrentViewController;
- (void)initGestures;
- (void)initSubviewWithDataItem:(id)arg1 superWindow:(id)arg2 thumbView:(id)arg3 isTimeLineScene:(_Bool)arg4 nodeView:(id)arg5;
- (void)internalStopAndCloseFullScreenWindow;
- (_Bool)isFullScreenPlaying;
- (void)layoutSubviews;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenSingleTap;
- (void)onGameButtonClick:(id)arg1;
- (void)onShowSightAction;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onStartToPlayVideo;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (void)onVideoTotalTimeUpdate:(double)arg1 msgClientId:(id)arg2;
- (void)reStartStateMachine;
@property(nonatomic) _Bool silencePlay; // @synthesize silencePlay=_silencePlay;
- (void)setThumbImage:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)showVCAnimation;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)startLoadFullDownloadView;
- (void)stopAndCloseFullScreenWindow;
- (void)trySendSightToFriend;
- (void)tryToAddFavorite;
- (void)tryToSaveVideoToAlbum;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

