//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSURL;

@interface QBWebPage : NSObject
{
    _Bool _finished;
    NSURL *_URL;
    id _webview;
    NSMutableArray *_itemArray;
    NSMutableDictionary *_pageInfo;
    double _timestamp;
}

+ (id)webpageWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)JSONInfoWithDetail:(_Bool)arg1;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)addPageInfoWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(_Bool)arg3;
- (void)addWebItemEvent:(id)arg1;
- (id)commonInfo;
- (id)dateDesForDate:(id)arg1;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (id)init;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (id)pageID;
@property(retain, nonatomic) NSMutableDictionary *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) __weak id webview; // @synthesize webview=_webview;
- (id)webItemWithURL:(id)arg1 createWhenNotExist:(_Bool)arg2;

@end

