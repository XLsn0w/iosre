//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCFileBrowsePersistent : NSObject
{
}

+ (_Bool)cleanFileBrowseTask;
+ (id)getDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)getDateWithoutHMS:(id)arg1;
+ (id)getFileBrowseTask;
+ (id)getPathOfBrowseInfoDB;
+ (id)getPathOfTaskInfo;
+ (id)getRelatedMemoryKV;
+ (unsigned long long)getStateOfFileBrowseBuildProgress;
+ (int)getVersionNumberOfDB;
+ (_Bool)hasFileBrowseTask;
+ (void)resetStateOfFileBrowseBuildProgress;
+ (_Bool)saveFileBrowseTask:(id)arg1;
+ (void)setStateOfFileBrowseBuildProgress:(unsigned long long)arg1;
+ (void)setVersionNumberOfDB:(int)arg1;

@end

