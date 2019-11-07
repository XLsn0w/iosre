//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMWebViewDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayOrderAndProductDetailHistoryInfoViewControllerDelegate.h"
#import "WCPayOrderDetailHistoryViewControllerDelegate.h"
#import "WCPayOrderHistoryProductListViewControllerDelegate.h"
#import "WCPayOrderHistoryViewControllerDelegate.h"

@class NSString;

@interface WCPayOrderHistoryLogic : WCPayControlLogic <MMWebViewDelegate, WCPayLogicMgrExt, WCPayOrderHistoryViewControllerDelegate, WCPayOrderDetailHistoryViewControllerDelegate, WCPayOrderAndProductDetailHistoryInfoViewControllerDelegate, WCPayOrderHistoryProductListViewControllerDelegate>
{
    unsigned int offset;
    _Bool hasMoreOrder;
}

- (_Bool)HasMoreOrderList;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)OnDelAllOrder;
- (void)OnDelAllOrder:(id)arg1;
- (void)OnDelNotifyMsg:(id)arg1;
- (void)OnDelOrder:(id)arg1;
- (void)OnDelOrder:(id)arg1 Error:(id)arg2;
- (void)OnGetHistoryIapOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetOrderList:(id)arg1 TotalCount:(unsigned int)arg2 Error:(id)arg3;
- (void)OnHistoryOrderDetailBack:(_Bool)arg1;
- (void)OnHistoryOrderDetailRightActionBack:(_Bool)arg1;
- (void)OnLoadMoreOrderList;
- (void)OnOrderListBack;
- (void)OnOrderListRightActionBack;
- (void)OnSelectedNotifyMessage:(id)arg1;
- (void)OnSelectedOrderDetail:(id)arg1;
- (void)OnSetEvaluateOrder:(id)arg1;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (id)ParseMessageStructToOrderDetail:(id)arg1;
- (void)WCPayJumpURLHandle:(id)arg1;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerBack;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerClickNormalCellInfo:(id)arg1;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerClickPannelButtonInfo:(id)arg1;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerContactBrandSeller;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerContactBrandTel;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerEvaluateOrder:(unsigned int)arg1;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerShowProductView;
- (void)WCPayOrderAndProductDetailHistoryInfoViewControllerShowTranscationCell;
- (void)WCPayOrderHistoryProductListViewControllerDelegateBack;
- (void)WCPayOrderHistoryProductListViewControllerDelegateDidSelectProduct:(id)arg1;
- (void)startLogic;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

