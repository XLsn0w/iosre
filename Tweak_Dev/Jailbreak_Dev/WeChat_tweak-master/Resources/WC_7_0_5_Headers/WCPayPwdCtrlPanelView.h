//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ILinkEventExt.h"

@class NSString, RichTextView, UIImageView, UILabel, WCPayTenpayPasswordCtrlItem;

@interface WCPayPwdCtrlPanelView : UIView <ILinkEventExt>
{
    UIImageView *m_footerTipImageView;
    UILabel *m_footerTip;
    UIView *m_footerView;
    WCPayTenpayPasswordCtrlItem *m_textField;
    RichTextView *tip;
    UILabel *m_titleLabel;
    UILabel *m_tipsLabel;
    double _contentViewY;
    NSString *_m_nsTitle;
    NSString *_m_nsTips;
}

- (void).cxx_destruct;
@property(nonatomic) double contentViewY; // @synthesize contentViewY=_contentViewY;
- (void)dealloc;
- (id)initWithTip:(id)arg1;
- (id)initWithTitle:(id)arg1 tips:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *m_nsTips; // @synthesize m_nsTips=_m_nsTips;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle=_m_nsTitle;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_textField; // @synthesize m_textField;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setError:(id)arg1;
- (void)setFooterView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

