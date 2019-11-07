//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface BubbleInfo : NSObject <NSCopying>
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_bubbleCaches;
    NSString *_bubbleName;
    NSString *_bubbleNameHL;
    unsigned long long _type;
    unsigned long long _position;
    struct UIEdgeInsets _edgeInsets;
    struct UIEdgeInsets _margin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bubbleName; // @synthesize bubbleName=_bubbleName;
@property(retain, nonatomic) NSString *bubbleNameHL; // @synthesize bubbleNameHL=_bubbleNameHL;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)getBubbleImage:(_Bool)arg1;
- (id)getNewBubbleImage:(_Bool)arg1;
- (id)init;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

