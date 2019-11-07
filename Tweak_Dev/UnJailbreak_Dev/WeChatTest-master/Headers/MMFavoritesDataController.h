//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IFavoritesExt-Protocol.h"
#import "IFavoritesRepairSvrDataExt-Protocol.h"
#import "MyFavoritesBaseCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol FavoritesDataControllerDelegate;

@interface MMFavoritesDataController : MMObject <IFavoritesRepairSvrDataExt, UITableViewDataSource, UITableViewDelegate, MyFavoritesBaseCellDelegate, IFavoritesExt, WCActionSheetDelegate>
{
    id <FavoritesDataControllerDelegate> m_delegate;
    NSMutableDictionary *m_cellViewCache;
    NSMutableDictionary *m_selectedItemsDict;
    NSMutableArray *m_arrFavItem;
    _Bool m_bReadyToLoad;
    _Bool m_bEditing;
    _Bool m_bHasMoreData;
    unsigned int m_curMinItemUpdateTime;
    int m_dataType;
    _Bool _m_bAnimating;
}

@property(nonatomic) _Bool m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(readonly, nonatomic) NSMutableDictionary *m_selectedItemsDict; // @synthesize m_selectedItemsDict;
@property(nonatomic) _Bool m_bHasMoreData; // @synthesize m_bHasMoreData;
@property(nonatomic) _Bool m_bReadyToLoad; // @synthesize m_bReadyToLoad;
@property(nonatomic) _Bool m_bEditing; // @synthesize m_bEditing;
@property(nonatomic) __weak id <FavoritesDataControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onRepairUpdateFavItem:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)PushXMLContentForItem:(id)arg1;
- (void)updateCellView:(id)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnUpdateItems:(id)arg1;
- (void)OnUpdateItemDescription:(id)arg1 ErrCode:(int)arg2;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)checkScrollForTop:(id)arg1;
- (void)autoScrollForSearchBar:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)realDeleteFavItemAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)deleteFavItemAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)removePostImgs:(id)arg1;
- (void)removeFavItemData:(id)arg1;
- (void)deleteFavItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)genNormalCellView:(long long)arg1;
- (double)getHeightForItem:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLoadMore;
- (long long)getFavArrItemIndex:(long long)arg1;
- (void)initData;
- (void)restartAllFailedItem;
- (void)addPostItem:(id)arg1;
- (void)safeAddItemList:(id)arg1;
- (double)getContentOffsetAfterAdd:(id)arg1 firstVisibleItemIndex:(long long)arg2;
- (_Bool)isItemInArray:(unsigned int)arg1;
- (int)indexOfFavItem:(unsigned int)arg1;
- (_Bool)hasData;
- (void)clearCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

