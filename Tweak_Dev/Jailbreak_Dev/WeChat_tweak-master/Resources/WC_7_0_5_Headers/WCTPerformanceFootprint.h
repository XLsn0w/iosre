//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCTPerformanceFootprint : NSObject
{
    unsigned int _frequency;
    NSString *_sql;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned int frequency; // @synthesize frequency=_frequency;
- (id)initWithSQL:(id)arg1 andFrequency:(unsigned int)arg2;
@property(readonly, nonatomic) NSString *sql; // @synthesize sql=_sql;

@end

