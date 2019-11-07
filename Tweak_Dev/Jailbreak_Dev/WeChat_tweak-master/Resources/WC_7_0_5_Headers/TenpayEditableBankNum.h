//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, TenpayDelegate;

@interface TenpayEditableBankNum : UIView <UITextFieldDelegate>
{
    TenpayDelegate *_dataHandler;
    NSMutableArray *arrTextField;
}

- (id)Get3DesEncryptData;
- (id)GetRsa2048EncryptData;
- (id)GetRsaEncryptData;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (void)dealloc;
- (id)getFullBankNum;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andCodeNum:(id)arg2;
- (void)setKeyboradImgWithNumNormal:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

