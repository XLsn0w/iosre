//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMSearchPanGestureControlDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "WCSearchControllDelegate.h"

@class MMSearchPanGestureController, MMTableView, MMUISearchBar, MMUIViewController, NSString, UIGestureRecognizer, UIView, WCSearchController;

@interface WCSearcher : NSObject <UISearchControllerDelegate, UISearchBarDelegate, WCSearchControllDelegate, MMSearchPanGestureControlDelegate>
{
    _Bool _nonAnimatedStart;
    _Bool _bForbidAutoLayoutDuringSearchAnimation;
    _Bool _isUseGuideView;
    _Bool _isCustomDisplayView;
    _Bool _becomeFRWithoutSetActive;
    _Bool _bUsePanGesture;
    _Bool _shouldRestoreNavBarWhenDismiss;
    _Bool _originDefinesPresentationContext;
    _Bool _noAnimatedPresentOrDismissing;
    WCSearchController *_searchController;
    id <WCSearchDelegate> _delegate;
    MMUIViewController *_viewController;
    UIView *_searchContainerView;
    MMTableView *_resultTableView;
    UIView *_guideContentView;
    long long _returnKeyType;
    Class _searchControllerClass;
    MMSearchPanGestureController *_panCancelGesture;
    CDUnknownBlockType _completeHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bForbidAutoLayoutDuringSearchAnimation; // @synthesize bForbidAutoLayoutDuringSearchAnimation=_bForbidAutoLayoutDuringSearchAnimation;
@property(nonatomic) _Bool bUsePanGesture; // @synthesize bUsePanGesture=_bUsePanGesture;
@property(nonatomic) _Bool becomeFRWithoutSetActive; // @synthesize becomeFRWithoutSetActive=_becomeFRWithoutSetActive;
- (void)commonInit;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
- (void)dealloc;
@property(nonatomic) __weak id <WCSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCancelMove;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)enableCancelButton;
- (id)gesturingBottomView;
@property(retain, nonatomic) UIView *guideContentView; // @synthesize guideContentView=_guideContentView;
- (void)implVCIsSearchActiveMethodIfNeeded;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithContentViewController:(id)arg1 searchControllerClass:(Class)arg2;
- (void)internalAddGuideView;
- (void)internalAddResultTableView;
- (void)internalAddViews;
@property(nonatomic) _Bool isCustomDisplayView; // @synthesize isCustomDisplayView=_isCustomDisplayView;
- (_Bool)isSeachActive;
@property(nonatomic) _Bool isUseGuideView; // @synthesize isUseGuideView=_isUseGuideView;
@property(nonatomic) _Bool noAnimatedPresentOrDismissing; // @synthesize noAnimatedPresentOrDismissing=_noAnimatedPresentOrDismissing;
@property(nonatomic) _Bool nonAnimatedStart; // @synthesize nonAnimatedStart=_nonAnimatedStart;
- (void)onBeginDrag;
- (void)onSearchBarMoveToContainerView:(id)arg1;
- (void)onTriggerToCancelMove;
- (void)onTriggerToMoveRight;
- (void)onWCSearchControllerDidAppear:(_Bool)arg1;
- (void)onWCSearchControllerDidDisappear:(_Bool)arg1;
- (void)onWCSearchControllerDidLoad;
- (void)onWCSearchControllerWillAppear:(_Bool)arg1;
- (void)onWCSearchControllerWillDisappear:(_Bool)arg1;
@property(nonatomic) _Bool originDefinesPresentationContext; // @synthesize originDefinesPresentationContext=_originDefinesPresentationContext;
@property(retain, nonatomic) MMSearchPanGestureController *panCancelGesture; // @synthesize panCancelGesture=_panCancelGesture;
- (void)preparePanGesture;
- (void)prepareSearchBarInNavMode;
- (void)presentSearchController:(id)arg1;
- (void)resetPanGesture;
@property(retain, nonatomic) MMTableView *resultTableView; // @synthesize resultTableView=_resultTableView;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(readonly, nonatomic) MMUISearchBar *searchBar; // @dynamic searchBar;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
@property(nonatomic) __weak UIView *searchContainerView; // @synthesize searchContainerView=_searchContainerView;
@property(retain, nonatomic) WCSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) Class searchControllerClass; // @synthesize searchControllerClass=_searchControllerClass;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setChangeText:(id)arg1;
@property(nonatomic) _Bool shouldRestoreNavBarWhenDismiss; // @synthesize shouldRestoreNavBarWhenDismiss=_shouldRestoreNavBarWhenDismiss;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)wcsKeyboardWillHide:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *wcsPanGesture;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

