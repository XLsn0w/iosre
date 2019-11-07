//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class MMUIViewController, NSString, UIPickerView, UIView;

@interface WCPayLQTSelectDateItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *m_pickerView;
    long long m_iStartDate;
    long long m_iEndDate;
    NSString *m_value;
    long long m_iNowDate;
    MMUIViewController *currentVC;
    UIView *backgroundView;
}

- (void).cxx_destruct;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)onBackgroundViewTap:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)setCurrentViewController:(id)arg1;
- (void)setNowDate:(long long)arg1;
- (void)setStartDate:(long long)arg1 endDate:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

