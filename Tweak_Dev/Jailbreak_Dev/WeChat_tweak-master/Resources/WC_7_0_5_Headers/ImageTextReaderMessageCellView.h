//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

@class ImageTextReaderMessageViewModel, UIImageView;

@interface ImageTextReaderMessageCellView : ReaderMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (void)addFavorite;
- (_Bool)canBeReused;
- (void)forwardMessage;
- (id)initWithViewModel:(id)arg1;
- (void)jumpOpItem:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)layoutContentView;
- (void)onClicked;
- (void)onHeadImageClick;
- (void)onOPButtonClicked:(id)arg1;
- (id)operationMenuItems;

// Remaining properties
@property(readonly, nonatomic) ImageTextReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

