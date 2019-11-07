//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer, NSMutableArray;

@interface MMOpenVoiceMemberMgr : NSObject
{
    NSMutableArray *_lastSpeakers;
    NSMutableArray *_currentInRoomMembers;
    NSMutableArray *_memberChangeListeners;
    MMTimer *_timer;
}

- (void).cxx_destruct;
- (void)addSpeakerChangeCallback:(CDUnknownBlockType)arg1;
- (id)getCurrentRoomMembers;
- (id)getMemberByOpenId:(id)arg1;
- (id)init;
- (_Bool)isSpeakersEqual:(id)arg1;
- (void)onTimerExpired;
- (void)resetMembers;
- (void)startListenToSpeakerChange;
- (void)stopListenToSpeakerChange;
- (void)updateMembers:(id)arg1;

@end

