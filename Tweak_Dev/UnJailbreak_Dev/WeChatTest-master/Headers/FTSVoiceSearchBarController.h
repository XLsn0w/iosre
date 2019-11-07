//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMVoiceSearchBar.h"

#import "ContactInfoViewControllerDelegate-Protocol.h"
#import "ContactPickerViewDelegate-Protocol.h"
#import "FTSAddressBookFriendCellDelegate-Protocol.h"
#import "FTSContactCellDelegate-Protocol.h"
#import "FTSFeatureDetailViewDelegate-Protocol.h"
#import "FTSResultViewDelegate-Protocol.h"
#import "FTSWebSearchViewDelegate-Protocol.h"
#import "IFTSContactMgrExt-Protocol.h"
#import "IFTSFavMgrExt-Protocol.h"
#import "IFTSMemorySearchMgrExt-Protocol.h"
#import "IFTSMessageMgrExt-Protocol.h"
#import "IFtsWebSearchExt-Protocol.h"
#import "IMiniGameSearchExt-Protocol.h"
#import "IWALocalSearchExt-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayWalletLockVerifyLogicDelegate-Protocol.h"
#import "WCWebSearchViewControllerDelegate-Protocol.h"
#import "WebSearchLocalPageCellDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class AddressBookFriend, AttributeLabel, CContact, CContactVerifyLogic, ContactInfoViewController, FTSSearchLocalPageResultWrap, FTSWebSearchController, NSMutableArray, NSMutableDictionary, NSString, UIPercentDrivenInteractiveTransition, UIView, WAMainListViewController, WCTimeLineFooterView, WCWebSearchViewControllerNewH5;

@interface FTSVoiceSearchBarController : MMVoiceSearchBar <FTSWebSearchViewDelegate, IWALocalSearchExt, ContactPickerViewDelegate, WCPayWalletLockVerifyLogicDelegate, IFtsWebSearchExt, WebSearchLocalPageCellDelegate, IMiniGameSearchExt, FTSFeatureDetailViewDelegate, WCWebSearchViewControllerDelegate, MMWebViewDelegate, FTSContactCellDelegate, FTSAddressBookFriendCellDelegate, contactInfoDelegate, ContactInfoViewControllerDelegate, PBMessageObserverDelegate, contactVerifyLogicDelegate, FTSResultViewDelegate, IFTSContactMgrExt, IFTSMessageMgrExt, IFTSFavMgrExt, IFTSMemorySearchMgrExt, MFMessageComposeViewControllerDelegate, WCActionSheetDelegate, MMUIViewControllerDelegate>
{
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapSearchSectionType;
    AddressBookFriend *_curAddressBookFriend;
    ContactInfoViewController *_curAddressBookFriendView;
    CContact *_curContact;
    CContactVerifyLogic *_contactVerifyLogic;
    int _findType;
    UIView *_grayBlurView;
    int _searchScene;
    AttributeLabel *_emptyTipLabel;
    UIView *_emptyFooterView;
    WCTimeLineFooterView *_loadingFooterView;
    NSString *_newestSearchText;
    UIView *_weakFTSWebSearchViewCell;
    struct CGRect _currentKeyboardRect;
    _Bool _hasClickAnyResultDuringOneSearch;
    NSMutableDictionary *_dicDisplayInfo;
    NSString *_lastMonitorReportText;
    WAMainListViewController *_cacheWAListViewController;
    FTSWebSearchController *_webSearchController;
    FTSSearchLocalPageResultWrap *_localPageResultWrap;
    UIView *_weakFTSWebSearchLocalPageCell;
    NSMutableArray *_arrHasLogSearchLocalPageShowQuery;
    WCWebSearchViewControllerNewH5 *_webSearchViewController;
    unsigned long long _delayBusinessTypeForEu;
    int _currentFeatureId;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) int currentFeatureId; // @synthesize currentFeatureId=_currentFeatureId;
