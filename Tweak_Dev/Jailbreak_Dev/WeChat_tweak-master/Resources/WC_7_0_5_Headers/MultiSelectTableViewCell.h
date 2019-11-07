//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView;

@interface MultiSelectTableViewCell : UITableViewCell
{
    UIImageView *m_selectedImageView;
    _Bool m_bAnimated;
    unsigned int m_iAnimatedCount;
    _Bool m_bSelected;
    _Bool m_bNeedOffset;
    _Bool m_bIsEditting;
    _Bool m_bShowSelectedFlag;
    _Bool _m_bCanSelected;
}

- (void).cxx_destruct;
- (void)adjustSelectFlagFrameInternal;
- (void)changeSelectdStatus:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) _Bool m_bCanSelected; // @synthesize m_bCanSelected=_m_bCanSelected;
@property(nonatomic) _Bool m_bIsEditting; // @synthesize m_bIsEditting;
@property(nonatomic) _Bool m_bNeedOffset; // @synthesize m_bNeedOffset;
@property(readonly, nonatomic) _Bool m_bSelected; // @synthesize m_bSelected;
@property(nonatomic) _Bool m_bShowSelectedFlag; // @synthesize m_bShowSelectedFlag;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

@end

