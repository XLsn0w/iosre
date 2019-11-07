//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (ModalView)
+ (void)load;
- (void)DismissModalViewControllerAnimated:(_Bool)arg1;
- (void)DismissModalViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)DismissMyselfAndOther:(_Bool)arg1;
- (void)DismissMyselfAndOther:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)DismissMyselfAnimated:(_Bool)arg1;
- (void)DismissMyselfAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 forceFullScreen:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)internalDismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isBeingDismissedAsFirstPresented; // @dynamic isBeingDismissedAsFirstPresented;
@property(nonatomic) _Bool isForceFullScreen; // @dynamic isForceFullScreen;
- (_Bool)isPrimaryViewControllerForSplitView;
- (id)presentedBythisVC;
- (id)presentingThisVC;
- (id)previousViewController;
@end

