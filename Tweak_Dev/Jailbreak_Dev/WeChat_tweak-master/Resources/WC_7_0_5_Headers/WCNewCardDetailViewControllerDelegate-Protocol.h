//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, WCCardData, WCNewCardDetailViewController, WCShareCardData;

@protocol WCNewCardDetailViewControllerDelegate <NSObject>

@optional
- (void)onAcceptCardCancel;
- (void)onAcceptCardFail:(NSString *)arg1;
- (void)onAcceptCardSuccess:(NSString *)arg1;
- (void)onDeleteCard:(WCCardData *)arg1;
- (void)onDeleteShareCard:(WCShareCardData *)arg1;
- (void)onDetailDidBeCleared;
- (void)onGiftCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2;
- (void)onShareCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2;
- (void)onShareCardConsumed:(NSArray *)arg1 isGetReward:(_Bool)arg2;
- (void)onUseCard:(WCCardData *)arg1;
- (void)onUseCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2 delayTime:(double)arg3;
- (void)onWCCardDetailViewControllerCancel:(WCNewCardDetailViewController *)arg1;
@end

