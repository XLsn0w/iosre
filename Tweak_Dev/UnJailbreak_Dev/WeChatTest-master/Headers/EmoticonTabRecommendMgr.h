//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString;

@interface EmoticonTabRecommendMgr : MMService <MMService, IMsgExt>
{
}

- (void)testXml;
- (id)getStringWithSuperNode:(struct XmlReaderNode_t *)arg1 withKey:(const char *)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)removeItemWithProductId:(id)arg1;
- (id)getTabRecommendData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

