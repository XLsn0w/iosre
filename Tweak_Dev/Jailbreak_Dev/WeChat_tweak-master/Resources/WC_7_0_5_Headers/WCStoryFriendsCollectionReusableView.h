//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class MMUILabel, NSString;

@interface WCStoryFriendsCollectionReusableView : UICollectionReusableView
{
    NSString *_title;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupUI;

@end

