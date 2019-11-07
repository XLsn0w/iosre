//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIGestureRecognizer, UIImage, UIView;

@protocol MultiImageScrollViewDelegate <NSObject>
- (UIImage *)imageAtPage:(unsigned int)arg1;
- (UIView *)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;

@optional
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (NSString *)imagePathAtPage:(unsigned int)arg1;
- (void)onChangePage;
- (void)multiImageScrollViewWillBeginDragging;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onDoubleTap:(UIGestureRecognizer *)arg1;
- (void)onSingleTap:(UIGestureRecognizer *)arg1;
@end

