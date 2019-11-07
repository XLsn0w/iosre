//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMsgRevokeExt.h"
#import "MMImgageBrowseViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, MMAnimationTipView, MMImageBrowseView, MMLoadingView, NSString, UIImage, WCActionSheet;

@interface MsgImageBrowseViewController : MMUIViewController <IMsgRevokeExt, MMImgageBrowseViewDelegate, WCActionSheetDelegate, UIAlertViewDelegate, UIViewControllerAnimatedTransitioning>
{
    MMImageBrowseView *m_imageView;
    MMAnimationTipView *m_tipView;
    CMessageWrap *m_wrapMsg;
    UIImage *m_image;
    id <ImageBrowseDelegate> m_delegate;
    MMLoadingView *m_loadingView;
    id m_singleTapGesture;
    id m_doubleTapGesture;
    _Bool m_saveMode;
    WCActionSheet *m_actionSheet;
    struct CGRect m_originRect;
}

- (void).cxx_destruct;
- (void)GetImage;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addNvGestureRecognizer;
- (void)adjustImageViewRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)dealloc;
- (void)didAppear;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)exitFullScreen;
- (id)genDataLength:(unsigned int)arg1;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)hideStatusBar;
- (void)initData;
- (void)initImageView;
- (void)initNavigationBar;
- (void)initView;
- (id)initWithMsgWrap:(id)arg1 originFrame:(struct CGRect)arg2;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
@property(retain, nonatomic) id m_doubleTapGesture; // @synthesize m_doubleTapGesture;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(nonatomic) _Bool m_saveMode; // @synthesize m_saveMode;
@property(retain, nonatomic) id m_singleTapGesture; // @synthesize m_singleTapGesture;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onDouTapOnNavigationBar:(id)arg1;
- (void)onLongPress;
- (void)onOperate:(id)arg1;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onSingleTapImageBrowseView;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)removeNvGestureRecognizer;
- (void)setFullScreen:(_Bool)arg1;
- (void)showStatusBar;
- (unsigned long long)supportedInterfaceOrientations;
- (double)transitionDuration:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

