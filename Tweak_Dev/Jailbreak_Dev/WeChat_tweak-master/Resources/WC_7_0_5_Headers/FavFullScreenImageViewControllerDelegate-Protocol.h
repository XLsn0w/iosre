//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, FavoritesItemDataField, NSString, UIImage;

@protocol FavFullScreenImageViewControllerDelegate <NSObject>

@optional
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(UIImage *)arg2;
- (void)onShowFavContext:(FavoritesItem *)arg1 DataItem:(FavoritesItemDataField *)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(NSString *)arg6;
@end

