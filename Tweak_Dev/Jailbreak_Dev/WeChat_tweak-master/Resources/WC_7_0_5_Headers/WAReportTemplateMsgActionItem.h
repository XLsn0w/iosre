//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportTemplateMsgActionItem : WAReportBaseItem
{
    unsigned int _operateTime;
    unsigned long long _eventID;
    NSString *_templateID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(nonatomic) unsigned int operateTime; // @synthesize operateTime=_operateTime;
- (id)reportString;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;

@end

