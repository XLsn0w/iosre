//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGetPOIListMgrExt.h"
#import "ILocationMgrExt.h"
#import "LocationRetrieveDelegate.h"
#import "MMAutoSearchLogicDelegate.h"
#import "MMLocationAttributeBannerDelegate.h"
#import "MMLocationPinViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "QMapViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCDataSearchDelegate.h"
#import "WCSearchDelegate.h"
#import "tableViewDelegate.h"

@class CLLocation, FavClickStreamHelper, LocationRetriever, MMAutoSearchLogic, MMLocationAttributeBanner, MMLocationPinView, MMTableView, NSMutableArray, NSString, POIItem, QMapView, UIAlertView, UIButton, UILabel, UIPinchGestureRecognizer, WCDataSearcher, WCTimeLineFooterView;

@interface MMPickLocationViewController : MMUIViewController <UITableViewDelegate, tableViewDelegate, UITableViewDataSource, IGetPOIListMgrExt, ILocationMgrExt, UIGestureRecognizerDelegate, MMRefreshTableFooterDelegate, MMLocationAttributeBannerDelegate, LocationRetrieveDelegate, MMAutoSearchLogicDelegate, WCSearchDelegate, WCDataSearchDelegate, QMapViewDelegate, MMLocationPinViewDelegate, WCActionSheetDelegate>
{
    id <MMPickLocationViewControllerDelegate> _delegate;
    UILabel *_searchErrorTips;
    NSString *_address;
    NSString *_searchKeyword;
    NSString *_openID;
    WCDataSearcher *_searcher;
    MMLocationPinView *_pinView;
    QMapView *_mapView;
    MMTableView *_tableView;
    WCTimeLineFooterView *_nearTableFooterView;
    WCTimeLineFooterView *_searchTableFooterView;
    UIAlertView *_errorAlertView;
    MMLocationAttributeBanner *_attributeBanner;
    _Bool _isLoadFinish;
    _Bool _shouldUpdateList;
    _Bool _isOnlyUseUserLocation;
    _Bool _isMapAnimating;
    _Bool _useWXPOI;
    _Bool _useApplePOI;
    _Bool _isShowUp;
    unsigned long long _geoTag;
    unsigned int _scene;
    struct CLLocationCoordinate2D _lastSelectedLocation;
    struct CLLocationCoordinate2D _firstGetNearLocation;
    struct CLLocationCoordinate2D _lastDragLocation;
    UIButton *_showMyLocationButton;
    NSMutableArray *_poiAnnotationList;
    NSMutableArray *_searchPOIResultList;
    NSMutableArray *_poiAnnotationSearchIDList;
    NSMutableArray *_poiSearchResultSearchIDList;
    unsigned long long _selectedPoiIndex;
    struct timeval _startLocateTime;
    struct CGSize _beginTouchDeltaRatio;
    struct CLLocationCoordinate2D _beginTouchRegion;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSMutableArray *_sysGestureRecognizers;
    LocationRetriever *_locationRetriever;
    CLLocation *_userCurrentLocation;
    MMAutoSearchLogic *_autoSearchLogic;
    double _keyboardHeight;
    unsigned long long _entryTime;
    unsigned long long _startGetListTime;
    unsigned long long _endGetListTime;
    unsigned long long _firstGetTime;
    unsigned int _getPageCount;
    unsigned long long _startSearchListTime;
    unsigned long long _endSearchListTime;
    unsigned long long _firstSearchTime;
    unsigned long long _searchPageCount;
    NSString *_currentSearchId;
    _Bool _lastSelectFromSearch;
    unsigned long long _lastSelectRow;
    unsigned long long _lastSelectTime;
    NSString *_lastSelectPOIId;
    _Bool _dismissWithCancel;
    NSString *_requestId;
    POIItem *_myPoiItem;
    struct CLLocationCoordinate2D _coordForGetAddressReqeust;
    _Bool _isSubViewAnimating;
    _Bool _didShowLocationCloseAlert;
    POIItem *_locationItem;
    NSString *_roughAddress;
    double _mapViewFullHeight;
    double _mapViewCurrentHeight;
    FavClickStreamHelper *_clickStreamHelper;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnGetAutoSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetNearPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnSearchMKLocalSearchResponse:(id)arg1 Error:(id)arg2;
- (void)addNotCheckInPOIItem;
- (void)addPOIItem:(id)arg1 UpdateTable:(_Bool)arg2 Animated:(_Bool)arg3 SearchID:(id)arg4;
- (void)addUserLocationAnnotation;
- (void)addUserPOIItem;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void)adjustSearchTable:(_Bool)arg1;
- (void)adjustSubviewRects;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(_Bool)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
@property(retain, nonatomic) FavClickStreamHelper *clickStreamHelper; // @synthesize clickStreamHelper=_clickStreamHelper;
- (void)dealloc;
- (void)delayAddUserPOIItem;
@property(nonatomic) __weak id <MMPickLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didScrollViewScroll:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
@property(nonatomic) _Bool didShowLocationCloseAlert; // @synthesize didShowLocationCloseAlert=_didShowLocationCloseAlert;
- (void)enableSysGestureRecognizers:(_Bool)arg1;
- (void)foldMapView;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (id)getAddressFromPlaceMark:(id)arg1;
- (id)getCurrentPOIInfo;
- (id)getCurrentPOIItem;
- (double)getDistanceBetween:(struct CLLocationCoordinate2D)arg1 AndTarget:(struct CLLocationCoordinate2D)arg2;
- (id)getLocationPOIItem;
- (id)getPOIAnnotationAtIndex:(unsigned long long)arg1;
- (id)getPOIItemAtIndex:(unsigned long long)arg1;
- (id)getSearchItemAtIndex:(long long)arg1;
- (struct CLLocationCoordinate2D)getSearchPoiListCoordination;
- (id)getSelectedPOIItem;
- (float)getTableViewHeight;
- (id)getUserLocation;
- (id)getUserPOIItem;
- (unsigned int)getUserPOIItemIndex;
- (double)heightForSearchViewTable:(id)arg1;
- (void)hideSearchBarTips;
- (void)initGesture;
- (void)initHeaderView;
- (void)initMapPinView:(_Bool)arg1;
- (void)initMapViewGestureRecognizer:(id)arg1;
- (void)initSearchBar;
- (void)initShowMyLocationButton;
- (void)initTableView;
- (void)initView;
- (id)initWithScene:(unsigned int)arg1 OnlyUseUserLocation:(_Bool)arg2;
- (_Bool)isOnUserLocation:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) _Bool isSubViewAnimating; // @synthesize isSubViewAnimating=_isSubViewAnimating;
- (_Bool)isUserPOIItem:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
@property(retain, nonatomic) POIItem *locationItem; // @synthesize locationItem=_locationItem;
- (id)makeCell:(id)arg1 forPOIItem:(id)arg2 withWidth:(float)arg3 atIndexPath:(id)arg4;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(_Bool)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
@property(nonatomic) double mapViewCurrentHeight; // @synthesize mapViewCurrentHeight=_mapViewCurrentHeight;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
@property(nonatomic) double mapViewFullHeight; // @synthesize mapViewFullHeight=_mapViewFullHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelSelectLocation;
- (void)onClickAttributeBanner;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onLoadMapError:(id)arg1;
- (void)onPinGestureUpdated:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onShowMyLocation;
- (void)onTimeOut;
- (void)onTimerCheckUserLocation;
- (void)onUpdatePOITableCell:(id)arg1;
- (void)pinUserLocation:(id)arg1;
- (void)relayoutSubviews:(_Bool)arg1;
- (void)reportOnDone;
- (void)resetPOIList;
- (void)resetSearchList;
@property(retain, nonatomic) NSString *roughAddress; // @synthesize roughAddress=_roughAddress;
- (void)scrollPOIItemToVisible:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void)selectPOIAnnotation:(id)arg1;
- (void)selectPOIAtIndex:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)setCoordinationForGetAddressRequest:(struct CLLocationCoordinate2D)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (void)setSearchTableResultText:(id)arg1;
- (void)showAttributeBannerTitle:(id)arg1 LogoUrl:(id)arg2 Link:(id)arg3;
- (void)showPinViewCallout;
- (void)showSearchTableLoadMore;
- (void)startUpdateLocation;
- (void)stopGeocoder;
- (void)stopPicking;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)unFoldMapView;
- (void)updataSearchListWithCoordinate:(struct CLLocationCoordinate2D)arg1 Keyword:(id)arg2 StartFromFirst:(_Bool)arg3;
- (void)updatePOIListWithCoordinate:(struct CLLocationCoordinate2D)arg1 StartFromFirst:(_Bool)arg2;
- (void)updateSearchBarTips;
- (void)updateUserPOIItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)willDisshow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

