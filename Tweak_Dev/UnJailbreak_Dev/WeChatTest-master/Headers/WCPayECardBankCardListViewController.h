//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@protocol WCPayECardBankCardListViewControllerDelegate;

@interface WCPayECardBankCardListViewController : WCPayBaseViewController
{
    id <WCPayECardBankCardListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WCPayECardBankCardListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectVerifyNewCard;
- (void)selectBankInfo:(id)arg1;
- (void)makeSelectNewCardToVerifyCell:(id)arg1;
- (void)makeSelectNewCardCell:(id)arg1;
- (void)makeBankInfoCell:(id)arg1 bankInfo:(id)arg2;
- (void)makeBankCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

