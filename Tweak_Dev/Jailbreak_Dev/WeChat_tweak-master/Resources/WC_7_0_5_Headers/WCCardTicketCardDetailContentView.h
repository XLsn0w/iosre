//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardBaseCardDetailContentView.h"

#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCardDetailContentLogicDelegate.h"
#import "WCCardSecondaryViewDelegate.h"
#import "WCShareCardTicketCardHeaderDelegate.h"

@class NSString, WCShareCardTicketHeaderView;

@interface WCCardTicketCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDataSource, UITableViewDelegate, WCCardDetailContentLogicDelegate, WCShareCardTicketCardHeaderDelegate, WCCardSecondaryViewDelegate, ILinkEventExt>
{
    _Bool _bIsShareCardMode;
    id <WCCardTicketCardContentDelegate> _delegte;
    WCShareCardTicketHeaderView *_ticketCardHeaderView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
@property(nonatomic) __weak id <WCCardTicketCardContentDelegate> delegte; // @synthesize delegte=_delegte;
- (struct CGRect)getHeaderViewApplyBtnFrame;
- (void)initContentView;
- (id)initContentViewWithFrame:(struct CGRect)arg1 isShareCardMode:(_Bool)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;
- (_Bool)isItemFromOutAppScene;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onNearbyShopPhoneNumClick;
- (void)onNeedOpenUrlStr:(id)arg1;
- (void)onTicketCardViewApplyBtnClick;
- (void)onWCCardSecondaryField:(id)arg1;
- (void)reloadContentData;
@property(retain, nonatomic) WCShareCardTicketHeaderView *ticketCardHeaderView; // @synthesize ticketCardHeaderView=_ticketCardHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

