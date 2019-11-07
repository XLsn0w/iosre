//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUINavigationController.h"

@class FixDocumentPresent, UIViewController;

@interface WAUINavigationController : MMUINavigationController
{
    UIViewController *_viewControllerBeingPushedOrPopTo;
    FixDocumentPresent *_presentProxy;
}

- (void).cxx_destruct;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (long long)preferredInterfaceOrientationForPresentation;
@property(retain, nonatomic) FixDocumentPresent *presentProxy; // @synthesize presentProxy=_presentProxy;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIViewController *viewControllerBeingPushedOrPopTo; // @synthesize viewControllerBeingPushedOrPopTo=_viewControllerBeingPushedOrPopTo;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tryForceRotationWhenPushOrPop:(id)arg1 ToViewController:(id)arg2;
- (void)viewDidPresent:(_Bool)arg1;

@end

