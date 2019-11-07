//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, WCMallFunctionActivity, WCPayWebImageView;

@interface WCMallFunctionActivityView : MMUIView
{
    WCMallFunctionActivity *m_oWCMallFunctionActivity;
    id <WCMallFunctionActivityViewDelegate> m_delegate;
    UIImageView *m_oPreImageView;
    WCPayWebImageView *activityIconView;
    double m_height;
    _Bool _vLine;
    _Bool _hLine;
}

+ (double)height;
+ (unsigned long long)rowCount;
+ (double)width;
- (void).cxx_destruct;
- (void)OnButtonDown;
- (void)dealloc;
@property _Bool hLine; // @synthesize hLine=_hLine;
- (void)initView;
- (id)initWithFunctionActivity:(id)arg1 dynamicHeight:(double)arg2 vLine:(_Bool)arg3 hLine:(_Bool)arg4;
@property(nonatomic) __weak id <WCMallFunctionActivityViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIImageView *m_oPreImageView; // @synthesize m_oPreImageView;
@property(retain, nonatomic) WCMallFunctionActivity *m_oWCMallFunctionActivity; // @synthesize m_oWCMallFunctionActivity;
@property _Bool vLine; // @synthesize vLine=_vLine;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

