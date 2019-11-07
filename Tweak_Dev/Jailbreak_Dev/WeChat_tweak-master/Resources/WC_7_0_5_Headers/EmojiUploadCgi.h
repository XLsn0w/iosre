//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class EmoticonUploadInfoObj, NSData, NSString;

@interface EmojiUploadCgi : StoreEmotionBaseCgi
{
    NSString *m_md5;
    unsigned int m_totalLen;
    unsigned long long m_requestStartTime;
    _Bool m_overLimit;
    _Bool m_isTooLarge;
    _Bool m_isConnectFailed;
    _Bool m_isAntiSpam;
    unsigned int m_startPos;
    NSData *m_buffer;
    NSString *m_realMd5;
    EmoticonUploadInfoObj *_uploadInfoObj;
    id <EmojiUploadCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *buffer; // @synthesize buffer=m_buffer;
@property(nonatomic) __weak id <EmojiUploadCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (id)initWithMd5:(id)arg1 totalLen:(unsigned int)arg2;
@property(readonly, nonatomic) _Bool isAntiSpam; // @synthesize isAntiSpam=m_isAntiSpam;
@property(readonly, nonatomic) _Bool isConnectFailed; // @synthesize isConnectFailed=m_isConnectFailed;
@property(readonly, nonatomic) _Bool isTooLarge; // @synthesize isTooLarge=m_isTooLarge;
@property(readonly, nonatomic) _Bool overLimit; // @synthesize overLimit=m_overLimit;
@property(readonly, nonatomic) NSString *realMd5; // @synthesize realMd5=m_realMd5;
@property(retain, nonatomic) EmoticonUploadInfoObj *uploadInfoObj; // @synthesize uploadInfoObj=_uploadInfoObj;
@property(readonly, nonatomic) unsigned int startPos; // @synthesize startPos=m_startPos;
- (_Bool)startRequestWithStartPos:(unsigned int)arg1 buffer:(id)arg2;

@end

