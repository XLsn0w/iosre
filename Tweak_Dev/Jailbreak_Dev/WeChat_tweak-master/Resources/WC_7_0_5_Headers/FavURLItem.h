//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavAppMsgShareItem, NSString;

@interface FavURLItem : NSObject
{
    NSString *_title;
    NSString *_description;
    NSString *_cleanUrl;
    NSString *_thumbUrl;
    int _openCache;
    unsigned int _contentAttributeBitSetFlag;
    NSString *_canvasInfoXml;
    FavAppMsgShareItem *_appMsgShareItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavAppMsgShareItem *appMsgShareItem; // @synthesize appMsgShareItem=_appMsgShareItem;
@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml=_canvasInfoXml;
@property(retain, nonatomic) NSString *cleanUrl; // @synthesize cleanUrl=_cleanUrl;
@property(nonatomic) unsigned int contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag=_contentAttributeBitSetFlag;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isContentOriginal;
@property(nonatomic) int openCache; // @synthesize openCache=_openCache;
- (void)setContentOriginal:(_Bool)arg1;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

