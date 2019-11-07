//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WCDBRouterInfo : NSObject
{
    NSString *_database;
    NSArray *_associatedPaths;
    _Bool _critical;
    int _tag;
    NSString *_name;
}

+ (id)infoWithTag:(int)arg1 name:(id)arg2 database:(id)arg3 associatedPaths:(id)arg4 critical:(_Bool)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *associatedPaths;
@property _Bool critical; // @synthesize critical=_critical;
@property(readonly, nonatomic) NSString *database;
- (id)initWithTag:(int)arg1 name:(id)arg2 database:(id)arg3 associatedPaths:(id)arg4 critical:(_Bool)arg5;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int tag; // @synthesize tag=_tag;

@end

