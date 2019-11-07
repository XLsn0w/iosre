//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

#import "WCPayInputMoneyViewDelegate.h"

@class NSString, UIButton, WCPayInputMoneyView, WCPayNavigationBarBottomBanner;

@interface HoneyPayModifyMaximumAmountViewController : HoneyPayBaseViewController <WCPayInputMoneyViewDelegate>
{
    id <HoneyPayModifyMaximumAmountViewControllerDelegate> _delegate;
    UIButton *_confirmButton;
    NSString *_amount;
    WCPayNavigationBarBottomBanner *_alertBanner;
    WCPayInputMoneyView *_inputMoneyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNavigationBarBottomBanner *alertBanner; // @synthesize alertBanner=_alertBanner;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (void)checkAmount;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <HoneyPayModifyMaximumAmountViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done;
- (void)honeyPaykeyboardDidHide:(id)arg1;
@property(retain, nonatomic) WCPayInputMoneyView *inputMoneyView; // @synthesize inputMoneyView=_inputMoneyView;
- (void)keyboardDidShow:(id)arg1;
- (double)max;
- (id)navigationBarBackgroundColor;
- (id)normalStatusHeaderView;
- (void)relaodTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)wcpayInputMoneyView:(id)arg1 didChangeAmount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

