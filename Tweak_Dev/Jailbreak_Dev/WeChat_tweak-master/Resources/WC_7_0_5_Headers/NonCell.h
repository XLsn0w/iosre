//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MMUILabel, UIImageView, UIView;

@interface NonCell : UICollectionViewCell
{
    UIView *m_iconView;
    MMUILabel *m_descLabel;
    UIImageView *_icon;
}

+ (id)identifier;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

