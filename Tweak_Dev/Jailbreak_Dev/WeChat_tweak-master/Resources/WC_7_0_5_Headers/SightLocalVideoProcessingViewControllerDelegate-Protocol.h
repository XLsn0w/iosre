//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SightDraft, SightLocalVideoProcessingViewController;

@protocol SightLocalVideoProcessingViewControllerDelegate <NSObject>

@optional
- (void)sightLocalVideoProcessingViewController:(SightLocalVideoProcessingViewController *)arg1 didFinishEditingWithSightDraft:(SightDraft *)arg2;
- (void)sightLocalVideoProcessingViewControllerDidCancel:(SightLocalVideoProcessingViewController *)arg1;
- (void)sightLocalVideoProcessingViewControllerDidFailToEdit:(SightLocalVideoProcessingViewController *)arg1;
@end

