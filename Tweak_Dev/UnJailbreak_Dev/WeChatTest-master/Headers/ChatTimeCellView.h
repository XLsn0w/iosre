//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseChatCellView.h"

#import "ChatBackgroundExt-Protocol.h"

@class ChatTimeViewModel, MMTimer, UIImageView, UILabel;

@interface ChatTimeCellView : BaseChatCellView <ChatBackgroundExt>
{
    MMTimer *m_updateTimeLabelTimer;
    UILabel *m_timeLabel;
    UIImageView *m_bgImageView;
    _Bool _useLightStyle;
}

@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
- (void).cxx_destruct;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)layoutInternal;
- (_Bool)needUpdateLightStyle;
- (_Bool)shouldLayoutIfNeeded;
- (_Bool)canBeReused;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) ChatTimeViewModel *viewModel; // @dynamic viewModel;

@end

