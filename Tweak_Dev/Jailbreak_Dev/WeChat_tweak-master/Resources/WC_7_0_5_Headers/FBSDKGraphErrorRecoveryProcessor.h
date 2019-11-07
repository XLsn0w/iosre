//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKErrorRecoveryAttempter, NSError;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject
{
    FBSDKErrorRecoveryAttempter *_recoveryAttempter;
    NSError *_error;
    id <FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) id <FBSDKGraphErrorRecoveryProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPresentErrorWithRecovery:(_Bool)arg1 contextInfo:(void *)arg2;
- (void)displayAlertWithRecoverySuggestion:(id)arg1 recoveryOptionsTitles:(id)arg2;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
- (_Bool)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3;

@end

