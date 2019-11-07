//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCStoryComment, WCStoryDataItem, WCStoryZonePageIndexObj;

@protocol WCStoryFacadeExt <NSObject>

@optional
- (void)onAlbumRedDotStatusChanged;
- (void)onCameraRedDotCleaned;
- (void)onCleanUnReadStorys:(NSArray *)arg1;
- (void)onCommentFail:(WCStoryComment *)arg1;
- (void)onCommentSuccess:(WCStoryComment *)arg1;
- (void)onContactHasChange;
- (void)onDataItemAllCommentMakeRead:(WCStoryDataItem *)arg1;
- (void)onDataItemHasUpdate:(WCStoryDataItem *)arg1;
- (void)onDeleteCommentFail:(WCStoryComment *)arg1;
- (void)onDeleteCommentSuccess:(WCStoryComment *)arg1;
- (void)onDeleteStoryWithStory:(WCStoryDataItem *)arg1 PageIndexObj:(WCStoryZonePageIndexObj *)arg2;
- (void)onGetStoryComentDelete:(WCStoryDataItem *)arg1;
- (void)onGetStoryUnReadComment:(WCStoryDataItem *)arg1;
- (void)onMakeAllUserRelatedCommentRead;
- (void)onMakeAllUserRelatedCommentWithUsername:(NSString *)arg1;
- (void)onMarkStoryReadWithUserName:(NSString *)arg1 Tid:(NSString *)arg2;
- (void)onPermissionsHasChanged;
- (void)onRelatedCommentAdd:(WCStoryComment *)arg1;
- (void)onRelatedCommentDel:(WCStoryComment *)arg1;
- (void)onReverseDataItemPrivateWithTid:(NSString *)arg1 isInvisible:(_Bool)arg2;
- (void)onSetNewLastReadMaxTid;
- (void)onStoryCommentDeleteSuccessWithStoryId:(NSString *)arg1 CommentId:(NSString *)arg2;
- (void)onStoryDeleteSuccessWithDataTid:(NSString *)arg1;
- (void)onStoryUnreadCommentCountUpdate;
- (void)onStoryUploadFailWithDataItem:(WCStoryDataItem *)arg1;
- (void)onStoryUploadRetry:(WCStoryDataItem *)arg1;
- (void)onStoryUploadSuccessWithDataItem:(WCStoryDataItem *)arg1;
- (void)onUserRelatedCommentReadWithTid:(NSString *)arg1;
- (void)onUserStoryPageFromZerotoOne:(NSString *)arg1;
@end

