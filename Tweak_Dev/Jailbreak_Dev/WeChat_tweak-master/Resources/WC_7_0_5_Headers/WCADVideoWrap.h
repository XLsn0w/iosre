//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface WCADVideoWrap : NSObject
{
    NSString *adID;
    NSString *publishID;
    NSString *uxInfo;
    unsigned long long startTime;
    NSMutableArray *arrPlayInfo;
    unsigned int scene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adID; // @synthesize adID;
@property(retain, nonatomic) NSMutableArray *arrPlayInfo; // @synthesize arrPlayInfo;
- (id)init;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo;

@end

