//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface QEngineResourceManager : NSObject
{
    NSString *_configDirectoryPath;
    NSString *_vectorDataOnlineDirectoryPath;
    NSString *_satelliteOnlineDirectoryPath;
    NSString *_worldmapOnlineDirectoryPath;
    NSString *_worldmapOnlineDataCachePath;
    NSString *_roadEventDataOnlineDirectoryPath;
    NSBundle *_QMapKitBundle;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSBundle *QMapKitBundle; // @synthesize QMapKitBundle=_QMapKitBundle;
@property(copy, nonatomic) NSString *roadEventDataOnlineDirectoryPath; // @synthesize roadEventDataOnlineDirectoryPath=_roadEventDataOnlineDirectoryPath;
@property(copy, nonatomic) NSString *worldmapOnlineDataCachePath; // @synthesize worldmapOnlineDataCachePath=_worldmapOnlineDataCachePath;
@property(copy, nonatomic) NSString *worldmapOnlineDirectoryPath; // @synthesize worldmapOnlineDirectoryPath=_worldmapOnlineDirectoryPath;
@property(copy, nonatomic) NSString *satelliteOnlineDirectoryPath; // @synthesize satelliteOnlineDirectoryPath=_satelliteOnlineDirectoryPath;
@property(copy, nonatomic) NSString *vectorDataOnlineDirectoryPath; // @synthesize vectorDataOnlineDirectoryPath=_vectorDataOnlineDirectoryPath;
@property(copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
- (void).cxx_destruct;
- (id)init;
- (void)setupCachesDirectory;
- (void)setupDocumentDirectory;
- (void)setupBundle;
- (void)copyConfigResource;

@end

