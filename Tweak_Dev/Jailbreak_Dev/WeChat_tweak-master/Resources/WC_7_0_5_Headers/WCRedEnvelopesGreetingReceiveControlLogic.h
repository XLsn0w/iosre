//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCRedEnvelopes2019GreetingViewControllerDelegate.h"
#import "WCRedEnvelopesEnterpriseDetailViewControllerDelegate.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate.h"

@class NSString, WCRedEnvelopes2019GreetingViewController;

@interface WCRedEnvelopesGreetingReceiveControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2019GreetingViewControllerDelegate, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate>
{
    int m_scene;
    _Bool m_bDidStopCoinAnimation;
    _Bool m_bDidCompleteOpen;
    WCRedEnvelopes2019GreetingViewController *senderView;
    WCRedEnvelopes2019GreetingViewController *receiveView;
    _Bool m_pictureSwitch;
    _Bool m_showEmoticonSwitch;
    _Bool _isViewAnimationing;
}

- (void).cxx_destruct;
- (_Bool)HasMoreDetailList;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesGreetingReceiveViewBack;
- (id)WCRedEnvelopesGreetingReceiveViewGetData;
- (void)WCRedEnvelopesGreetingSenderHomeViewBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)dealloc;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (_Bool)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)arg1;
- (void)onGoToBalanceDetail;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onOpenDetailList;
- (void)onRealnameActionClick:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)queryRedEnvelopesDetailRequest:(id)arg1;
- (void)redEnvelopes2019GreetingViewControllerBack;
- (void)showDetailView;
- (void)showReceiveView:(_Bool)arg1 NoShowIcon:(_Bool)arg2;
- (void)startLogic;
- (void)stopLoading;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

