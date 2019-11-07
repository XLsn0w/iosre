//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UITableViewCell, WCTableViewCellBaseConfig;

@interface WCTableViewCellManager : NSObject
{
    _Bool _isNeedFixWidthAndAdjustFont;
    _Bool _bNeedSeperateLine;
    _Bool _bSeperateLineBackToSide;
    WCTableViewCellBaseConfig *_cellConfig;
    id _userInfo;
    UIColor *_tintColor;
    UITableViewCell *_cell;
    double _fCellHeight;
    double _fSeperateLineLeftInset;
}

+ (id)ActivityIndicatorCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)cellForMakeSel:(SEL)arg1 makeTarget:(id)arg2 actionSel:(SEL)arg3 actionTarget:(id)arg4 height:(double)arg5 userInfo:(id)arg6;
+ (id)centerCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)centerCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4;
+ (id)detailDisclosureButtonCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)loadingCell;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 WithDisclosureIndicator:(_Bool)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImage:(id)arg7 WithDisclosureIndicator:(_Bool)arg8 withRightRedDot:(_Bool)arg9 selected:(_Bool)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 rightValue:(id)arg6 rightImageUrl:(id)arg7 WithDisclosureIndicator:(_Bool)arg8 withRightRedDot:(_Bool)arg9 selected:(_Bool)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightColor:(id)arg8 WithDisclosureIndicator:(_Bool)arg9 withRightRedDot:(_Bool)arg10 selected:(_Bool)arg11;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 titleColor:(id)arg5 badge:(id)arg6 rightValue:(id)arg7 rightImage:(id)arg8 WithDisclosureIndicator:(_Bool)arg9 withRightRedDot:(_Bool)arg10 selected:(_Bool)arg11;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 rightValue:(id)arg5 WithDisclosureIndicator:(_Bool)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 customView:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 icon:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 leftValue:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 canRightValueCopy:(_Bool)arg5 WithDisclosureIndicator:(_Bool)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 rightImage:(id)arg5 WithDisclosureIndicator:(_Bool)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 rightImage:(id)arg5 WithDisclosureIndicator:(_Bool)arg6 withRightRedDot:(_Bool)arg7;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 withRightRedDot:(_Bool)arg5 WithDisclosureIndicator:(_Bool)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightView:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 titleColor:(id)arg4 leftImage:(id)arg5 withRightRedDot:(_Bool)arg6;
+ (id)normalCellForTitle:(id)arg1;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 on:(_Bool)arg5;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedSeperateLine; // @synthesize bNeedSeperateLine=_bNeedSeperateLine;
@property(nonatomic) _Bool bSeperateLineBackToSide; // @synthesize bSeperateLineBackToSide=_bSeperateLineBackToSide;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) WCTableViewCellBaseConfig *cellConfig; // @synthesize cellConfig=_cellConfig;
- (double)cellHeightFor:(id)arg1;
- (double)cellSeparatorLeftInset;
- (void)configureCell:(id)arg1;
- (void)didBeClickedAt:(id)arg1;
@property(nonatomic) double fCellHeight; // @synthesize fCellHeight=_fCellHeight;
@property(nonatomic) double fSeperateLineLeftInset; // @synthesize fSeperateLineLeftInset=_fSeperateLineLeftInset;
- (id)init;
- (id)initWithConfig:(id)arg1;
@property(nonatomic) _Bool isNeedFixWidthAndAdjustFont; // @synthesize isNeedFixWidthAndAdjustFont=_isNeedFixWidthAndAdjustFont;
- (void)setNotStretchCellHeight:(double)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (long long)systemSelectionStyle:(unsigned long long)arg1;

@end

