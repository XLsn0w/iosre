//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class UIScrollView, WCTimeLineViewController;

@protocol TimelineSessionSwizzleExt

@optional
- (void)onReloadDataWrap;
- (void)onScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidScroll:(UIScrollView *)arg1 withOriginalCostTime:(unsigned long long)arg2;
- (void)onViewDidAppear:(_Bool)arg1 withVC:(WCTimeLineViewController *)arg2;
- (void)onViewDidDisappear:(_Bool)arg1;
- (void)onViewWillBePoped:(_Bool)arg1;
- (void)onViewWillBePushed:(_Bool)arg1;
@end

