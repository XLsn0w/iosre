//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCShareCardBaseCardHeaderDelegate.h"

@class WCCardUsedStoreInfo;

@protocol WCShareCardNewTicketHeaderDelegate <WCShareCardBaseCardHeaderDelegate>
- (void)jumpButtonDidClikced;
- (void)onTicketHeaderAcceptBtnClick;
- (void)onTicketHeaderUsredStoreBtnClick;
- (WCCardUsedStoreInfo *)ticketHeaderGetStoreInfo;
- (_Bool)ticketHeaderHaveNearByStoreInfo;
- (_Bool)ticketHeaderHaveUsedStoreInfo;
@end

