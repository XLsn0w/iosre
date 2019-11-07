//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBSDKCodelessPathComponent : NSObject
{
    int _index;
    int _tag;
    int _section;
    int _row;
    int _matchBitmask;
    NSString *_className;
    NSString *_text;
    NSString *_hint;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) int matchBitmask; // @synthesize matchBitmask=_matchBitmask;
@property(readonly, nonatomic) int row; // @synthesize row=_row;
@property(readonly, nonatomic) int section; // @synthesize section=_section;
@property(readonly, nonatomic) int tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

@end

