//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPickerView.h"

#import "MMActionSheetCustomPickerPotocol.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSDate, NSMutableArray, NSString;

@interface MMScheduleDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, MMActionSheetCustomPickerPotocol>
{
    NSDate *_currentDate;
    id _scheduleDelegate;
    NSMutableArray *_dayComponents;
    NSMutableArray *_timeComponents;
    NSMutableArray *_normalTimeComponents;
    NSMutableArray *_todayTimeComponents;
    long long _lastSelectDay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSMutableArray *dayComponents; // @synthesize dayComponents=_dayComponents;
- (long long)daysInThisMonth;
- (void)didAddSubview:(id)arg1;
- (id)getDayString:(id)arg1 AfterMonth:(unsigned int)arg2 inDay:(unsigned int)arg3;
- (id)getDayStringAfterDay:(unsigned int)arg1;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long lastSelectDay; // @synthesize lastSelectDay=_lastSelectDay;
@property(retain, nonatomic) NSMutableArray *normalTimeComponents; // @synthesize normalTimeComponents=_normalTimeComponents;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
@property(nonatomic) __weak id scheduleDelegate; // @synthesize scheduleDelegate=_scheduleDelegate;
- (id)selectedDate;
@property(retain, nonatomic) NSMutableArray *timeComponents; // @synthesize timeComponents=_timeComponents;
@property(retain, nonatomic) NSMutableArray *todayTimeComponents; // @synthesize todayTimeComponents=_todayTimeComponents;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

