//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface ActionMusic : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_desc;
    NSString *_wifiUrl;
    NSString *_wapUrl;
    NSString *_webUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *wapUrl; // @synthesize wapUrl=_wapUrl;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *wifiUrl; // @synthesize wifiUrl=_wifiUrl;
- (id)toXml;

@end

