//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCPayFaceHBConfig : NSObject <PBCoding>
{
    unsigned int resourceVersion;
    unsigned int uiTotalCount;
    unsigned long long uiTotalMount;
}

+ (void)initialize;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) unsigned int resourceVersion; // @synthesize resourceVersion;
@property(nonatomic) unsigned int uiTotalCount; // @synthesize uiTotalCount;
@property(nonatomic) unsigned long long uiTotalMount; // @synthesize uiTotalMount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

