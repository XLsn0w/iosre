//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCSightFullPlayViewDelegate-Protocol.h"

@class NSString, UIButton, WCDataItem, WCMediaItem, WCSightFullPlayView;
@protocol WCSightFullPlayViewControllerDelegate;

@interface WCSightFullPlayViewController : MMUIViewController <WCSightFullPlayViewDelegate>
{
    WCMediaItem *m_mediaData;
    WCDataItem *m_dataItem;
    UIButton *m_bgButton;
    WCSightFullPlayView *m_sightFullPlayView;
    id <WCSightFullPlayViewControllerDelegate> m_delegate;
}

@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(retain, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(nonatomic) __weak id <WCSightFullPlayViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)tryRotateOrientation;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)onFullSightDownloadFinished:(id)arg1 downloadType:(int)arg2;
- (_Bool)shouldShowDetailButton;
- (id)getDetailButtonTitle;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)onClickFullSightView:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onLongPressFullPlayView;
- (void)onClickFullPlayView;
- (void)didReceiveMemoryWarning;
- (void)layoutAllSubviews:(_Bool)arg1;
- (void)stopPlayWithAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

