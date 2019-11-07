//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface FavSecurityLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *_infoArray;
    unsigned int _curCheckingId;
    id <FavSecurityDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)HandleResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelCheck:(unsigned int)arg1;
- (void)checkSecurity:(id)arg1;
@property(nonatomic) __weak id <FavSecurityDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)runCheck;

@end

