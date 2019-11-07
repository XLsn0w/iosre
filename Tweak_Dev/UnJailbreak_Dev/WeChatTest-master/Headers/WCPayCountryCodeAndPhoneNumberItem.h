//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, UILabel, UIView, WCPayControlData, WCPayPhoneTextItem;
@protocol WCPayCountryCodeAndPhoneNumberItemDelegate;

@interface WCPayCountryCodeAndPhoneNumberItem : WCBaseInfoItem <WCBaseInfoItemDelegate>
{
    WCPayControlData *_data;
    id <WCPayCountryCodeAndPhoneNumberItemDelegate> _delegate;
    WCPayPhoneTextItem *_phoneTextItem;
    WCPayPhoneTextItem *_countryCodeTextItem;
    UILabel *_plusLabel;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *plusLabel; // @synthesize plusLabel=_plusLabel;
@property(retain, nonatomic) WCPayPhoneTextItem *countryCodeTextItem; // @synthesize countryCodeTextItem=_countryCodeTextItem;
@property(retain, nonatomic) WCPayPhoneTextItem *phoneTextItem; // @synthesize phoneTextItem=_phoneTextItem;
@property(nonatomic) __weak id <WCPayCountryCodeAndPhoneNumberItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)resignFirstResponder;
- (void)showDetailTip;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
- (void)setCountryCodeItemIsValid:(_Bool)arg1;
- (void)setCountryCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

