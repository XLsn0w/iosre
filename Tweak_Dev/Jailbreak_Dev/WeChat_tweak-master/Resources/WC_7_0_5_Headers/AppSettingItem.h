//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AppSettingItem : NSObject <NSCoding>
{
    _Bool appAddedByUser;
    unsigned int flag;
    NSString *openID;
    NSString *appID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool appAddedByUser; // @synthesize appAddedByUser;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned int flag; // @synthesize flag;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *openID; // @synthesize openID;

@end

