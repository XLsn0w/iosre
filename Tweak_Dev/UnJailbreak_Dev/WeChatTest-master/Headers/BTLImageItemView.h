//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTLBaseItemView.h"

#import "IDownloadImageExt-Protocol.h"

@class CAGradientLayer, NSString, UIImageView;

@interface BTLImageItemView : BTLBaseItemView <IDownloadImageExt>
{
    CAGradientLayer *m_maskLayer;
    UIImageView *m_imageIcon;
}

- (void).cxx_destruct;
- (void)onImageClicked;
- (void)OnDownloadImageOk:(id)arg1;
- (void)layoutImageItemWithLandingPageTop;
- (void)layoutImageItemNoLandingPage;
- (void)layoutSubviews;
- (void)initNumLabelAndIcon;
- (void)initCoverWithLandingPage;
- (void)initCoverWithNoLandingPage;
- (void)initImageItemWithLandingPageTop;
- (void)initImageItemNoLandingPage;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

