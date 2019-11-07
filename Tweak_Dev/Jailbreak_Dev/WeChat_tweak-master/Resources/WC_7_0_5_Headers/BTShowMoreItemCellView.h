//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTBaseItemCellView.h"

@class BTShowMoreItemCellViewModel, CALayer, RichTextView, UIImageView;

@interface BTShowMoreItemCellView : BTBaseItemCellView
{
    RichTextView *m_tipsLabel;
    UIImageView *m_dropDownIcon;
    CALayer *m_separateLayer;
    CALayer *m_itemHighlightLayer;
}

- (void).cxx_destruct;
- (void)initContentView;
- (void)initItemHighlightLayer;
- (void)initSubviews;
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setAccessibilityLabelWithStyles:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setViewModel:(id)arg1;
- (void)updateLabelStyles;

// Remaining properties
@property(readonly, nonatomic) BTShowMoreItemCellViewModel *viewModel; // @dynamic viewModel;

@end

