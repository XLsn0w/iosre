//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface FTSMoreCell : MMTableViewCell
{
    UIImageView *_moreIcon;
    UIImageView *_rightArrowIcon;
    UILabel *_moreTipLabel;
    UIView *_topLine;
}

- (void).cxx_destruct;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateViewMoreTip:(id)arg1;

@end
