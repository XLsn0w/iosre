//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WALoadingViewController.h"

@class MFTitleView, MMUIButton;

@interface WASimulatedNativeWeAppLoadingViewController : WALoadingViewController
{
    MMUIButton *_returnButton;
    MFTitleView *_titleView;
    long long _orientation;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)showTitleLoading;
- (void)startEnterAppAnimation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

