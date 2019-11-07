//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKWebDialogViewDelegate.h"

@class FBSDKWebDialogView, NSDictionary, NSString, UIView;

@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate>
{
    UIView *_backgroundView;
    FBSDKWebDialogView *_dialogView;
    _Bool _deferVisibility;
    id <FBSDKWebDialogDelegate> _delegate;
    NSString *_name;
    NSDictionary *_parameters;
}

+ (id)showWithName:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
- (void)_addObservers;
- (struct CGRect)_applicationFrameForOrientation;
- (void)_cancel;
- (void)_completeWithResults:(id)arg1;
- (void)_deviceOrientationDidChangeNotification:(id)arg1;
- (void)_dismissAnimated:(_Bool)arg1;
- (void)_failWithError:(id)arg1;
- (id)_generateURL:(id *)arg1;
- (void)_removeObservers;
- (_Bool)_showWebView;
- (struct CGAffineTransform)_transformForOrientation;
- (void)_updateViewsWithScale:(double)arg1 alpha:(double)arg2 animationDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
@property(nonatomic) __weak id <FBSDKWebDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic, getter=shouldDeferVisibility) _Bool deferVisibility; // @synthesize deferVisibility=_deferVisibility;
- (_Bool)show;
- (void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)webDialogView:(id)arg1 didFailWithError:(id)arg2;
- (void)webDialogViewDidCancel:(id)arg1;
- (void)webDialogViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

