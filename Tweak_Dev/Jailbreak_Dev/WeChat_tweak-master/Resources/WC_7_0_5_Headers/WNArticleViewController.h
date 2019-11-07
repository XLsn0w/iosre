//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavMMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavTagViewDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMScrollActionSheetDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "MinimizationTransitionControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCScheduleLogicControllerDelegate.h"
#import "WNAlertViewHelperDelegate.h"
#import "WNArticleControllerDelegate.h"
#import "WNSelectViewDelegate.h"

@class FavoritesBrowseDetailReportData, FavoritesItemDataField, MMScrollActionSheet, MMTableView, MMTimer, MinimizationTransitionController, NSString, UIButton, UIView, WCScheduleLogicController, WNArticleDataController, WNArticleFooterView, WNParagraphStyleToolView, WNSelectView;

@interface WNArticleViewController : FavMMUIViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavTagViewDelegate, MMTipsViewControllerDelegate, WNSelectViewDelegate, WCScheduleLogicControllerDelegate, MMScrollActionSheetDelegate, IVOIPUILogicMgrExt, WNAlertViewHelperDelegate, MinimizationTransitionControllerDelegate, WNArticleControllerDelegate>
{
    WNParagraphStyleToolView *m_toolView;
    UIView *_headerView;
    WNArticleFooterView *_footerView;
    WNArticleDataController *m_dataController;
    MMTableView *m_tableView;
    MMTimer *_saveTimer;
    WNSelectView *_selectView;
    _Bool bDeletePopView;
    double m_keyboardHeight;
    WCScheduleLogicController *_scheduleLogicController;
    MMScrollActionSheet *_scrollActionSheet;
    _Bool forceHideTimeHeader;
    MinimizationTransitionController *_minimizationTransitionController;
    UIButton *m_exposeButton;
    _Bool bEditable;
    _Bool _bShowMoreMenu;
    FavoritesBrowseDetailReportData *_reportData;
    FavoritesItemDataField *_scrollToData;
}

- (void).cxx_destruct;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (_Bool)BeEditable;
- (id)GetScheduleHeaderView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToMinimize;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
@property(nonatomic) _Bool bShowMoreMenu; // @synthesize bShowMoreMenu=_bShowMoreMenu;
- (void)backupNote;
- (void)checkFooterView;
- (void)checkShowContext;
- (void)configNavbar;
- (void)configWithDataWrap:(id)arg1;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)deleteRowAtIndex:(long long)arg1;
- (void)disMissSelf;
- (id)favItem;
- (void)forceShowKeyboard;
- (void)forwardNote;
- (id)getFavForawrdViewController;
- (id)getFooterViewImage;
- (void)getNoteImage:(CDUnknownBlockType)arg1;
- (id)getTableView;
- (double)getTableViewContentHeight;
- (void)getTableViewimage:(CDUnknownBlockType)arg1;
- (id)getViewController;
- (void)hasLoadAllParaInfo;
- (void)hideKeyboard;
- (void)hideLoadingView;
- (void)hideToolbarView;
- (void)highlightRowAtIndexPath:(id)arg1;
- (id)init;
- (void)initData;
- (void)initHeaderView;
- (void)initSelectView;
- (void)initTableView;
- (void)initToolView;
- (void)initUI;
- (void)insertNewRowAtIndex:(long long)arg1;
- (void)insertNewRowAtIndex:(long long)arg1 withCount:(long long)arg2;
- (void)installMinimizationTransitionController;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isCellVisible:(int)arg1;
- (_Bool)isEmpty;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)makeCellSelectionSyleNoneAtIndexPath:(id)arg1;
- (id)makeDefaultTableHeaderView;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (id)minimizationTaskData;
- (id)minimizationTransitionController;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (_Bool)needHideKeyboardToShowAlert;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onDownloadHtmlExpire;
- (void)onDownloadHtmlFail;
- (void)onEdited;
- (void)onExpose;
- (void)onFavTagEditBegin:(int)arg1;
- (void)onFavTagEditOK;
- (void)onForwardNote2WC;
- (void)onHideSelectAllView;
- (void)onMenuAction:(id)arg1;
- (void)onNoneTxtInfoNumExceed;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (void)onScheduleHeaderViewClicked;
- (void)onSelectAllViewToShow;
- (void)onSelectObjectView:(id)arg1;
- (void)onSelectParaTextForEditing:(struct _NSRange)arg1;
- (void)onShowFullToolbar;
- (void)onTimeSave;
- (void)onTopBarFrameChanged;
- (void)onTxtInfoTextLengthExceed;
- (void)onUpdateScheduleItem:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onWCScheduleCancelDatePickerView;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (void)realSaveNoteAsImage;
- (void)reloadAll;
- (void)reloadFooterView;
- (void)reloadRightBarBtn;
- (void)reloadRowAtIndex:(long long)arg1;
- (void)reloadRowsAtIndexArray:(id)arg1;
@property(retain, nonatomic) FavoritesBrowseDetailReportData *reportData; // @synthesize reportData=_reportData;
- (void)resizeCellViewAtIndex:(long long)arg1;
- (void)saveNote;
- (void)saveNoteAsImage;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
- (void)scrollToIndex:(long long)arg1;
- (void)scrollToIndex:(long long)arg1 atScrollPosition:(long long)arg2;
- (void)scrollToIndex:(long long)arg1 atScrollPosition:(long long)arg2 needHighlight:(_Bool)arg3 animation:(_Bool)arg4;
- (id)sessionId;
- (void)setBecomeFirstResponse:(long long)arg1;
- (void)setConversionOntop:(_Bool)arg1;
- (void)setDataEdited:(_Bool)arg1;
- (void)setM_uiVcType:(unsigned int)arg1;
- (void)setPopGestureEnable:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldShowAddTimeHeader;
- (_Bool)shouldShowSchedule;
- (void)showKeyboard;
- (void)showLoadingView;
- (void)startAutoSaveTimer;
- (void)stopAutoSaveTimer;
- (id)tryRemoveChatVoiceBeforeForward:(id)arg1;
- (void)unhighlightRowAtIndexPath:(id)arg1;
- (void)updateToolBarHeight:(int)arg1 KeyboardHeight:(double)arg2;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

