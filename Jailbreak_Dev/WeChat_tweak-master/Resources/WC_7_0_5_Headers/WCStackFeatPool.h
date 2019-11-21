//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary;

@interface WCStackFeatPool : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_stackFeatDict;
    double _featStackTime;
}

- (void).cxx_destruct;
- (unsigned long long)addStackFeat:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) double featStackTime; // @synthesize featStackTime=_featStackTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *stackFeatDict; // @synthesize stackFeatDict=_stackFeatDict;

@end
