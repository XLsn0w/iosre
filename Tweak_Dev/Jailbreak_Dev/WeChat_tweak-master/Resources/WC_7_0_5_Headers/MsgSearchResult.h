//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTSMsgItem, NSString;

@interface MsgSearchResult : NSObject
{
    unsigned int m_msgSearchResultType;
    NSString *m_nsSearchText;
    FTSMsgItem *m_msgItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSMsgItem *m_msgItem; // @synthesize m_msgItem;
@property(nonatomic) unsigned int m_msgSearchResultType; // @synthesize m_msgSearchResultType;
@property(retain, nonatomic) NSString *m_nsSearchText; // @synthesize m_nsSearchText;

@end

