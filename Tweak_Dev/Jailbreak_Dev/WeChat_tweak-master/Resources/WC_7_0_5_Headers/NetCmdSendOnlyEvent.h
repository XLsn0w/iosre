//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseEvent.h"

@interface NetCmdSendOnlyEvent : CBaseEvent
{
    struct INetCmdSendOnly *m_netcmd;
    int m_cmdstatus;
}

- (void)OnCmdRecv;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)Stop;
- (void)dealloc;
- (id)init;
@property(nonatomic) struct INetCmdSendOnly *m_netcmd; // @synthesize m_netcmd;

@end

