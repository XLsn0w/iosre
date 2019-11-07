//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMWebViewController, NSMutableDictionary;

@interface MMWebViewPluginScheduler : NSObject
{
    MMWebViewController *_ownerWebViewController;
    NSMutableDictionary *_pluginName2InstanceDic;
}

+ (_Bool)isWebScrollEvent:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)dealloc;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)initWithOwnerWebViewController:(id)arg1;
- (void)loadingInitPluginArray;
@property(readonly, nonatomic) __weak MMWebViewController *ownerWebViewController; // @synthesize ownerWebViewController=_ownerWebViewController;
@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;

@end

