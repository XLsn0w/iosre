//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreEnterBaseStep.h"

#import "WCAccountBindPhoneControlLogicDelegate.h"

@class NSString, WCAccountBindPhoneControlLogic, WCAccountControlData;

@interface PreEnterBindPhoneStep : PreEnterBaseStep <WCAccountBindPhoneControlLogicDelegate>
{
    WCAccountControlData *m_data;
    WCAccountBindPhoneControlLogic *m_bindPhoneLogic;
}

- (void).cxx_destruct;
- (id)initWithMsg:(id)arg1;
- (id)initWithStyle:(id)arg1;
- (void)onSyncAddressBook;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)showBindPhoneInfoView:(id)arg1;
- (void)startStep;
- (void)stopBindPhoneLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

