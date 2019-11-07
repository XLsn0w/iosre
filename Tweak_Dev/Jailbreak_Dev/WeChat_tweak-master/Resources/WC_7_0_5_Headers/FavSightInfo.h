//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavStreamVideoItem, FavoritesItem, FavoritesItemDataField, NSString;

@interface FavSightInfo : NSObject
{
    int _duration;
    int _type;
    int _illegalType;
    NSString *_dataPath;
    NSString *_thumbPath;
    FavStreamVideoItem *_streamVideoItem;
    NSString *_statExtStr;
    long long _dataSize;
    NSString *_videoUrl;
    NSString *_thumbUrl;
    FavoritesItem *_favItem;
    FavoritesItemDataField *_favData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(nonatomic) long long dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) FavoritesItemDataField *favData; // @synthesize favData=_favData;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) int illegalType; // @synthesize illegalType=_illegalType;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr=_statExtStr;
@property(retain, nonatomic) FavStreamVideoItem *streamVideoItem; // @synthesize streamVideoItem=_streamVideoItem;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;

@end

