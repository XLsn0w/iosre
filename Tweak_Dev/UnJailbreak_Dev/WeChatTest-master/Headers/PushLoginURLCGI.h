//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BluetoothLoginLogic.h"

#import "CheckQRCodeLoginDelegate-Protocol.h"
#import "IRsaCertMgrExt-Protocol.h"

@class CheckQRCodeLoginCGI, MMTimer, NSString;
@protocol PushLoginURLCGIDelegate;

@interface PushLoginURLCGI : BluetoothLoginLogic <CheckQRCodeLoginDelegate, IRsaCertMgrExt>
{
    CheckQRCodeLoginCGI *_checkQRCodeCGI;
    MMTimer *_expiredTimer;
    id <PushLoginURLCGIDelegate> _delegate;
}

@property(nonatomic) __weak id <PushLoginURLCGIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnCheckQRCodeLoginScaned:(id)arg1 nickName:(id)arg2;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)stopLoginLogic;
- (void)stopRequest;
- (void)startRequest;
- (id)getCheckBTQRCodeLoginCGI;
- (void)onTimeCheckExpired;
- (void)stopExpiredTimeCheck;
- (void)startExpiredTimeCheckWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)doAuthWithType:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

