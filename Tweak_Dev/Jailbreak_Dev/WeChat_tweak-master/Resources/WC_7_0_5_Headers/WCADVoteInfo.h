//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface WCADVoteInfo : NSObject <NSCoding>
{
    _Bool _forceUpdate;
    NSArray *_options;
    NSString *_componentUrl;
    NSString *_voteLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *componentUrl; // @synthesize componentUrl=_componentUrl;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
- (_Bool)hasFriendsList;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *voteLabel; // @synthesize voteLabel=_voteLabel;

@end

