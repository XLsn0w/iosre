//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, BestSellingGameListModule, GameIndexNav, GameManagementEntrance, Installed, LibraryEntranceInfo;

@interface GetGameIndexForeignResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BestSellingGameListModule *bestSellingGameList; // @dynamic bestSellingGameList;
@property(retain, nonatomic) GameManagementEntrance *gameManagement; // @dynamic gameManagement;
@property(retain, nonatomic) Installed *installed; // @dynamic installed;
@property(retain, nonatomic) LibraryEntranceInfo *libraryEntrance; // @dynamic libraryEntrance;
@property(retain, nonatomic) GameIndexNav *nav; // @dynamic nav;

@end

