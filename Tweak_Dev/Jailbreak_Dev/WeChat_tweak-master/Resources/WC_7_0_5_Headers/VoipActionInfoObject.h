//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface VoipActionInfoObject : MMObject <PBCoding>
{
    _Bool m_hasClickIgnoreCallOnce;
    _Bool m_hasClickVoiceMinimizeWithEarMode;
    _Bool m_hasClickVideoMinimize;
    _Bool m_hasShowEarDeviceUnPluginTips;
}

+ (id)Instance;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) _Bool m_hasClickIgnoreCallOnce; // @synthesize m_hasClickIgnoreCallOnce;
@property(nonatomic) _Bool m_hasClickVideoMinimize; // @synthesize m_hasClickVideoMinimize;
@property(nonatomic) _Bool m_hasClickVoiceMinimizeWithEarMode; // @synthesize m_hasClickVoiceMinimizeWithEarMode;
@property(nonatomic) _Bool m_hasShowEarDeviceUnPluginTips; // @synthesize m_hasShowEarDeviceUnPluginTips;
- (void)saveToFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

