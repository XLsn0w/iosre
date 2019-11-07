//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PropertySecurityInfo : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_logo_url;
    long long _jump_type;
    NSString *_jump_h5_url;
    NSString *_tinyapp_username;
    NSString *_tinyapp_path;
    long long _status;
    NSString *_status_name;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)genFromDic:(id)arg1;
@property(copy, nonatomic) NSString *jump_h5_url; // @synthesize jump_h5_url=_jump_h5_url;
@property(nonatomic) long long jump_type; // @synthesize jump_type=_jump_type;
@property(copy, nonatomic) NSString *logo_url; // @synthesize logo_url=_logo_url;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *status_name; // @synthesize status_name=_status_name;
@property(copy, nonatomic) NSString *tinyapp_path; // @synthesize tinyapp_path=_tinyapp_path;
@property(copy, nonatomic) NSString *tinyapp_username; // @synthesize tinyapp_username=_tinyapp_username;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

