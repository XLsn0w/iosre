//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"

@class EmoticonStoreItem, EmotionRewardResponseInfo, MMUILabel, MMUIScrollView, MMUIView, MMWebImageView, NSString, RichTextView, StoreEmotionRewardLogicObject;

@interface MMEmotionStoreRewardBegViewController : MMUIViewController <MMWebImageViewDelegate, ILinkEventExt>
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    MMUIScrollView *m_scrollView;
    MMWebImageView *m_begRewardImage;
    MMWebImageView *m_loadingGif;
    MMUIView *m_priceButtonGridView;
    MMUILabel *m_choosePriceTitleLabel;
    RichTextView *m_customAmountBtn;
    StoreEmotionRewardLogicObject *m_rewardLogic;
}

- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onClose;
- (void)onClickCustomAmountButton;
- (void)onChoosePriceButton:(id)arg1;
- (double)updateCustomAmountViewFromMarginTop:(double)arg1;
- (void)initCustomAmountView;
- (id)textForPriceButton:(id)arg1;
- (double)updatePriceButtonGridViewFromMarginTop:(double)arg1;
- (void)initPriceButtonGridView;
- (double)updateBegRewardImageFromMarginTop:(double)arg1;
- (void)initBegRewardImage;
- (void)updateScrollView;
- (void)initScrollView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 extInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

