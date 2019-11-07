//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MatrixPluginProtocol.h"

@class MatrixPluginConfig, NSString;

@interface MatrixPlugin : NSObject <MatrixPluginProtocol>
{
    MatrixPluginConfig *pluginConfig;
    id <MatrixPluginListenerDelegate> _pluginListener;
}

+ (id)getTag;
- (void).cxx_destruct;
- (void)destroy;
@property(retain, nonatomic) MatrixPluginConfig *pluginConfig; // @synthesize pluginConfig;
@property(nonatomic) __weak id <MatrixPluginListenerDelegate> pluginListener; // @synthesize pluginListener=_pluginListener;
- (void)reportIssue:(id)arg1;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)setupPluginListener:(id)arg1;
- (void)start;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

