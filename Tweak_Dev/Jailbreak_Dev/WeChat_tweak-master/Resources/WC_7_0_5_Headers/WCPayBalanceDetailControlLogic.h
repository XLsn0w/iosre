//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlMgrExt.h"
#import "WCPayBalanceDetailViewControllerDelegate.h"
#import "WCPayECardDetailControlLogicDelegate.h"
#import "WCPayLQTDetailControlLogicDelegate.h"
#import "WCPayLQTMoneyControlLogicDelegate.h"
#import "WCPayWalletUpdateExt.h"

@class NSString, WCPayAddPayCardLogic, WCPayLQTDetailControlLogic, WCPayLQTMoneyControlLogic;

@interface WCPayBalanceDetailControlLogic : WCPayControlLogic <WCPayWalletUpdateExt, WCPayLQTDetailControlLogicDelegate, WCPayECardDetailControlLogicDelegate, WCPayLQTMoneyControlLogicDelegate, WCPayBalanceDetailViewControllerDelegate, WCBaseControlMgrExt>
{
    int m_eWCPayBalanceDetailControlLogicScene;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    WCPayLQTDetailControlLogic *_lqtDetailControlLogic;
    WCPayLQTMoneyControlLogic *_lqtMoneyControlLogic;
}

- (void).cxx_destruct;
- (void)BackToRootView;
- (void)BalanceDetailBack;
- (void)BalanceDetailBackOpenECardDetail:(id)arg1;
- (void)BalanceDetailFetchMoney;
- (void)BalanceDetailJumpToLQTDetail:(id)arg1;
- (void)BalanceDetailJumpToLQTSave:(id)arg1;
- (void)BalanceDetailLQTEntryClick;
- (void)BalanceDetailRequeryBalance;
- (void)BalanceDetailSaveMoney;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)dealloc;
- (void)doAddCard;
- (void)doAddCardForFetchMoney;
- (void)doFetchMoney;
- (void)eCardDeteailLogicDidUnbindCard:(id)arg1;
- (id)init;
@property(retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic; // @synthesize lqtDetailControlLogic=_lqtDetailControlLogic;
@property(retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic; // @synthesize lqtMoneyControlLogic=_lqtMoneyControlLogic;
@property(nonatomic) int m_eWCPayBalanceDetailControlLogicScene; // @synthesize m_eWCPayBalanceDetailControlLogicScene;
- (void)onLQTDetailControlLogicStop;
- (void)onLQTMoneyControlLogicStop:(_Bool)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayWalletUpdateDidCall;
- (void)pause;
- (void)startBalanceDetailLogic;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

