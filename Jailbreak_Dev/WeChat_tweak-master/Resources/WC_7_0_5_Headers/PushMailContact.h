//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PushMailContact : NSObject <NSCopying>
{
    NSString *nsContactName;
    NSString *nsContactAddress;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *nsContactAddress; // @synthesize nsContactAddress;
@property(retain, nonatomic) NSString *nsContactName; // @synthesize nsContactName;

@end
