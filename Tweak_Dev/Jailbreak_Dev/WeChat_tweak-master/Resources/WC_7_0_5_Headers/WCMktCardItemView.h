//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface WCMktCardItemView : UIView
{
    id <WCMktCardItemViewDelegate> _delegate;
    NSArray *_couponList;
}

- (void).cxx_destruct;
- (void)cardBtnClick:(id)arg1;
- (void)clickGeneralCardTagListBtn:(id)arg1;
- (void)clickGeneralCouponTagListBtn:(id)arg1;
@property(retain, nonatomic) NSArray *couponList; // @synthesize couponList=_couponList;
@property(nonatomic) __weak id <WCMktCardItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genGeneralCardView:(id)arg1 index:(long long)arg2;
- (id)genGeneralCouponsView:(id)arg1 index:(long long)arg2;
- (id)genTagButtonWithTagData:(id)arg1;
- (void)handleTagBtnClick:(id)arg1;
- (void)setupContentView:(unsigned int)arg1;
- (void)updateCardItemViewWithCouponListData:(id)arg1 displayCount:(unsigned int)arg2;

@end

