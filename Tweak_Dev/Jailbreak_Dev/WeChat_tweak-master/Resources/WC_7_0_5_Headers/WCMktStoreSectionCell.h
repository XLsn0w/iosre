//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class CardSortInfo, MMUILabel, UIButton, UIImageView, UIView;

@interface WCMktStoreSectionCell : MMTableViewCell
{
    id <WCMktStoreSectionCellDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_leftLabel;
    MMUILabel *_rightLabel;
    UIImageView *_rightArrowImgView;
    UIView *_seplineView;
    UIButton *_coverBtn;
    CardSortInfo *_sortInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *coverBtn; // @synthesize coverBtn=_coverBtn;
@property(nonatomic) __weak id <WCMktStoreSectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) MMUILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *rightArrowImgView; // @synthesize rightArrowImgView=_rightArrowImgView;
@property(retain, nonatomic) MMUILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UIView *seplineView; // @synthesize seplineView=_seplineView;
@property(nonatomic) CardSortInfo *sortInfo; // @synthesize sortInfo=_sortInfo;
- (void)sortRuleCoverBtnClick;
- (void)updateCellContentWithSortInfo:(id)arg1;

@end

