//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "WCStoryVideoPlayerViewDelegate.h"

@class WCStoryPreviewPageView;

@protocol WCStoryPreviewPageViewDelegate <NSObject, WCStoryVideoPlayerViewDelegate>

@optional
- (void)onClickPageView:(WCStoryPreviewPageView *)arg1 toHideUIElement:(_Bool)arg2;
- (void)onCommentListView:(WCStoryPreviewPageView *)arg1 show:(_Bool)arg2;
- (void)onLongPressToDeletePageView:(WCStoryPreviewPageView *)arg1;
- (void)onLongPressToHidePageView:(WCStoryPreviewPageView *)arg1;
@end

