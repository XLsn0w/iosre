//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAContactUpdateTaskWrap : MMObject
{
    _Bool _isForce;
    unsigned long long _updateType;
    NSString *_updateKey;
}

- (void).cxx_destruct;
- (_Bool)isEqualToTaskWrap:(id)arg1;
@property(nonatomic) _Bool isForce; // @synthesize isForce=_isForce;
@property(copy, nonatomic) NSString *updateKey; // @synthesize updateKey=_updateKey;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;

@end

