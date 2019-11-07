//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, ReaderItemView, UIImage;

@protocol ReaderItemViewDelegate <NSObject>
- (_Bool)bShouldReportShowInfo;
- (UIImage *)cacheImageForCover:(NSString *)arg1;
- (NSArray *)getReadWraps;
- (void)onReaderItemBeginTouch:(unsigned int)arg1;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(ReaderItemView *)arg2;
- (void)onReaderItemDidLoadCoverImage:(unsigned int)arg1 coverImage:(UIImage *)arg2 cover:(NSString *)arg3;
- (void)onReaderItemLongPress:(unsigned int)arg1;
@end

