//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KSLimitNetParam : NSObject
{
    unsigned int _firstLimitTime;
    unsigned int _triggleTime;
    unsigned int _downloadTime;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned int downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) unsigned int firstLimitTime; // @synthesize firstLimitTime=_firstLimitTime;
@property(nonatomic) unsigned int triggleTime; // @synthesize triggleTime=_triggleTime;

@end

