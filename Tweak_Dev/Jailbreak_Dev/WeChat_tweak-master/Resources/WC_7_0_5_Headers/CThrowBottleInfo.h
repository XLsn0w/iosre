//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, CThrowBottleWrap, NSData;

@interface CThrowBottleInfo : NSObject
{
    CThrowBottleWrap *_m_oThrowBottleWrap;
    CMessageWrap *_m_oMsgWrap;
    NSData *_m_dtBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *m_dtBuffer; // @synthesize m_dtBuffer=_m_dtBuffer;
@property(retain, nonatomic) CMessageWrap *m_oMsgWrap; // @synthesize m_oMsgWrap=_m_oMsgWrap;
@property(retain, nonatomic) CThrowBottleWrap *m_oThrowBottleWrap; // @synthesize m_oThrowBottleWrap=_m_oThrowBottleWrap;

@end

