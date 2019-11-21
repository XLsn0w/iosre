//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QBPostDataProtocol.h"

@class NSData, NSString;

@interface QBPostDataString : NSObject <QBPostDataProtocol>
{
    int _dataPostType;
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    _Bool _dataReady;
    long long _randomString;
    unsigned long long _streamRead;
    NSData *_streamData;
    NSString *_dataString;
    NSString *_name;
    NSString *_encodeType;
}

- (void).cxx_destruct;
- (id)contentBoundaryString;
- (id)contentData;
- (id)contentInfoString;
- (id)createInputStreamForPost;
@property(nonatomic) int dataPostType;
@property _Bool dataReady; // @synthesize dataReady=_dataReady;
- (unsigned long long)dataSize;
@property(readonly) NSString *dataString; // @synthesize dataString=_dataString;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *encodeType; // @synthesize encodeType=_encodeType;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (id)finalPostData;
- (id)initWithDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;
@property(readonly) NSString *name; // @synthesize name=_name;
@property long long randomString; // @synthesize randomString=_randomString;
- (void)setDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;
- (_Bool)shouldUseStreamToSendData;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
