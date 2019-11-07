//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseMessageCellView.h"

@class NSMutableDictionary, NSString, UIImageView, UIView, WCPayC2CMessageViewModel, WCPayWebImageView;

@interface WCPayC2CMessageCellView : WCPayBaseMessageCellView
{
    WCPayWebImageView *_showResourceImageView;
    UIImageView *_showResourceMaskView;
    NSString *_bgImageName;
    NSString *_bgHighlightImageName;
    NSString *_maskImageName;
    NSString *_maskHighlightImageName;
    NSMutableDictionary *_showResourceMaskImageViewCache;
    UIView *_showResourceBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bgHighlightImageName; // @synthesize bgHighlightImageName=_bgHighlightImageName;
@property(retain, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (id)generateMaskImage:(id)arg1 isSender:(_Bool)arg2;
@property(retain, nonatomic) NSString *maskHighlightImageName; // @synthesize maskHighlightImageName=_maskHighlightImageName;
@property(retain, nonatomic) NSString *maskImageName; // @synthesize maskImageName=_maskImageName;
- (id)operationMenuItems;
@property(retain, nonatomic) UIView *showResourceBgView; // @synthesize showResourceBgView=_showResourceBgView;
@property(retain, nonatomic) WCPayWebImageView *showResourceImageView; // @synthesize showResourceImageView=_showResourceImageView;
@property(retain, nonatomic) NSMutableDictionary *showResourceMaskImageViewCache; // @synthesize showResourceMaskImageViewCache=_showResourceMaskImageViewCache;
@property(retain, nonatomic) UIImageView *showResourceMaskView; // @synthesize showResourceMaskView=_showResourceMaskView;
- (void)updateBgImageView;
- (void)updateDescLabel;
- (void)updateHbSourceImageView;
- (void)updateStatus;
- (void)updateTitleLabel;

// Remaining properties
@property(readonly, nonatomic) WCPayC2CMessageViewModel *viewModel; // @dynamic viewModel;

@end

