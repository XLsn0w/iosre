//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FTSTopHitDynamicUtil : NSObject
{
}

+ (unsigned int)CalDeclineScore:(unsigned int)arg1;
+ (unsigned int)CalDeclineScoreForMMGroup:(unsigned int)arg1;
+ (unsigned int)CalRaiseScore:(unsigned int)arg1;
+ (unsigned int)GetLeastDisplayScore;
+ (unsigned int)GetMaxDivScore;
+ (unsigned int)GetTopHitItemSurvivalDays;
+ (int)ParseScoreInterval:(unsigned int)arg1;
+ (void)PrintLogs;
+ (_Bool)isSupportTopHitRemoval;

@end

