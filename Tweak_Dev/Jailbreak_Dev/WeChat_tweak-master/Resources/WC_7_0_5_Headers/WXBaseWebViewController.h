//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMJSApiVerifyMgrDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WXCustomWebViewControllerProtocol.h"
#import "WebViewA8KeyLogicDelegate.h"
#import "WebViewJSLogicDelegate.h"
#import "YYWebViewDelegate.h"

@class MMJSApiVerifyMgr, MMURLHandler, NSMutableDictionary, NSString, NSURLRequest, UIButton, UILongPressGestureRecognizer, UIView<YYWebViewInterface>, WCDeepLinkHandler, WebViewA8KeyLogicImpl, WebViewJSLogicImpl;

@interface WXBaseWebViewController : MMUIViewController <UIGestureRecognizerDelegate, UIAlertViewDelegate, WebViewA8KeyLogicDelegate, WebViewJSLogicDelegate, UIScrollViewDelegate, MMJSApiVerifyMgrDelegate, YYWebViewDelegate, WXCustomWebViewControllerProtocol>
{
    UIView<YYWebViewInterface> *webView;
    MMURLHandler *m_urlHandler;
    UIButton *m_loadFailView;
    NSMutableDictionary *m_jsInitInfo;
    WCDeepLinkHandler *m_deepLinkHandler;
    MMJSApiVerifyMgr *m_apiVerifyMgr;
    CDUnknownBlockType _OnInitReadyNotifyBlock;
    _Bool m_bShowOnNewMainFrameBanner;
    NSMutableDictionary *_dicJsapiGetA8keyHadnleBlocks;
    long long m_loadingCount;
    UILongPressGestureRecognizer *m_longPressGestureRecognizer;
    NSString *m_jump;
    _Bool m_viewDidAppear;
    _Bool m_isPageLoadFail;
    _Bool m_bIFrame;
    _Bool _bIsDraggingScroll;
    _Bool _bIsBackForwardNavigationType;
    NSString *_lastURL;
    _Bool m_isFinishLoaded;
    _Bool _m_bIsSettingInAppBrand;
    _Bool _m_bOfflinePage;
    _Bool _m_bIsJsapiUploadVideoUploading;
    NSMutableDictionary *m_extraInfo;
    WebViewJSLogicImpl *_m_jsLogicImpl;
    NSString *_sourceAppid;
    NSString *_m_initUrl;
    WebViewA8KeyLogicImpl *_m_a8KeyLogicImpl;
    CDUnknownBlockType _m_blockOnWebViewDidTerminate;
    id <WXCustomWebViewControllerDelegate> _m_delegate;
    NSString *_m_lastCheckCpKey;
}

- (void).cxx_destruct;
- (unsigned int)GetGeneralBitSetForUrl:(id)arg1;
- (_Bool)IsBitsetSet:(unsigned int)arg1 forUrl:(id)arg2;
- (_Bool)allowFayByImage;
- (_Bool)allowScanQRCodeByImage;
- (_Bool)allowShareByImage;
- (_Bool)canGoBack;
- (void)cleanJSAPIDelegate;
- (void)clearScrollBackgroundColor;
- (void)dealloc;
- (void)delayHandleUrl:(id)arg1;
- (void)diagnose_onJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (void)doJsApiInitEvent;
- (void)enableLongPressDetect;
- (id)extraInfo;
- (void)forceShowCloseButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)getAuthorizedMonitorEvents:(id)arg1;
- (id)getCurrentAppId;
- (unsigned int)getCurrentScene;
- (id)getCurrentUrl;
- (id)getCurrentWebviewViewController;
- (id)getInitUrl;
- (unsigned char)getJSApiPermission:(id)arg1;
- (id)getJSFunctionDef:(id)arg1;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getPreInjectScriptStr;
- (id)getRequestingOrCurrentUrl;
- (id)getShareUrl;
- (id)getUrlPermission:(id)arg1;
- (id)getWXHookScriptStr;
- (void)goBack;
- (void)goForward;
- (void)goToURL:(id)arg1;
- (void)handleJumpProfileUrl:(id)arg1 profileRange:(struct _NSRange)arg2;
- (void)handleWebViewVCDismiss;
- (_Bool)hasUrlPermission:(id)arg1;
- (void)initNotificationObservers;
- (void)initWebViewObservers;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)internalInitWithUrl:(id)arg1 extraInfo:(id)arg2;
- (_Bool)isDisableRecordHistory;
- (_Bool)isGetingA8Key;
- (_Bool)isSvrErrorTipForbidden;
- (void)keyboardDidShow:(id)arg1;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (void)logUseWebviewSchemeToJumpWithUrl:(id)arg1;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl; // @synthesize m_a8KeyLogicImpl=_m_a8KeyLogicImpl;
@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading; // @synthesize m_bIsJsapiUploadVideoUploading=_m_bIsJsapiUploadVideoUploading;
@property(nonatomic) _Bool m_bIsSettingInAppBrand; // @synthesize m_bIsSettingInAppBrand=_m_bIsSettingInAppBrand;
@property(readonly, nonatomic) _Bool m_bOfflinePage; // @synthesize m_bOfflinePage=_m_bOfflinePage;
@property(copy, nonatomic) CDUnknownBlockType m_blockOnWebViewDidTerminate; // @synthesize m_blockOnWebViewDidTerminate=_m_blockOnWebViewDidTerminate;
@property(nonatomic) __weak id <WXCustomWebViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo; // @synthesize m_extraInfo;
@property(readonly, nonatomic) NSString *m_initUrl; // @synthesize m_initUrl=_m_initUrl;
@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl; // @synthesize m_jsLogicImpl=_m_jsLogicImpl;
@property(retain, nonatomic) NSString *m_lastCheckCpKey; // @synthesize m_lastCheckCpKey=_m_lastCheckCpKey;
- (void)markNeedCheckUrlAndRemoveLastCheckedUrl:(id)arg1;
- (void)notifyToJSBridgeVisibilityChanged:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onDomReady;
- (void)onFinishedHandleJSApi;
- (void)onGetA8Key:(_Bool)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)onGetA8KeyWithMediaAutoPlay;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onLongPressOnWebview:(id)arg1;
- (void)onPageStateChange:(id)arg1;
- (void)onStartGetA8Key;
- (void)onUpdatedPermisson;
- (void)processJSAPICall:(id)arg1 funcDef:(id)arg2 funcBlock:(CDUnknownBlockType)arg3 failHandleBlock:(CDUnknownBlockType)arg4 apiPermission:(unsigned char)arg5;
- (void)removeNotificationObservers;
- (void)removeWebViewObservers;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)sendGetA8KeyEvent;
- (void)setCurrentUrl:(id)arg1;
- (void)setDisableWebAlertView:(_Bool)arg1;
@property(retain, nonatomic) NSString *sourceAppid; // @synthesize sourceAppid=_sourceAppid;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView;
- (void)startLoadWeb;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(CDUnknownBlockType)arg2;
- (void)tryStartOutlinkDetect;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (id)webViewControllerBackgroundColor;
- (void)webViewControllerContentProcessDidTerminate:(id)arg1;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (void)webViewControllerDidStartSyncA8Key:(id)arg1;
- (void)webViewControllerForceSyncA8KeyError;
- (void)webViewControllerJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)webViewControllerPreInjectScriptStr;
- (void)webViewControllerTitleDidChange:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidReceiveResponse:(id)arg1 isMainFrame:(_Bool)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webviewControllerDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (id)webviewForInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

