//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class FavoritesTagDB, NSMutableArray, NSString;

@interface FavoritesTagMgr : MMObject <PBMessageObserverDelegate>
{
    FavoritesTagDB *_favTagDB;
    NSMutableArray *m_tagEditingItems;
    NSString *m_editingTag;
    NSString *m_newTag;
    CDUnknownBlockType m_tagEditHandler;
    id <FavoritesTagMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)deleteItemTagsByFavLocalId:(unsigned int)arg1;
- (id)getAllTags;
- (id)getItemTags:(unsigned int)arg1;
- (id)init;
- (void)initDB:(id)arg1;
@property(nonatomic) __weak id <FavoritesTagMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)startBatchUpdateTag;
- (void)updateItemTags:(id)arg1 byFavLocalId:(unsigned int)arg2;
- (void)updateTag:(id)arg1 with:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateTagInFavItem:(id)arg1;
- (void)updateTagInList:(id)arg1;

@end

