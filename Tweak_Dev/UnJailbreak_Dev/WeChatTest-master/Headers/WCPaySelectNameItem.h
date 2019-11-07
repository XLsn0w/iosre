//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "WCPayLogicMgrExt-Protocol.h"

@class NSString, TenpaySecureCtrl, UILabel;

@interface WCPaySelectNameItem : WCBaseTextFieldItem <WCPayLogicMgrExt>
{
    UILabel *m_nameLabel;
    _Bool m_isUnselectable;
    NSString *m_value;
    TenpaySecureCtrl *m_secureTextField;
}

- (void).cxx_destruct;
- (_Bool)onError:(id)arg1;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (id)getEncryptedValue;
- (id)getTextValue;
- (void)setReceiverName:(id)arg1;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

