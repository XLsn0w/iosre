//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "contactVerifyLogicDelegate.h"

@class CContact, CContactVerifyLogic, CMessageWrap, MMUIViewController, NSString, SendVerifyMsgViewController;

@interface SendVerifyMsgLogicController : NSObject <contactVerifyLogicDelegate>
{
    MMUIViewController *m_parentVC;
    _Bool canOnCancel;
    SendVerifyMsgViewController *m_vc;
    CContactVerifyLogic *m_oContactVerifyLogic;
    _Bool _m_bVerifyToMe;
    _Bool _m_needAnimationPopAfterOK;
    int _m_qrCodeAddFriendScene;
    CContact *_m_oVerifyContact;
    id <SendVerifyMsgViewControllerDelegate> _m_delegate;
    CContact *_m_oChatContact;
    CMessageWrap *_m_oSourceMsg;
}

- (void).cxx_destruct;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (id)initWithParentVC:(id)arg1;
@property(nonatomic) _Bool m_bVerifyToMe; // @synthesize m_bVerifyToMe=_m_bVerifyToMe;
@property(nonatomic) __weak id <SendVerifyMsgViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_needAnimationPopAfterOK; // @synthesize m_needAnimationPopAfterOK=_m_needAnimationPopAfterOK;
@property(retain, nonatomic) CContact *m_oChatContact; // @synthesize m_oChatContact=_m_oChatContact;
@property(retain, nonatomic) CMessageWrap *m_oSourceMsg; // @synthesize m_oSourceMsg=_m_oSourceMsg;
@property(retain, nonatomic) CContact *m_oVerifyContact; // @synthesize m_oVerifyContact=_m_oVerifyContact;
@property(nonatomic) int m_qrCodeAddFriendScene; // @synthesize m_qrCodeAddFriendScene=_m_qrCodeAddFriendScene;
- (void)onCancel;
- (void)onContactVerifyFail;
- (void)onDismiss;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

