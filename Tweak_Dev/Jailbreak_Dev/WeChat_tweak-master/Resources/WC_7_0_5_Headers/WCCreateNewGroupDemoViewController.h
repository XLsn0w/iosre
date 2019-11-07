//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MMTableViewInfo, MMUILabel, NSString, UITextField;

@interface WCCreateNewGroupDemoViewController : MMUIViewController <MMTableViewInfoDelegate, UITextFieldDelegate, UIAlertViewDelegate>
{
    _Bool bWaitParentViewControllerDismissWhenDone;
    _Bool _bIsTagNameOverLimit;
    _Bool _bIsShowWarningText;
    id <WCCreateNewGroupDemoViewControllerDelegate> _delegate;
    NSString *_existTagName;
    NSString *_tagSvrName;
    MMTableViewInfo *_tableViewInfo;
    UITextField *_tagNameEditTextField;
    MMUILabel *_warningTextLabel;
    NSString *_tagNamePlaceHolder;
    NSString *_hintText;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bIsShowWarningText; // @synthesize bIsShowWarningText=_bIsShowWarningText;
@property(nonatomic) _Bool bIsTagNameOverLimit; // @synthesize bIsTagNameOverLimit=_bIsTagNameOverLimit;
@property(nonatomic) __weak id <WCCreateNewGroupDemoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissViewController;
@property(retain, nonatomic) NSString *existTagName; // @synthesize existTagName=_existTagName;
- (void)hideWarningText;
@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
- (void)initTableViewInfoData;
- (id)initWithPlaceHolder:(id)arg1 hintText:(id)arg2 withDelegate:(id)arg3;
- (_Bool)isChangeTagName;
- (void)makeEditCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeTopicEditView;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onDone;
- (void)onReturn;
- (void)onTagNameChanged:(id)arg1;
- (void)setSaveButtonEnable:(_Bool)arg1;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) UITextField *tagNameEditTextField; // @synthesize tagNameEditTextField=_tagNameEditTextField;
@property(retain, nonatomic) NSString *tagNamePlaceHolder; // @synthesize tagNamePlaceHolder=_tagNamePlaceHolder;
@property(retain, nonatomic) NSString *tagSvrName; // @synthesize tagSvrName=_tagSvrName;
- (void)setWaitParentViewControllerDismissWhenDone:(_Bool)arg1;
@property(retain, nonatomic) MMUILabel *warningTextLabel; // @synthesize warningTextLabel=_warningTextLabel;
- (void)showWarningText:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

