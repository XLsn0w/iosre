//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class ABTestItem, MMTimer, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface MMQuickSendEmoticonView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *m_collectionView;
    UICollectionViewFlowLayout *m_collectionLayout;
    NSArray *m_wrapList;
    NSString *m_desc;
    MMTimer *m_timer;
    double m_timeInterval;
    int m_viewCount;
    unsigned long long m_startTime;
    id <MMQuickSendEmoticonViewDelegate> _delegate;
    ABTestItem *_abTestItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABTestItem *abTestItem; // @synthesize abTestItem=_abTestItem;
- (void)checkNeedHide;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configCollectionView;
@property(readonly, nonatomic) NSString *curShowingDesc;
@property(nonatomic) __weak id <MMQuickSendEmoticonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)emoticonWrapCount;
- (void)hide;
- (void)hideQuickSendEmoticonView;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)setEmoticonWrapList:(id)arg1 desc:(id)arg2;
- (void)showQuickSendEmoticonView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

