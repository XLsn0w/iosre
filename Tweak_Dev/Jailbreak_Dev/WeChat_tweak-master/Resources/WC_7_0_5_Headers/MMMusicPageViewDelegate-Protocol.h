//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton;

@protocol MMMusicPageViewDelegate <NSObject>

@optional
- (UIButton *)getPlayButton;
- (_Bool)isBottomViewHidden;
- (void)onBack2FirstPage;
- (void)onFollowArrayUpToShowSecondPage;
- (void)onShowSecondPage;
- (void)onUpdateBottomBtnColor:(NSString *)arg1;
- (void)showOrHideTopBottomView;
@end

