//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, CPushContact, NSString;

@protocol IOpenImContactMgrExt <NSObject>

@optional
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(CPushContact *)arg1;
- (void)onOpenImGetContactDone:(NSString *)arg1 contact:(CContact *)arg2;
- (void)onOpenImGetContactOpenUrlDone:(NSString *)arg1 openUrl:(NSString *)arg2 errorTip:(NSString *)arg3 scene:(unsigned int)arg4;
@end

