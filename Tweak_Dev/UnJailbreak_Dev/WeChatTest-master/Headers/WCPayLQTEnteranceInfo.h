//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayLQTEnteranceInfo : NSObject <PBCoding>
{
    unsigned int lqt_state;
    int is_show_cell;
    int is_open_lqt;
    NSString *lct_wording;
    NSString *lct_url;
    NSString *cell_icon;
    NSString *lqt_open_url;
    NSString *lqt_title;
    NSString *lqt_wording;
}

+ (_Bool)saveLQTEnteranceInfo:(id)arg1;
+ (id)getLocalLQTEnteranceInfo;
+ (void)initialize;
@property(retain, nonatomic) NSString *lqt_wording; // @synthesize lqt_wording;
@property(retain, nonatomic) NSString *lqt_title; // @synthesize lqt_title;
@property(retain, nonatomic) NSString *lqt_open_url; // @synthesize lqt_open_url;
@property(nonatomic) int is_open_lqt; // @synthesize is_open_lqt;
@property(retain, nonatomic) NSString *cell_icon; // @synthesize cell_icon;
@property(nonatomic) int is_show_cell; // @synthesize is_show_cell;
@property(retain, nonatomic) NSString *lct_url; // @synthesize lct_url;
@property(nonatomic) unsigned int lqt_state; // @synthesize lqt_state;
@property(retain, nonatomic) NSString *lct_wording; // @synthesize lct_wording;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

