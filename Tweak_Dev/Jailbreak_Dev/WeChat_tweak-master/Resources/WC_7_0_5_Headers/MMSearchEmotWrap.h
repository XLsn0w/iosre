//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MMSearchEmotWrap : NSObject
{
    _Bool _disableAddSticker;
    unsigned int _searchScene;
    unsigned int _type;
    unsigned int _sourceType;
    unsigned int _fromSearchType;
    unsigned int _weappVersion;
    NSString *_searchID;
    NSString *_docID;
    NSString *_title;
    NSString *_md5;
    NSString *_encryptUrl;
    NSString *_aesKey;
    NSString *_thumbUrl;
    NSString *_designerId;
    NSString *_designerName;
    NSString *_designerThumbUrl;
    NSString *_productID;
    NSString *_productName;
    NSString *_productUrl;
    NSString *_activityId;
    NSString *_sourceUrl;
    NSString *_sourceName;
    NSData *_imgData;
    NSString *_weappUsrName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(retain, nonatomic) NSString *designerName; // @synthesize designerName=_designerName;
@property(retain, nonatomic) NSString *designerThumbUrl; // @synthesize designerThumbUrl=_designerThumbUrl;
@property(nonatomic) _Bool disableAddSticker; // @synthesize disableAddSticker=_disableAddSticker;
@property(retain, nonatomic) NSString *docID; // @synthesize docID=_docID;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(nonatomic) unsigned int fromSearchType; // @synthesize fromSearchType=_fromSearchType;
@property(retain, nonatomic) NSData *imgData; // @synthesize imgData=_imgData;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *weappUsrName; // @synthesize weappUsrName=_weappUsrName;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;

@end

