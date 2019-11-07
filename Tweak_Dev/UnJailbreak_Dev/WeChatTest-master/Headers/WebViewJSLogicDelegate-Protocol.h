//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSFunctionDef, MMUIViewController, NSArray, NSDictionary, NSString;
@protocol WXCustomWebViewControllerProtocol;

@protocol WebViewJSLogicDelegate <NSObject>
- (void)onPageStateChange:(NSString *)arg1;
- (void)onCopy:(NSString *)arg1;
- (void)kvReportJSCall:(NSString *)arg1 withParam:(NSDictionary *)arg2;
- (NSArray *)getAuthorizedMonitorEvents:(NSString *)arg1;
- (void)processJSAPICall:(NSDictionary *)arg1 funcDef:(JSFunctionDef *)arg2 funcBlock:(void (^)(void))arg3 failHandleBlock:(void (^)(NSDictionary *))arg4 apiPermission:(unsigned char)arg5;
- (unsigned char)getJSApiPermission:(JSFunctionDef *)arg1;
- (_Bool)isGetingA8Key;
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)getCurrentWebviewViewController;

@optional
- (_Bool)isDisableRecordHistory;
- (void)handleMonitorMessage:(NSString *)arg1 params:(NSDictionary *)arg2;
- (_Bool)isTempAccessOfJSApiPermitted:(NSString *)arg1;
- (void)onFinishedHandleJSApi;
- (void)onDomReady;
@end

