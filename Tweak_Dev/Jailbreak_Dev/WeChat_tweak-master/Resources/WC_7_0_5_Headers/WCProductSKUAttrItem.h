//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WCProductSKUAttrItem : NSObject
{
    int attrSeletedIndex;
    NSString *attrItemID;
    NSString *attrItemName;
    NSArray *attrItemValues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attrItemID; // @synthesize attrItemID;
@property(retain, nonatomic) NSString *attrItemName; // @synthesize attrItemName;
@property(retain, nonatomic) NSArray *attrItemValues; // @synthesize attrItemValues;
@property(nonatomic) int attrSeletedIndex; // @synthesize attrSeletedIndex;
- (void)dealloc;

@end

