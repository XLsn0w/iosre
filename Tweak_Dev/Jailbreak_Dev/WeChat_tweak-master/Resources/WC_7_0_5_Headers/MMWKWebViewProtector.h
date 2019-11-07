//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface MMWKWebViewProtector : NSObject
{
    NSMutableArray *_webViewRecrodList;
    long long _websiteDataStoreOperatingCount;
    NSMutableSet *_websiteDataStoreHoldWebViewSet;
}

+ (void)addEachWebViewOnInitedFromMainThread:(id)arg1;
+ (_Bool)isOpenProtection;
+ (_Bool)isProtectIOS13CrashIfWebViewDeallocOnWKWebsiteDataStoreOperateData;
+ (id)sharedInstance;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadFetchDataRecordsOfTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 forDataRecords:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 modifiedSince:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)__addEachWebViewOnInitedFromMainThread:(id)arg1;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadFetchDataRecordsOfTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 forDataRecords:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)__websiteDataStore:(id)arg1 safeFromMainThreadRemoveDataOfTypes:(id)arg2 modifiedSince:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)holdWebViewsOnWebsiteDataStoreOperating:(id)arg1;
- (id)init;
- (_Bool)isWebsiteDataStoreOperating;
- (_Bool)omitDeallocedWebViewInRecordList:(id)arg1;
- (void)onWebViewDealloc;
- (void)onWebsiteDataStoreOperateBegin;
- (void)onWebsiteDataStoreOperateEnd;
- (void)removeHeldWebViewForWebsiteDataStoreOperating;
@property(retain, nonatomic) NSMutableArray *webViewRecrodList; // @synthesize webViewRecrodList=_webViewRecrodList;
@property(retain, nonatomic) NSMutableSet *websiteDataStoreHoldWebViewSet; // @synthesize websiteDataStoreHoldWebViewSet=_websiteDataStoreHoldWebViewSet;
@property(nonatomic) long long websiteDataStoreOperatingCount; // @synthesize websiteDataStoreOperatingCount=_websiteDataStoreOperatingCount;
- (id)webViewListFromWebViewRecordList:(id)arg1;

@end

