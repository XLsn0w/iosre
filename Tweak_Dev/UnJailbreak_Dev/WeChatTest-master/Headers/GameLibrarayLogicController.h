//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@protocol GameLibrarayLogicControllerDelegate;

@interface GameLibrarayLogicController : MMObject <PBMessageObserverDelegate>
{
    id <GameLibrarayLogicControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)handleMoreGameListResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleLibGameListResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getMoreGameListGameType:(unsigned int)arg1 ClassifyID:(id)arg2 startOffset:(unsigned int)arg3 limit:(int)arg4;
- (void)getLibGameListSortType:(unsigned int)arg1 startOffset:(unsigned int)arg2 limit:(int)arg3 isFirstTime:(_Bool)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