@property(readonly, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
@property(retain, nonatomic) UIView *grayBlurView; // @synthesize grayBlurView=_grayBlurView;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)onWebViewPassParams:(id)arg1;
- (id)preOpenWebSearchView:(id)arg1 baseUrlParams:(id)arg2;
- (void)onForbidCacheWCWebSearchView;
- (void)onWCWebSearchViewReturn;
- (void)tryPreloadWCWebSearchWebview;
- (void)onSelectCancel;
- (void)onCreateChatRoom:(id)arg1;
- (void)openContactPickerView;
- (id)parseSeperatedKeyword:(id)arg1;
- (_Bool)isCreateChatRoomCellAtRow:(long long)arg1;
- (_Bool)shouldDisplayChatRoomEntry;
- (void)weAppSearchResultKVReport:(id)arg1;
- (id)addFTSResultCountLogParams:(id)arg1;
- (_Bool)searchMiniGameDone:(id)arg1;
- (_Bool)searchWeAppDone:(id)arg1;
- (_Bool)searchMemoryDone:(id)arg1;
- (_Bool)searchFavDone:(id)arg1;
- (_Bool)searchMessageDone:(id)arg1;
- (void)tryDoMonitorReport:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (id)getViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onWebSearchViewDidShow;
- (void)onWebSearchViewDidPop;
- (void)onWebSearchViewWillPop;
- (void)onWebSearchViewReturn:(_Bool)arg1;
- (void)onFTSDetailViewReturn:(_Bool)arg1;
- (void)asyncCancelSearchDelay:(double)arg1;
- (void)asyncCancelSearch;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)onUpdateContact:(id)arg1;
- (void)onRemoveContact;
- (void)onAddContact;
- (void)onFTSSelectAddressBookFriend:(id)arg1;
- (void)selectAddressBookFriend:(id)arg1;
- (void)operateAddressBookFriend:(id)arg1;
- (void)didShowWARecommendPanel;
- (void)prepareWAListViewController;
- (void)onCancelInteractivePushWAHistoryVC;
- (void)onFinishInteractivePushWAHistoryVC;
- (void)onUpdateInteractivePushWAHistoryVCPercent:(double)arg1;
- (void)onBeginInteractivePushWAHistoryVC;
- (void)onOpenWeAppOutItem:(id)arg1 index:(long long)arg2;
- (void)onOpenWeAppList;
- (void)onClickBarButton:(id)arg1;
- (void)startCommonSearch:(id)arg1;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)startWebSearch:(id)arg1 urlParams:(id)arg2;
- (void)searchFavItems;
- (void)selectFavSearchItem:(id)arg1;
- (void)selectMsgTalkerSearchEntry;
- (void)searchMessage;
- (void)selectMsgItems:(id)arg1;
- (void)selectMsgItem:(id)arg1;
- (void)addContact:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)addContactInternal;
- (void)sendSMS:(id)arg1 arrMobile:(id)arg2;
- (void)sendSMSInvite:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)showAlert:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWCGameWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)searchGameItems:(int)arg1;
- (void)selectWCGameItem:(id)arg1;
- (void)selectFeatureItem:(id)arg1;
- (void)onFeatureDetailViewSelectItem:(id)arg1;
- (void)searchMoreFeatureItems;
- (void)openPrivateConfigView;
- (void)openWeSportFeature;
- (void)openChatMigrationVC;
- (void)openBalanceFeature;
- (void)openOfflinePayFeature;
- (void)openFacingRecvMoneyFeature;
- (void)openWXHongBao;
- (void)openWCPayView;
- (void)openFavoriteView;
- (void)openEmoticonStoreView;
- (void)openMessageContentViewForFileHelper;
- (void)openMessageContentViewForFeature:(int)arg1;
- (void)openContactInfoForFeature:(int)arg1;
- (void)openGameCenter:(id)arg1;
- (void)openCameraScan;
- (void)openAlbum;
- (void)openShake;
- (void)openLBS;
- (void)openFloatBottle;
- (void)openMobileRecharge;
- (void)openWeAppWithSchemeUrl:(id)arg1;
- (_Bool)isPluginOpen:(int)arg1;
- (void)jumpFeatureUrl:(id)arg1;
- (void)searchMoreFollowedBrandContact;
- (void)searchMoreContact:(int)arg1;
- (void)onFTSChatWithContact:(id)arg1;
- (void)openContactInfo:(id)arg1 fromSearchContact:(_Bool)arg2;
- (void)openContactInfo:(id)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openEnterpriseChatSessionListView:(id)arg1;
- (void)openEnterpriseBrandSessionListViewController:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openMiniGameForUsername:(id)arg1;
- (void)openWeAppWithContact:(id)arg1 withSceneNote:(id)arg2;
- (void)openMessageContentView:(id)arg1;
- (void)openWeAppSessionView;
- (void)openBrandSessionView;
- (void)onClickSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2 searchId:(id)arg3;
- (void)onSearchLocalPageResultFail;
- (void)onSearchLocalPageResultRtn:(id)arg1;
- (void)doSearchLocalPageRequest:(id)arg1;
- (void)addContactFriendScene:(id)arg1;
- (void)onlineSearchContact;
- (id)filterUserName:(id)arg1;
- (void)onMiniGameSearchResultChanged;
- (void)onWASearchResultChanged;
- (void)onFTSHomePageFavResultChanged;
- (void)onFTSHomePageMessageResultChanged:(_Bool)arg1;
- (void)tryRefreshSearchResult;
- (void)onFTSMemorySearchResultChanged:(_Bool)arg1;
- (void)onFTSContactSearchResultChanged:(_Bool)arg1;
- (void)onClickSearchButton:(id)arg1;
- (void)handleTextDidChange:(id)arg1;
- (void)scrollToTop;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)cancelFTSSearch;
- (void)trySwitchSearchLoading;
- (void)doFTSSearch:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldForbidSelectAtIndexpath:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (unsigned int)getLogRowBeforeSectionType:(unsigned long long)arg1 queryText:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isDisplayTalkerSearchEntry;
- (_Bool)isMsgTalkerSearchEntry:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setLoadingStatus;
- (void)resetSearchSectionType;
- (void)resetSearchTableViewSize;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)removeWebSearchView;
- (void)clearAllResource;
- (void)updateWebSearchCellVisualbility;
- (void)tryLogFTSWebSearchLocalPageCellShow;
- (void)resetShowCellForType:(int)arg1;
- (void)markShowCellForType:(int)arg1 resultCount:(unsigned int)arg2;
- (void)markShowCellForType:(int)arg1;
- (_Bool)hasShownCellForType:(int)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)getDetailView;
- (void)handleRotateEvent;
- (void)dealloc;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(_Bool)arg4 hasIndexBar:(_Bool)arg5;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(_Bool)arg4;
- (void)initFTSSearchBar;
- (id)sectionType2String:(unsigned int)arg1;
- (id)getGeneralBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

