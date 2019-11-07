//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCForceTouchTriggerLongPressProtocol.h"

@class NSString, ShareDataToOpenSDKController, UINavigationController, WCDataItem;

@interface WCContentItemBaseView : MMUIView <WCForceTouchTriggerLongPressProtocol>
{
    UINavigationController *_navigationController;
    WCDataItem *_oDataItem;
    long long _touchCount;
    _Bool _bShowDetail;
    _Bool _bIsLongPressHandled;
    _Bool _bTouchEnds;
    _Bool _bFromDetail;
    _Bool _bSnsScene;
    struct CGSize _fixMediaSize;
    unsigned long long _contentItemScene;
    ShareDataToOpenSDKController *_shareDataToOpenSDKController;
}

+ (struct CGSize)getImageSize:(id)arg1;
+ (double)heightForMedia:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
- (void)LongPressEvents;
- (void)addFavorite;
@property(nonatomic) _Bool bShowDetail; // @synthesize bShowDetail=_bShowDetail;
@property(nonatomic) _Bool bSnsScene; // @synthesize bSnsScene=_bSnsScene;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canShareToOpenSDK;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
- (void)dealloc;
- (id)getTopViewController;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 snsScene:(_Bool)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3 fixMediaSize:(struct CGSize)arg4;
- (_Bool)isMenuItemsVisiable;
- (_Bool)isMyShareEmotionFeed;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WCDataItem *oDataItem; // @synthesize oDataItem=_oDataItem;
- (void)onLongTouch;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMore:(id)arg1;
- (void)setFromDetail;
- (void)setHighlightedColor;
- (void)setNonInteractive;
- (void)setNormalColor;
@property(retain, nonatomic) ShareDataToOpenSDKController *shareDataToOpenSDKController; // @synthesize shareDataToOpenSDKController=_shareDataToOpenSDKController;
- (void)shareToOpenSDK;
- (void)throwUrlMessage;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

