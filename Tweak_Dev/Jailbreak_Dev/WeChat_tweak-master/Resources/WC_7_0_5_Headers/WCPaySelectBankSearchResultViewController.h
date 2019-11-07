//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSArray, UISearchController;

@interface WCPaySelectBankSearchResultViewController : WCPayBaseViewController
{
    id <WCPaySelectBankSearchResultViewControllerDelegate> _delegate;
    NSArray *_results;
    UISearchController *_searchController;
    double _searchBackgroundY;
    double _searchBackgroundHeight;
}

- (void).cxx_destruct;
- (void)clickInfoCell:(struct WCTableViewNormalCellManager *)arg1;
@property(nonatomic) __weak id <WCPaySelectBankSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)fixSearchBarBackgroundWhenActive;
- (void)makeSearchBankCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)reloadData;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) double searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) double searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (id)tableViewForHeader;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

