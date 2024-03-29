//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WALocationGetterDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, WAAppBrandNotifyStorage, WAAppBrandRedDotNotifyStorage, WALocationGetter;

@interface WAConfigMgr : MMService <MMResourceMgrExt, IMsgExt, PBMessageObserverDelegate, WALocationGetterDelegate, MMService>
{
    NSMutableDictionary *_dicAppID2ConfigJSON;
    NSMutableDictionary *_dicAppID2ContactAttribute;
    NSMutableDictionary *_dicAppID2CertDic;
    WAAppBrandNotifyStorage *m_notifyStorage;
    WAAppBrandRedDotNotifyStorage *m_redDotNotifyStorage;
    NSMutableDictionary *dicUseVConsoleApp;
    WALocationGetter *m_locationGetter;
    _Bool m_ignoreRedDotNotify;
    NSMutableDictionary *_userWeAppMonitor;
    long long _enmIsolatedContext;
    NSDictionary *_dicSystemConfig;
    NSString *_mmUserAgent;
}

+ (_Bool)isUseNewPackageSweepLogic;
+ (_Bool)isClosePubDelayUnpack;
+ (_Bool)isCloseSearchEntry;
+ (long long)getABTestNearByEntranceMode;
+ (_Bool)isOpenMainFrameTaskBarBatchAttrSync;
+ (_Bool)isOpenMainFrameTaskBar;
+ (_Bool)isOpenFTSSearchWeappGameSection;
+ (_Bool)isOpenGameEntry;
+ (_Bool)isOpenNewNearEntry;
+ (_Bool)isDeviceSupportWeApp;
+ (_Bool)isOverSeaUser;
@property(retain) NSString *mmUserAgent; // @synthesize mmUserAgent=_mmUserAgent;
@property(retain) NSDictionary *dicSystemConfig; // @synthesize dicSystemConfig=_dicSystemConfig;
- (void).cxx_destruct;
- (void)onResponseGetAppInfoList:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isWeAppIsolatedContext;
- (_Bool)isGameIsolatedContext;
- (void)setIsolatedContext:(_Bool)arg1;
- (void)doGetAppConfigCgiWithItems:(id)arg1;
- (void)asyncUpdateWeAppConfigInfo:(id)arg1;
- (id)overseasForbbidenUrlWithAppid:(id)arg1;
- (id)scanQrCodeOffLineForbbidenUrlWithAppid:(id)arg1;
- (id)waappBanSceneWithAppid:(id)arg1 banScene:(unsigned long long)arg2;
- (id)waappDetailInfoViewURLWithAppid:(id)arg1;
- (id)lowVersionWithAppid:(id)arg1 updateType:(unsigned long long)arg2;
- (id)forbbidenUrlWithAppid:(id)arg1 offShelfType:(unsigned long long)arg2;
- (id)exposeURLForKFSessionWithAppid:(id)arg1 businessAppid:(id)arg2 pageId:(id)arg3;
- (id)exposeURLWithUsername:(id)arg1 msgid:(id)arg2 templateid:(id)arg3;
- (id)exposeURLWithAppid:(id)arg1 msgid:(id)arg2;
- (id)exposeURLWithAppid:(id)arg1 pageid:(id)arg2 from:(unsigned long long)arg3 debugMode:(unsigned long long)arg4 appVersion:(unsigned int)arg5 exposeExtraInfo:(id)arg6;
- (id)feedbackURLWithAppid:(id)arg1;
- (void)deleteDebugModeAppInfo:(id)arg1 debugType:(unsigned long long)arg2;
- (void)insertDeubgModeAppInfo:(id)arg1;
- (void)parseNotifyMsg:(id)arg1;
- (id)getSaveInfoKeyWithAppid:(id)arg1 debugType:(unsigned int)arg2;
- (void)parseConfigNotify:(id)arg1;
- (unsigned int)redDotPushTime;
- (id)redDotMsgId;
- (void)markOpenWeappDestop;
- (void)onGetLocationSuccess:(id)arg1;
- (void)clearRedDotNotifyActivities;
- (void)uploadLocation;
- (void)uploadUserLocationIfNeed;
- (_Bool)shouldUploadUserLocation;
- (void)uploadRedDotExposeIfNeeded;
- (_Bool)shouldUploadNewFunctionRedDotExpose;
- (_Bool)shouldUploadNearByRetDotExpose;
- (_Bool)shouldShowRedDotAsGameWhatsNew;
- (_Bool)shouldShowRedDotAsNearByWeappStore;
- (_Bool)shouldShowRedDotAsNewFunction;
- (unsigned int)nearByRedDotShowType;
- (_Bool)shouldShowRedDot;
- (void)endIgnoreRedDotNotify;
- (void)startIgnoreRedDotNotify;
- (_Bool)shouldIgnoreRedDotNotify;
- (void)parseRedDotNotify:(id)arg1;
- (void)handleUpdateWxaListNotify:(id)arg1;
- (void)parseUpdateWxaUsageListNotify:(id)arg1;
- (void)parseDebugAppCodeUpdated:(id)arg1;
- (void)parseWeAppSyncCommand:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)saveRedDotNotifyStorage:(id)arg1;
- (void)saveLocationUploadSwitchActivity:(id)arg1;
- (void)saveRedDotSwitchActivity:(id)arg1;
- (void)loadRedDotNotifyStorage;
- (void)saveNotifyStorage:(id)arg1;
- (void)loadNotifyStorage;
- (void)clearDebugModeDownloadStateWithAppid:(id)arg1;
- (void)setDebugModeDownloadPkgCompleteWithAppid:(id)arg1 debugType:(unsigned long long)arg2 packageType:(unsigned long long)arg3 moduleName:(id)arg4 value:(_Bool)arg5;
- (_Bool)isDebugModeAlreadyUpdatePkgWithAppid:(id)arg1 debugType:(unsigned long long)arg2 packageType:(unsigned long long)arg3 moduleName:(id)arg4;
- (id)getAllDebugModeAppInfoForceSave:(_Bool)arg1;
- (id)getDeubgModeAppInfoByName:(id)arg1 debugType:(unsigned long long)arg2;
- (id)getPublicResDebugModeAppInfo;
- (_Bool)isEnableWeAppMonitor:(id)arg1;
- (void)enableWeAppMonitor:(id)arg1 enable:(_Bool)arg2;
- (_Bool)closeUseVConsoleWithAppID:(id)arg1;
- (_Bool)openUseVConsoleWithAppID:(id)arg1;
- (_Bool)pageIsUseVConsoleForAppID:(id)arg1;
- (id)getMMUserAgent;
- (void)updateMMUserAgent;
- (id)getAppWebPageFullUrlWithAppid:(id)arg1 version:(unsigned long long)arg2 relativePath:(id)arg3 isDebugMode:(unsigned long long)arg4;
- (id)getCdnBaseUrlStrWithAppContact:(id)arg1;
- (id)getCdnBaseUrlStrIsDebugMode:(unsigned long long)arg1;
- (_Bool)isOpenModuleMode;
- (_Bool)isOpenGlobalLocalSearch;
- (_Bool)isOpenFindFriendEntry;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)contactAttributeCategoryOnServiceClearData;
- (void)contactAttributeCategoryOnServiceReloadData;
- (void)contactAttributeCategoryOnServiceInit;
- (void)setContactAttributeWithAppID:(id)arg1 appBrandInfo:(id)arg2;
- (id)contactAttributeWithAppID:(id)arg1;
- (void)updateSystemSettingData:(id)arg1;
- (void)loadSystemSettingData;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)systemSetting;
- (void)systemSettingCategoryOnServiceClearData;
- (void)systemSettingCategoryOnServiceReloadData;
- (void)systemSettingCategoryOnServiceInit;
- (id)getCertificateDataListWithAppID:(id)arg1 appVersion:(unsigned int)arg2;
- (void)setCertificateDataList:(id)arg1 withAppID:(id)arg2 appVersion:(unsigned int)arg3;
- (void)loadCertificateDataListFromData:(id)arg1 withAppID:(id)arg2 appVersion:(unsigned int)arg3;
- (void)networkCertificateCategoryOnServiceClearData;
- (void)networkCertificateCategoryOnServiceReloadData;
- (void)networkCertificateCategoryOnServiceInit;
- (id)appConfigAttiForLoadingView:(id)arg1 page:(id)arg2;
- (void)setAppConfigAttiForLoadingView:(id)arg1;
- (id)objectForAppID:(id)arg1 andPaths:(id)arg2;
- (id)dictionaryForAppID:(id)arg1 andPaths:(id)arg2;
- (_Bool)boolForAppID:(id)arg1 andPath:(id)arg2;
- (id)stringForAppID:(id)arg1 andPaths:(id)arg2;
- (_Bool)hasKeyForAppID:(id)arg1 andPath:(id)arg2;
- (void)setAppConfigJSON:(id)arg1 forAppID:(id)arg2;
- (_Bool)appTaskEnablePreloadForAppID:(id)arg1;
- (id)getGlobalConfig:(id)arg1 appId:(id)arg2;
- (id)appConfigJsonTextForAppService:(id)arg1;
- (id)networkTimeoutAttributeForAppID:(id)arg1;
- (id)entryPagePathForAppID:(id)arg1;
- (id)pageTabAttributesForAppID:(id)arg1 page:(id)arg2;
- (_Bool)isTabPageWithPagePath:(id)arg1 appID:(id)arg2;
- (id)pageWindowAttributesForAppID:(id)arg1;
- (_Bool)customOpenPage:(id)arg1 page:(id)arg2;
- (id)pageWindowAttributesForAppID:(id)arg1 page:(id)arg2;
- (void)loadAppConfigWithAppID:(id)arg1 data:(id)arg2;
- (void)appConfigJSONCategoryOnServiceClearData;
- (void)appConfigJSONCategoryOnServiceReloadData;
- (void)appConfigJSONCategoryOnServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

