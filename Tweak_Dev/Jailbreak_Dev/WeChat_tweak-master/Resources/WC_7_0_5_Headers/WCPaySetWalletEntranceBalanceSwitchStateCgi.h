//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@interface WCPaySetWalletEntranceBalanceSwitchStateCgi : WCPayBaseCgi
{
    id <WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
@property __weak id <WCPaySetWalletEntranceBalanceSwitchStateCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)startRequestWithSwitchOpen:(_Bool)arg1;

@end

