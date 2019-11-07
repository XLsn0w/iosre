//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString, UIButton, UIColor, UIView, WAContact;

@interface WAGameActionSheet : MMObject
{
    WAContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSArray *m_menuItems;
    NSString *m_cancelTitle;
    _Bool m_isLandScape;
    _Bool m_isNewGroup;
    double kButtonFontSize;
    double MENU_ICON_LRMARGIN;
    double MENU_ICON_SIZE;
    double MENU_FONT_SIZE;
    double MENU_TO_TITLE;
    double kButtonHeight;
    double kHeaderButtonIconSize;
    double WAActivityHeadHonrizonMargin;
    UIColor *kMaskViewBGColor;
    double kMaskViewBGAlpha;
    UIColor *kContainerViewBGColor;
    UIColor *kMenuButtonColor;
    UIColor *kMenuButtonHighlightColor;
    UIColor *kMenuBorderColor;
    UIColor *kButtonTitleColor;
    UIColor *kMenuTitleColor;
    long long BLUR_EFFECT_TYPE;
    double kActionSheetWidth;
    double kBorderWidth;
    _Bool _isUseWeAppModule;
    _Bool _isDismissForbidAnimation;
    id <WAGameActionSheetDelegate> _delegate;
    long long _actionSheetStyle;
    UIView *_maskView;
    UIView *_containerView;
    UIButton *_cancelBtn;
    UIView *_parentView;
}

- (void).cxx_destruct;
- (double)LANDSCAPEFLOAT:(id)arg1 withPortrait:(id)arg2;
- (id)STYLECOLORWithLight:(id)arg1 ligthAlpha:(double)arg2 dark:(id)arg3 darkAlpha:(double)arg4;
@property(nonatomic) long long actionSheetStyle; // @synthesize actionSheetStyle=_actionSheetStyle;
- (double)addButtonToView:(id)arg1 button:(id)arg2 originY:(double)arg3;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
@property(nonatomic) __weak id <WAGameActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRotate:(id)arg1;
- (void)dismissWithAnimation;
- (double)endButtonGroups:(id)arg1 originY:(double)arg2;
- (id)genHeaderBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (id)genMenuButton:(id)arg1 withIndex:(long long)arg2;
- (id)genNormalBtn:(id)arg1;
- (id)genboundaryLine:(struct CGSize)arg1;
- (double)getActionSheetWidth;
- (double)getScreenHeight;
- (double)getScreenWidth;
- (id)initWithUsrName:(id)arg1 orientation:(long long)arg2 appType:(unsigned long long)arg3 cancelButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;
@property(nonatomic) _Bool isDismissForbidAnimation; // @synthesize isDismissForbidAnimation=_isDismissForbidAnimation;
- (_Bool)isSmallScreenLandscape;
@property(nonatomic) _Bool isUseWeAppModule; // @synthesize isUseWeAppModule=_isUseWeAppModule;
- (_Bool)isVisible;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)onButtonClicked:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)onHeaderButtonClicked:(id)arg1;
- (void)onMenuButtonClicked:(id)arg1;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (struct UIEdgeInsets)realSafeAreaInsets;
- (void)setDebugTitles:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)setupButtonsView;
- (void)setupContainerView;
- (void)setupMaskView;
- (id)setupMenuView:(double)arg1;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

