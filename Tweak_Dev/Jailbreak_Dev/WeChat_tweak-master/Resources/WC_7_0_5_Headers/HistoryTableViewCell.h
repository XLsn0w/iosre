//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class MMUILabel, MMWebImageView, UIView, VerticallyAlignedLabel;

@interface HistoryTableViewCell : MMMultiMenuTableViewCell
{
    VerticallyAlignedLabel *_title;
    MMUILabel *_source;
    MMWebImageView *_image;
    MMUILabel *_time;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *image; // @synthesize image=_image;
- (void)initLineView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUILabel *source; // @synthesize source=_source;
- (void)setTableCellInfo:(id)arg1;
@property(retain, nonatomic) MMUILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) VerticallyAlignedLabel *title; // @synthesize title=_title;

@end

