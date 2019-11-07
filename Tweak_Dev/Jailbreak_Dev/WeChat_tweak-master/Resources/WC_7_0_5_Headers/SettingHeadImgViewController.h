//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "HDHeadImageViewDelegate.h"
#import "settingMyAccountExtInfoLogicDelegate.h"

@class MMHDHeadImageView, NSString, SettingMyAccountExtInfoLogic;

@interface SettingHeadImgViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate>
{
    MMHDHeadImageView *m_hdHeadImageView;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

- (void).cxx_destruct;
- (void)Operate:(id)arg1;
- (id)initWithContact:(id)arg1;
- (void)onImgBeginChange:(id)arg1;
- (void)onImgChangeEnd:(_Bool)arg1 withError:(id)arg2;
- (void)onImgSave;
- (void)onInfoChange;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

