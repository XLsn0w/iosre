//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"

@class NSString;

@interface WCNewClickStatRecordPageItem : MMObject <NSCopying>
{
    unsigned int pageAction;
    unsigned int timeStamp;
    NSString *pageID;
}

+ (id)pageItem:(id)arg1 withAction:(unsigned int)arg2 withTimeStamp:(unsigned int)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(nonatomic) unsigned int pageAction; // @synthesize pageAction;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;

@end

