//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtobufEventHandler.h"

@interface MMEncryptPRConfigHandler : ProtobufEventHandler
{
    struct ec_key_st *ecdh_key;
}

- (_Bool)OnProtocolCheckBootsUpdateEncryptPack:(id)arg1 OutBuf:(struct AutoBuffer *)arg2 uin:(unsigned int)arg3;
- (_Bool)OnProtocolEncryptPack:(id)arg1 OutBuf:(struct AutoBuffer *)arg2 uin:(unsigned int)arg3;
- (_Bool)OnProtocolHasCustomEncryptPack:(id)arg1;
- (void)dealloc;
- (id)init;

@end

