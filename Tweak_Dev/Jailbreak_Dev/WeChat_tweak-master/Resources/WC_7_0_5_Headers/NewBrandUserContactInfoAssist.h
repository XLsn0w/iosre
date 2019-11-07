//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "BrandProfileFuwuCellDelegate.h"
#import "BrandProfileHeaderViewDelegate.h"
#import "BrandProfileMessageBaseCellDelegate.h"
#import "BrandProfileSettingViewControllerDelegate.h"
#import "BrandProfileTipsCellDelegate.h"
#import "IBrandAttrMgrExt.h"
#import "IHDHeadImageViewExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "MMImageLoaderObserver.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMWebSearchViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BizProfileV2Resp, BizServiceMenuButton, BrandProfileCgiContext, BrandProfileEnterInfo, BrandProfileHeaderView, BrandProfileReporter, MMHDHeadImageView, MMTableView, MMWebSearchController, NSMutableArray, NSMutableSet, NSString, WCADPageWrap, WCTimeLineFooterView, WOAPPrivacyConfirmLogic;

@interface NewBrandUserContactInfoAssist : CBaseContactInfoAssist <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, MMWebSearchViewDelegate, IBrandAttrMgrExt, BrandProfileHeaderViewDelegate, BrandProfileFuwuCellDelegate, BrandProfileSettingViewControllerDelegate, IHDHeadImageViewExt, IWCDeviceBrandMgrExt, MMRefreshTableFooterDelegate, MMImageLoaderObserver, BrandProfileMessageBaseCellDelegate, BrandProfileTipsCellDelegate>
{
    _Bool _isFocusBeforeFetchFirstPkg;
    _Bool _isJustAddedContact;
    _Bool _isSearchAcitive;
    BrandProfileCgiContext *_cgiContext;
    BizProfileV2Resp *_cacheItem;
    NSMutableArray *_sectionDataList;
    NSMutableArray *_visibleViewModelList;
    BrandProfileReporter *_reporter;
    BizServiceMenuButton *_selectedFuwu;
    unsigned long long _selectedFuwuIdx;
    MMTableView *_tableView;
    BrandProfileHeaderView *_headerView;
    WCTimeLineFooterView *_footerView;
    MMHDHeadImageView *_hdAvatarView;
    WCADPageWrap *_profilePageWrap;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    MMWebSearchController *_websearchController;
    NSMutableSet *m_setFastLoadTemplateType;
    unsigned int _searchFromIndex;
    unsigned int _m_uiFromScene;
    NSString *_searchKeyword;
    NSString *_searchExtraParamsString;
    BrandProfileEnterInfo *_bpeInfo;
    id <ContactInfoAssistDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)GetTableView;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToVisibleViewModelList:(id)arg1;
- (_Bool)appendGroupMsgList:(id)arg1;
@property(retain, nonatomic) BrandProfileEnterInfo *bpeInfo; // @synthesize bpeInfo=_bpeInfo;
- (void)cancelWebSearchAnimated:(_Bool)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteAllMessage;
- (void)didBeginSearch:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (id)extraInfoForFuwu;
- (void)fetchProfileFirstPkg;
- (void)fetchProfileNextPkg;
- (void)finallyAddToContacts;
- (id)genWebViewExtraInfoFromSourceMessage;
- (id)getAlertMessageForVerifyLogic:(id)arg1;
- (id)getAlertTitleForVerifyLogic:(id)arg1;
- (id)getFooterWordingForResp:(id)arg1;
- (unsigned int)getGroupMsgCount;
- (id)getTipsWordingForResp:(id)arg1;
- (void)handleAddedContact;
- (void)handleExposuredViewModel:(id)arg1;
- (void)handleFirstPkgResp:(id)arg1;
- (void)handleNextPkgResp:(id)arg1;
- (void)handleTipsWording;
- (void)handleVisibleViewModelList;
- (_Bool)hasDeviceUserData;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initNavigationBarButton;
- (void)initTableView;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (_Bool)isDeviceBound;
- (_Bool)isExistInSectionDataList:(id)arg1;
- (_Bool)isInCustomAlertMode;
- (_Bool)isInVisibleViewModelList:(id)arg1;
- (_Bool)isInteractivePopEnabled;
- (_Bool)isSeachActive;
- (void)loadLocalCache;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
- (void)modifyVerifyContactWrap:(id)arg1;
- (void)newMessageWithContact:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBrandAvatarClicked:(struct CGRect)arg1;
- (void)onContactUpdated;
- (void)onEnterButtonClicked:(id)arg1;
- (void)onFetchBizProfile:(id)arg1 resp:(id)arg2 action:(int)arg3 userInfo:(id)arg4;
- (void)onFinalBackButtonClick:(id)arg1;
- (void)onFocusButtonClicked:(id)arg1;
- (void)onFoldButtonClicked:(id)arg1;
- (void)onFuwuButtonClicked:(unsigned long long)arg1;
- (void)onMsgSectionHeightChange:(id)arg1;
- (void)onSearchButtonClick:(id)arg1;
- (void)onSearchClicked;
- (void)onTapBlurEffectView;
- (void)onUnfocusButtonClicked:(id)arg1;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onWebUrlClicked:(id)arg1;
- (void)opLogTopSession:(_Bool)arg1;
- (_Bool)openMPVideoWithBrandAppMsgDetailInfo:(id)arg1 cellView:(id)arg2;
- (void)openMaterialView;
- (void)openSepcialWeappWithJsonString:(id)arg1;
- (void)openSettingView;
- (void)openWebView:(id)arg1 extraInfo:(id)arg2 hasItemShowType:(_Bool)arg3 itemShowType:(unsigned int)arg4;
- (void)preDownloadCoverImageIfNeed:(id)arg1;
- (void)profileDestory;
- (void)realNoFocus;
- (void)recordProfilePageWrap;
- (void)reloadTableViewData;
- (void)reloadView;
- (void)removeFromVisibleViewModelList:(id)arg1;
- (void)reportBizADTriggerAttention:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
@property(retain, nonatomic) NSString *searchExtraParamsString; // @synthesize searchExtraParamsString=_searchExtraParamsString;
@property(nonatomic) unsigned int searchFromIndex; // @synthesize searchFromIndex=_searchFromIndex;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (_Bool)shouldAddShadowView;
- (void)showActionSheetForNoFocus;
- (void)showActionSheetForRightButton;
- (void)showActionSheetForSubFuwuList:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (unsigned int)transToReportScene;
- (void)updateNavigationBarRightButton;
- (void)updateSectionWidthInSectionDataList;
- (void)updateTemplateFile;
- (void)willBeginSearch:(id)arg1;
- (void)willEndSearch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

