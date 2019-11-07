//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

#import "IMsgExt.h"

@interface CommonMessageViewModel : BaseMessageViewModel <IMsgExt>
{
    unsigned long long m_bgBubbleType;
    unsigned long long m_maskBubbleType;
    _Bool m_isShowChatRoomDisplayName;
}

- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (id)accessibilityDescription;
- (id)bgBubbleInfo;
- (_Bool)calIsShowChatRoomDisplayName;
- (void)dealloc;
- (void)downloadThumbImageIfNeed;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (_Bool)isShowAppMessageBlockButton;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isShowHeadImage;
- (_Bool)isShowSendFailView;
- (_Bool)isShowSendingView;
- (_Bool)isShowSourceView;
- (id)maskBubbleInfo;
- (struct CGSize)measure:(struct CGSize)arg1;
- (void)onMessageDownloadThumbImageOK;
- (_Bool)shouldShowSourceViewInContent;
- (id)sourceIcon;
- (id)sourceIconUrlString;
- (id)sourceTag;
- (id)sourceTitle;
@property(readonly, nonatomic) unsigned int thumbDownloadStatus;
- (void)updateChatContact:(id)arg1;

@end

