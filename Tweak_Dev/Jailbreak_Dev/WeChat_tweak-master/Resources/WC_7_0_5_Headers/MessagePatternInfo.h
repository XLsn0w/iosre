//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "PBCoding.h"

@class NSString;

@interface MessagePatternInfo : NSObject <PBCoding, NSCoding>
{
    unsigned int m_uiLocalID;
    NSString *m_nsPattern;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

