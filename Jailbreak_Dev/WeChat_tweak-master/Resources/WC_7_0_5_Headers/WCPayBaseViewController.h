//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "MMTableViewInfoDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCBaseInfoItemDelegate.h"

@class NSString, WCPayControlData;

@interface WCPayBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate, UIAlertViewDelegate>
{
    WCPayControlData *m_data;
    id <WCPayBaseViewControllerDelegate> _payBaseDelegate;
    id <WCPayBaseViewControllerRemoveDelegate> _removeDelegate;
}

- (void).cxx_destruct;
- (void)OnBack;
- (void)dealloc;
- (void)refreshViewWithData:(id)arg1;
@property(nonatomic) __weak id <WCPayBaseViewControllerRemoveDelegate> removeDelegate; // @synthesize removeDelegate=_removeDelegate;
- (void)setPayBaseDelegate:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
