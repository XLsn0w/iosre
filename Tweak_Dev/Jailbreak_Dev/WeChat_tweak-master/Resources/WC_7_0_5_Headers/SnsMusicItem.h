//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface SnsMusicItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString *musicName;
    NSString *singer;
    NSString *albumName;
    NSString *coverImageUrl;
    NSString *lyrics;
    NSString *musicUrl;
    NSString *musicLowBandUrl;
    NSString *webUrl;
    NSString *musicID;
    unsigned int createTime;
    NSString *tid;
    NSString *username;
    NSString *appId;
    NSString *coverHDImageUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *coverHDImageUrl; // @synthesize coverHDImageUrl;
@property(retain, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID;
@property(retain, nonatomic) NSString *musicLowBandUrl; // @synthesize musicLowBandUrl;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName;
@property(retain, nonatomic) NSString *musicUrl; // @synthesize musicUrl;
@property(retain, nonatomic) NSString *singer; // @synthesize singer;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

