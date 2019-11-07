//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString, UINavigationController;

@interface WAAppOpenParameter : MMObject
{
    _Bool _m_bUpdateAndForceReloadTask;
    _Bool _m_bIsPreOpen;
    _Bool _m_isOpenFromFloatingView;
    unsigned int _m_uiVersion;
    NSString *_m_nsUserName;
    NSString *_m_nsPagePath;
    unsigned long long _m_uiDebugMode;
    UINavigationController *_m_navigationController;
    unsigned long long _m_uiScene;
    NSString *_m_nsSceneNote;
    unsigned long long _m_uiPreScene;
    NSString *_m_nsPreSceneNote;
    NSArray *_m_arrStackPages;
    NSString *_m_lastAppId;
}

- (void).cxx_destruct;
- (id)initWithWeAppUsername:(id)arg1;
@property(retain, nonatomic) NSArray *m_arrStackPages; // @synthesize m_arrStackPages=_m_arrStackPages;
@property(nonatomic) _Bool m_bIsPreOpen; // @synthesize m_bIsPreOpen=_m_bIsPreOpen;
@property(nonatomic) _Bool m_bUpdateAndForceReloadTask; // @synthesize m_bUpdateAndForceReloadTask=_m_bUpdateAndForceReloadTask;
@property(nonatomic) _Bool m_isOpenFromFloatingView; // @synthesize m_isOpenFromFloatingView=_m_isOpenFromFloatingView;
@property(retain, nonatomic) NSString *m_lastAppId; // @synthesize m_lastAppId=_m_lastAppId;
@property(nonatomic) __weak UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
@property(copy, nonatomic) NSString *m_nsPagePath; // @synthesize m_nsPagePath=_m_nsPagePath;
@property(copy, nonatomic) NSString *m_nsPreSceneNote; // @synthesize m_nsPreSceneNote=_m_nsPreSceneNote;
@property(copy, nonatomic) NSString *m_nsSceneNote; // @synthesize m_nsSceneNote=_m_nsSceneNote;
@property(copy, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;
@property(nonatomic) unsigned long long m_uiDebugMode; // @synthesize m_uiDebugMode=_m_uiDebugMode;
@property(nonatomic) unsigned long long m_uiPreScene; // @synthesize m_uiPreScene=_m_uiPreScene;
@property(nonatomic) unsigned long long m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(nonatomic) unsigned int m_uiVersion; // @synthesize m_uiVersion=_m_uiVersion;

@end

