//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface SafePerformObject : MMObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_objs;
    NSMutableDictionary *m_selCancelTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)doPerformSelector:(id)arg1;
- (id)init;
- (void)safeCancelPerformWithTarget:(id)arg1;
- (void)safeCancelPerformWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)safePerformSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 afterDelay:(double)arg4;

@end
