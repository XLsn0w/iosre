//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMessageWrap, NSArray, NSString;

@protocol FriendAsistSessionExt

@optional
- (void)onFriendAssistStatusChange:(NSString *)arg1;
- (void)onFriendAssistRelpyMsg:(CMessageWrap *)arg1;
- (void)onFriendAssistAddMsg:(NSArray *)arg1;
- (void)onFriendAssistClearMsg:(NSString *)arg1;
- (void)onFriendAssistUnreadCountChanged;
@end

