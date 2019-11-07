//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCMusicInfo : NSObject <NSCoding>
{
    NSString *title;
    NSString *singer;
    NSString *webUrl;
    NSString *dataUrl;
    NSString *lowBandUrl;
    NSString *appId;
    NSString *nsCoverImg;
    NSString *nsCoverImgHD;
    NSString *lyric;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidForShow;
@property(retain, nonatomic) NSString *lowBandUrl; // @synthesize lowBandUrl;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric;
@property(retain, nonatomic) NSString *nsCoverImg; // @synthesize nsCoverImg;
@property(retain, nonatomic) NSString *nsCoverImgHD; // @synthesize nsCoverImgHD;
@property(retain, nonatomic) NSString *singer; // @synthesize singer;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl;

@end

