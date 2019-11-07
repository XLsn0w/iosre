//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@interface MatrixIssue : NSObject
{
    int _reportType;
    NSString *_issueTag;
    NSString *_issueID;
    unsigned long long _dataType;
    NSString *_filePath;
    NSData *_issueData;
    NSDictionary *_customInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
- (id)description;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSData *issueData; // @synthesize issueData=_issueData;
@property(copy, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property(copy, nonatomic) NSString *issueTag; // @synthesize issueTag=_issueTag;
@property(nonatomic) int reportType; // @synthesize reportType=_reportType;

@end

