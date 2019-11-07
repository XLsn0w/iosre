//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@class JSAPIAuthWrap, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MMJSApiVerifyMgr : NSObject <PBMessageObserverDelegate>
{
    NSMutableDictionary *_dictUrl2JSApiPermissions;
    NSMutableDictionary *_dictApiName2Index;
    id <MMJSApiVerifyMgrDelegate> _mgrDelegate;
    NSMutableDictionary *_dictRealTimeVerify;
    NSMutableDictionary *_dictOfflineVerify;
    NSMutableDictionary *_dictApiAuthInfo;
    NSMutableArray *_jsAuthQueue;
    _Bool _isHandlingJSAuth;
    NSMutableDictionary *_dictAuthFuncBlock;
    NSString *_alertTile;
    JSAPIAuthWrap *_makingAuthWrap;
    NSMutableDictionary *_dictVerifyOverhead;
    NSArray *_groupAuthInfoList;
    NSMutableDictionary *_dictHidedMenuitemByPage;
    NSMutableDictionary *_dictScopeAuthInfo;
    NSMutableDictionary *_dictUrl2AppId;
    NSMutableDictionary *_dictUrl2BrandIconUrl;
    NSMutableDictionary *_dictUrl2VerifyInfoList;
    NSMutableDictionary *_dictUrl2DomainPathList;
    NSMutableDictionary *_dicPageStateChangeUrl;
    int _preverifyScene;
    NSString *_miniProgramAppid;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)__mutableArrayForUrl:(id)arg1 inNoFragmentDictionary:(id)arg2;
- (void)__removeObjForUrl:(id)arg1 inNoFragmentDictionary:(id)arg2;
- (void)__setObject:(id)arg1 forUrl:(id)arg2 inNoFragmentDictionary:(id)arg3;
- (void)addJSAuthToQueue:(id)arg1 funcBlock:(CDUnknownBlockType)arg2 failHandleBlock:(CDUnknownBlockType)arg3;
- (void)askUsrToMakeAuth:(CDUnknownBlockType)arg1 authWrap:(id)arg2 failBlock:(CDUnknownBlockType)arg3;
- (_Bool)canFixWkWebviewPermissionWithUrl:(id)arg1 permissionRet:(id *)arg2;
- (void)checkJSAPIAuth:(id)arg1 url:(id)arg2 functionDef:(id)arg3 funcBlock:(CDUnknownBlockType)arg4 failHandleBlock:(CDUnknownBlockType)arg5;
- (void)checkJSAuthQueue;
- (_Bool)compartHashUrl:(id)arg1 other:(id)arg2;
- (void)dealloc;
- (id)failHandleBlockKey:(id)arg1;
- (id)funcBlockKey:(id)arg1;
- (id)getApiAuthInfo:(id)arg1;
- (id)getAppHeadImgUrlForUrl:(id)arg1;
- (id)getAppIdForUrl:(id)arg1;
- (id)getAuthorizedWebMonitorEvents:(id)arg1 withCurEvent:(id)arg2;
- (id)getCustomDomainsForUrl:(id)arg1;
- (unsigned char)getJSApiPermission:(id)arg1 url:(id)arg2;
- (long long)getPermissionIndex:(id)arg1;
- (long long)getPermissionIndexFromApiName:(id)arg1;
- (id)getPermissionedWebEventsForOfflineH5:(id)arg1;
- (id)getScopeAuthInfo:(id)arg1 apiName:(id)arg2;
- (id)getUrlWithoutFragment:(id)arg1;
- (void)handleJSAPICallBack:(id)arg1 err_msg:(id)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)handleJSAuthFail:(id)arg1 errDesc:(id)arg2 authWrap:(id)arg3;
- (void)handleJSOAuth:(id)arg1;
- (void)handlePreVerifyJSAPI:(id)arg1;
- (void)handleRealtimeVerifyJSAPI:(id)arg1;
- (void)handleSetAuth:(id)arg1;
- (void)hideAllNonBaseMenuItem;
- (void)hideMenuitemBatch:(id)arg1;
- (void)idKeyReportForVerifyFail:(id)arg1;
- (id)init;
- (_Bool)isMenuItemHidenByPage:(id)arg1;
- (void)kvJSCallReport:(id)arg1 permissionValue:(unsigned char)arg2 isSuccess:(_Bool)arg3 errorCode:(long long)arg4 baseErrorCode:(long long)arg5 funcName:(id)arg6;
- (void)mergeJSAPIPermission:(id)arg1 withVerifyList:(id)arg2;
@property(nonatomic) __weak id <MMJSApiVerifyMgrDelegate> mgrDelegate; // @synthesize mgrDelegate=_mgrDelegate;
@property(retain, nonatomic) NSString *miniProgramAppid; // @synthesize miniProgramAppid=_miniProgramAppid;
@property(nonatomic) int preverifyScene; // @synthesize preverifyScene=_preverifyScene;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2 WithCheckedPreVerifyList:(_Bool)arg3;
- (void)saveScopeAuthInfo:(id)arg1;
- (void)sendSetAuthRequest:(id)arg1;
- (void)setPageStateChangeUrl:(id)arg1 baseUrl:(id)arg2;
- (void)showAllNonBaseMenuItem;
- (void)showMenuitemBatch:(id)arg1;
- (void)startupPreVerifyJSAPI:(id)arg1 url:(id)arg2 failHandleBlock:(CDUnknownBlockType)arg3;
- (void)startupRealTimeVerifyJSAPI:(id)arg1 url:(id)arg2 functionDef:(id)arg3 funcBlock:(CDUnknownBlockType)arg4 failHandleBlock:(CDUnknownBlockType)arg5;

@end

