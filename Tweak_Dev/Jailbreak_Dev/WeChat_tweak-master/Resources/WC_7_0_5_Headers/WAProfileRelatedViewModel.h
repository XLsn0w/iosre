//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString;

@interface WAProfileRelatedViewModel : MMObject
{
    unsigned long long _type;
    NSString *_registerTitle;
    NSArray *_infoList;
    NSString *_mainTitle;
}

- (void).cxx_destruct;
- (id)generateMainTitle:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *infoList; // @synthesize infoList=_infoList;
- (id)initWithBrandList:(id)arg1;
- (id)initWithWeAppList:(id)arg1;
@property(copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(copy, nonatomic) NSString *registerTitle; // @synthesize registerTitle=_registerTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

