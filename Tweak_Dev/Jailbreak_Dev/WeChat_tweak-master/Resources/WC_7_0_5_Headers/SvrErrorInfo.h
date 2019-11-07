//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface SvrErrorInfo : MMObject <PBCoding>
{
    NSString *m_nsContent;
    NSString *m_nsNoticeID;
    NSString *m_nsUrl;
    unsigned int m_uiTime;
    unsigned int m_uiStatus;
    NSString *m_nsTipsContent;
    unsigned int m_uiExpiredTime;
    NSString *m_position;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)ParseFromXml:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(retain, nonatomic) NSString *m_nsNoticeID; // @synthesize m_nsNoticeID;
@property(retain, nonatomic) NSString *m_nsTipsContent; // @synthesize m_nsTipsContent;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl;
@property(retain, nonatomic) NSString *m_position; // @synthesize m_position;
@property(nonatomic) unsigned int m_uiExpiredTime; // @synthesize m_uiExpiredTime;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned int m_uiTime; // @synthesize m_uiTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

