//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAAppTaskRunningEvent_Base.h"

@interface WAAppTaskRunningEvent_EnterBackground : WAAppTaskRunningEvent_Base
{
    long long _mode;
}

- (id)description;
- (unsigned long long)eventType;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

@end

