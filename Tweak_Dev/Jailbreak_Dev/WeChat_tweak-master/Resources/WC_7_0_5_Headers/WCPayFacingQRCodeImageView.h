//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "WCActionSheetDelegate.h"

@class NSString;

@interface WCPayFacingQRCodeImageView : UIImageView <WCActionSheetDelegate>
{
    id <WCPayFacingQRCodeImageViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)LongPressEvents;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <WCPayFacingQRCodeImageViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

