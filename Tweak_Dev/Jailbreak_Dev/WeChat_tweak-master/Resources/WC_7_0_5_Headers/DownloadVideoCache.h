//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface DownloadVideoCache : NSObject <PBCoding>
{
    NSString *m_nsMD5;
    NSString *m_nsChatName;
    unsigned int m_uiLocalID;
    unsigned int m_uiLastReadTime;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) NSString *m_nsMD5; // @synthesize m_nsMD5;
@property(nonatomic) unsigned int m_uiLastReadTime; // @synthesize m_uiLastReadTime;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

