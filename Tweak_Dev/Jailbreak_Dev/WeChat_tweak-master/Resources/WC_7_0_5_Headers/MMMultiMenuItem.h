//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface MMMultiMenuItem : NSObject
{
    _Bool _bIsLoading;
    long long _editingStyle;
    UIColor *_backgroundColor;
    NSString *_nsTitle;
    UIImage *_icon;
    UIImage *_highlightedIcon;
    double _menuItemWidth;
    MMMultiMenuItem *_confirmMenuItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsLoading; // @synthesize bIsLoading=_bIsLoading;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) MMMultiMenuItem *confirmMenuItem; // @synthesize confirmMenuItem=_confirmMenuItem;
@property(nonatomic) long long editingStyle; // @synthesize editingStyle=_editingStyle;
@property(retain, nonatomic) UIImage *highlightedIcon; // @synthesize highlightedIcon=_highlightedIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) double menuItemWidth; // @synthesize menuItemWidth=_menuItemWidth;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;

@end

