//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSCTarget;

@interface JSCDebuggerWrapper : NSObject
{
    struct JSCRemoteConnectionToTarget *_connection;
    JSCTarget *_targetInternal;
    CDUnknownBlockType _disconnectBlock;
}

- (void).cxx_destruct;
@property(nonatomic) struct JSCRemoteConnectionToTarget *connection; // @synthesize connection=_connection;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType disconnectBlock; // @synthesize disconnectBlock=_disconnectBlock;
@property(retain, nonatomic) JSCTarget *targetInternal; // @synthesize targetInternal=_targetInternal;

@end

