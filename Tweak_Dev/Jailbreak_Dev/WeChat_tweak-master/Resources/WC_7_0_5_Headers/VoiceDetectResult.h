//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VoiceDetectResult : NSObject
{
    _Bool isSilient_;
    _Bool isNoisy_;
    _Bool isToLoudly_;
}

- (id)init;
@property(nonatomic) _Bool isNoisy; // @synthesize isNoisy=isNoisy_;
@property(nonatomic) _Bool isSilient; // @synthesize isSilient=isSilient_;
@property(nonatomic) _Bool isToLoudly; // @synthesize isToLoudly=isToLoudly_;

@end

