//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface OfflinePageA8KeyData : NSObject
{
    NSString *_originalUrl;
    NSString *_a8KeyFullUrl;
    NSArray *_a8KeyHeaders;
    id _webViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *a8KeyFullUrl; // @synthesize a8KeyFullUrl=_a8KeyFullUrl;
@property(retain, nonatomic) NSArray *a8KeyHeaders; // @synthesize a8KeyHeaders=_a8KeyHeaders;
@property(retain, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(nonatomic) __weak id webViewController; // @synthesize webViewController=_webViewController;

@end

