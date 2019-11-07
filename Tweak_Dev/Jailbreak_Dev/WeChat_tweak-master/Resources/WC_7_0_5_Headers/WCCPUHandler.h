//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCPUHandler : NSObject
{
    unsigned long long m_tickTok;
    float m_totalCPUCost;
    float m_totalTrackingTime;
    _Bool m_bTracking;
    float m_backgroundTotalCPU;
    float m_backgroundTotalSec;
    _Bool m_background;
    _Bool m_backgroundCPUTooSmall;
}

- (void)cultivateBackgroundCpu:(float)arg1 periodTime:(float)arg2;
- (_Bool)cultivateCpuUsage:(float)arg1 periodTime:(float)arg2;
- (void)didEnterBackground;
- (id)init;
- (id)initWithCPULimit:(float)arg1;
- (_Bool)isBackgroundCPUTooSmall;
- (void)willEnterForeground;

@end

