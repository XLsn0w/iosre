//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IAsyncTaskProtocol <NSObject>
- (void)excuteBackgroundTask;
- (void)excuteForegroundTask;
- (void)excuteInitTask;
- (_Bool)hasBackgroundTask;
- (_Bool)hasForegroundTask;
- (_Bool)hasInitTask;

@optional
- (void)excuteTimerTask;
- (_Bool)hasTimerTask;
@end

