//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

@interface HoneyPaySelectCardTypeViewController : HoneyPayBaseViewController
{
    id <HoneyPaySelectCardTypeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)clickCardCell:(struct WCTableViewNormalCellManager *)arg1;
@property(nonatomic) __weak id <HoneyPaySelectCardTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeCardCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)viewDidLoad;

@end

