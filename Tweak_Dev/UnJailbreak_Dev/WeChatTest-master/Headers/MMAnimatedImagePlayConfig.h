//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMAnimatedImagePlayConfig : NSObject
{
    _Bool _needCache;
    NSString *_cpKey;
    double _maxCacheWidth;
}

+ (id)defaultConfig;
@property(nonatomic) double maxCacheWidth; // @synthesize maxCacheWidth=_maxCacheWidth;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
- (void).cxx_destruct;

@end

