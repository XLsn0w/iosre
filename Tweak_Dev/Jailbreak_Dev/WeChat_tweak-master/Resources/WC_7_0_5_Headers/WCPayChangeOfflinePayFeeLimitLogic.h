//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayChangeOfflinePayLimitFeeViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"

@class NSString;

@interface WCPayChangeOfflinePayFeeLimitLogic : WCPayControlLogic <WCPayChangeOfflinePayLimitFeeViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
{
    int m_enWCPayChangeOfflinePayFeeLimitLogicScene;
}

- (void)EndChangeOfflinePayFeeLimit;
- (void)OnChangeOfflinePayLimit:(id)arg1 Error:(id)arg2;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerBack;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerChangeToLimit:(long long)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (id)initWithData:(id)arg1;
@property(nonatomic) int m_enWCPayChangeOfflinePayFeeLimitLogicScene; // @synthesize m_enWCPayChangeOfflinePayFeeLimitLogicScene;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

