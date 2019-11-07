//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface EmojiInfoObj : MMObject <PBCoding, NSCopying>
{
    _Bool _disableExtern;
    NSString *md5;
    NSString *url;
    NSString *thumbUrl;
    NSString *designerId;
    NSString *encryptUrl;
    NSString *aesKey;
    NSString *productId;
    NSString *externUrl;
    NSString *attachedText;
    NSString *externMd5;
    NSString *activityId;
    NSString *attachedTextColor;
    NSString *lensId;
    NSString *_tpUrlString;
    NSString *_authkey;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey;
@property(retain, nonatomic) NSString *attachedText; // @synthesize attachedText;
@property(retain, nonatomic) NSString *attachedTextColor; // @synthesize attachedTextColor;
@property(retain, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
- (_Bool)canCdnDownload;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId;
@property(nonatomic) _Bool disableExtern; // @synthesize disableExtern=_disableExtern;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl;
@property(retain, nonatomic) NSString *externMd5; // @synthesize externMd5;
@property(retain, nonatomic) NSString *externUrl; // @synthesize externUrl;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (_Bool)hasEncryptDownloadInfo;
- (_Bool)hasTpDownloadInfo;
- (_Bool)hasWxAMDownloadInfo;
- (id)initWithEmojiInfo:(id)arg1;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *productId; // @synthesize productId;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *tpUrlString; // @synthesize tpUrlString=_tpUrlString;
@property(retain, nonatomic) NSString *url; // @synthesize url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

