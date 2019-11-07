//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UISearchBarDelegate.h"

@class NSArray, NSString, UISearchBar;

@interface FLEXLibrariesTableViewController : UITableViewController <UISearchBarDelegate>
{
    NSArray *_imageNames;
    NSArray *_filteredImageNames;
    UISearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *filteredImageNames; // @synthesize filteredImageNames=_filteredImageNames;
@property(retain, nonatomic) NSArray *imageNames; // @synthesize imageNames=_imageNames;
- (id)initWithStyle:(long long)arg1;
- (void)loadImageNames;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)shortNameForImageName:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

