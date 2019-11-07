//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class InteractionLabel, MMUILabel, UIView;

@interface WCListTipCellView : MMTableViewCell
{
    MMUILabel *oTipLabel;
    InteractionLabel *oSubTipLabel;
    UIView *oLeftLine;
    UIView *oRightLine;
    double fTopMargin;
}

+ (double)heightOfCellWithTip:(id)arg1 subTip:(id)arg2 topMargin:(double)arg3 bottomMargin:(double)arg4;
- (void).cxx_destruct;
- (void)configureWithTip:(id)arg1 subTip:(id)arg2 topMargin:(double)arg3;
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)onActionSubTipLabel:(id)arg1;

@end

