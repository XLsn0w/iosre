//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IStrangerContactMgrExt.h"
#import "WCPayOverseaFacingTransferOrderCgiDelegate.h"
#import "WCPayOverseaGetTransferNameCgiDelegate.h"
#import "WCPayOverseaTransferGetCurrencyCgiDelegate.h"
#import "WCPayOverseaTransferOrderCgiDelegate.h"
#import "WCPayOverseaTransferViewControllerDelegate.h"

@class NSString, WCPayOverseaFacingReceiveTransferCancelCgi, WCPayOverseaFacingTransferOrderCgi, WCPayOverseaFacingTransferOrderResponse, WCPayOverseaGetTransferNameCgi, WCPayOverseaGetTransferNameResponse, WCPayOverseaTransferGetCurrencyCgi, WCPayOverseaTransferGetCurrencyCgiRespObject, WCPayOverseaTransferOrderCgi, WCPayOverseaTransferOrderResp, WCPayTransferMoneyControlLogic;

@interface WCPayOverseaTransferMoneyControlLogic : WCPayControlLogic <WCPayOverseaTransferViewControllerDelegate, WCPayOverseaTransferOrderCgiDelegate, WCPayOverseaTransferGetCurrencyCgiDelegate, WCPayOverseaGetTransferNameCgiDelegate, WCPayOverseaFacingTransferOrderCgiDelegate, IStrangerContactMgrExt>
{
    int m_enWCPayTransferMoneyControlLogicScene;
    NSString *_m_nsQRCodeResponseUrl;
    WCPayOverseaTransferGetCurrencyCgi *_m_getCurrencyCgi;
    WCPayOverseaTransferOrderCgi *_m_orderCgi;
    WCPayOverseaTransferGetCurrencyCgiRespObject *_m_currencyResp;
    WCPayOverseaTransferOrderResp *_m_orderResp;
    WCPayOverseaGetTransferNameCgi *_m_getTransferNameCgi;
    WCPayOverseaGetTransferNameResponse *_m_getTransferNameReponse;
    WCPayOverseaFacingTransferOrderCgi *_m_facingTransferOrderCgi;
    WCPayOverseaFacingTransferOrderResponse *_m_facingTransferOrderResp;
    WCPayOverseaFacingReceiveTransferCancelCgi *_m_facingTransferCancelCgi;
    WCPayTransferMoneyControlLogic *_m_transferMoneyControlLogic;
}

- (void).cxx_destruct;
- (void)WCPayOverseaTransferViewControllerCancel;
- (void)WCPayOverseaTransferViewControllerOnNext:(id)arg1;
- (id)initWithQRCodeUrl:(id)arg1;
- (id)initWithUserName:(id)arg1 walletType:(unsigned int)arg2;
@property(retain, nonatomic) WCPayOverseaTransferGetCurrencyCgiRespObject *m_currencyResp; // @synthesize m_currencyResp=_m_currencyResp;
@property(retain, nonatomic) WCPayOverseaFacingReceiveTransferCancelCgi *m_facingTransferCancelCgi; // @synthesize m_facingTransferCancelCgi=_m_facingTransferCancelCgi;
@property(retain, nonatomic) WCPayOverseaFacingTransferOrderCgi *m_facingTransferOrderCgi; // @synthesize m_facingTransferOrderCgi=_m_facingTransferOrderCgi;
@property(retain, nonatomic) WCPayOverseaFacingTransferOrderResponse *m_facingTransferOrderResp; // @synthesize m_facingTransferOrderResp=_m_facingTransferOrderResp;
@property(retain, nonatomic) WCPayOverseaTransferGetCurrencyCgi *m_getCurrencyCgi; // @synthesize m_getCurrencyCgi=_m_getCurrencyCgi;
@property(retain, nonatomic) WCPayOverseaGetTransferNameCgi *m_getTransferNameCgi; // @synthesize m_getTransferNameCgi=_m_getTransferNameCgi;
@property(retain, nonatomic) WCPayOverseaGetTransferNameResponse *m_getTransferNameReponse; // @synthesize m_getTransferNameReponse=_m_getTransferNameReponse;
@property(retain, nonatomic) NSString *m_nsQRCodeResponseUrl; // @synthesize m_nsQRCodeResponseUrl=_m_nsQRCodeResponseUrl;
@property(retain, nonatomic) WCPayOverseaTransferOrderCgi *m_orderCgi; // @synthesize m_orderCgi=_m_orderCgi;
@property(retain, nonatomic) WCPayOverseaTransferOrderResp *m_orderResp; // @synthesize m_orderResp=_m_orderResp;
@property(retain, nonatomic) WCPayTransferMoneyControlLogic *m_transferMoneyControlLogic; // @synthesize m_transferMoneyControlLogic=_m_transferMoneyControlLogic;
- (void)onClickContinueTransfer;
- (void)onClickOpenTradeUrl;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayOverseaFacingTransferOrderResponseBizError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaFacingTransferOrderResponseOK:(id)arg1;
- (void)onWCPayOverseaGetTransferNameResponseBizError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaGetTransferNameResponseCgiError:(int)arg1 errorMsg:(id)arg2;
- (void)onWCPayOverseaGetTransferNameResponseOK:(id)arg1;
- (void)onWCPayOverseaTransferGetCurrencyBizErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferGetCurrencyCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferGetCurrencyCgiOkArgument:(id)arg1;
- (void)onWCPayOverseaTransferOrderBizErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferOrderCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaTransferOrderCgiOkWithResp:(id)arg1;
- (void)onWCPayOverseaTransferOrderCgiRetrunHasUnreceiveTransferWithResp:(id)arg1;
- (void)onWCPayOverseaTransferOrderCgiReturnHasTheSameAmountUnreceiveTransferWithResp:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)reportIdkeyOverseaTransferGetCurrencyFailed;
- (void)reportIdkeyOverseaTransferGetCurrencyOk;
- (void)reportIdkeyOverseaTransferGetCurrencyOkChangeToRMB;
- (void)reportIdkeyOverseaTransferGetCurrencyOkContinue;
- (void)reportIdkeyOverseaTransferOrderFailed;
- (void)reportIdkeyOverseaTransferOrderOk;
- (void)startLogic;
- (void)stopLogic;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

