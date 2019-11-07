//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIViewController, UIImageView, UIView, WAPopOverTaskBarView, WAPopOverTaskBarlogic;

@interface WAPopOverView : MMUIView
{
    _Bool _isDismissForbidAnimation;
    MMUIViewController *_containerVC;
    UIView *_interateView;
    UIImageView *_arrowImageView;
    UIView *_containerView;
    WAPopOverTaskBarView *_taskBarView;
    WAPopOverTaskBarlogic *_logic;
    UIView *_parentView;
    struct CGSize _preferedContentSize;
}

+ (double)getPopOverWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)dismissWithAnimation;
- (void)initArrowImageView;
- (void)initContainerView;
- (void)initInterateView;
- (id)initWithWAPopOverTaskLogic:(id)arg1;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) _Bool isDismissForbidAnimation; // @synthesize isDismissForbidAnimation=_isDismissForbidAnimation;
@property(retain, nonatomic) WAPopOverTaskBarlogic *logic; // @synthesize logic=_logic;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) struct CGSize preferedContentSize; // @synthesize preferedContentSize=_preferedContentSize;
@property(retain, nonatomic) WAPopOverTaskBarView *taskBarView; // @synthesize taskBarView=_taskBarView;
- (void)showInView:(id)arg1 atPoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;

@end

