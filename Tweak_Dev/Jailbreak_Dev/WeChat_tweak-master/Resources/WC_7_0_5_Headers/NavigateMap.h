//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface NavigateMap : MMObject
{
    int _mapType;
    NSString *_mapName;
    NSString *_viewUrl;
    NSString *_navigateUrl;
    NSString *_installUrl;
    NSString *_queryUrl;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSString *installUrl; // @synthesize installUrl=_installUrl;
@property(retain, nonatomic) NSString *mapName; // @synthesize mapName=_mapName;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(retain, nonatomic) NSString *navigateUrl; // @synthesize navigateUrl=_navigateUrl;
@property(retain, nonatomic) NSString *queryUrl; // @synthesize queryUrl=_queryUrl;
@property(retain, nonatomic) NSString *viewUrl; // @synthesize viewUrl=_viewUrl;

@end

