//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class WCPayCreExtInfo;

@interface WCPayCreTypeRuleInfo : NSObject <NSCoding>
{
    unsigned int _m_supportCreType;
    WCPayCreExtInfo *_m_creNeedInfo;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) WCPayCreExtInfo *m_creNeedInfo; // @synthesize m_creNeedInfo=_m_creNeedInfo;
@property(nonatomic) unsigned int m_supportCreType; // @synthesize m_supportCreType=_m_supportCreType;

@end

