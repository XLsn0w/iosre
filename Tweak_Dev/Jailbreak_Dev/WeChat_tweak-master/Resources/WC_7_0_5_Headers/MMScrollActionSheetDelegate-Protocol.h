//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMScrollActionSheet, MMScrollActionSheetItem, NSString;

@protocol MMScrollActionSheetDelegate <NSObject>

@optional
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 clickCustomBtn:(id)arg2;
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 didClickUrl:(NSString *)arg2;
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 didSelecteItem:(MMScrollActionSheetItem *)arg2;
- (void)scrollActionSheetDidAppeared:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidCancel:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidScroll:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetWillDismiss:(MMScrollActionSheet *)arg1;
@end

