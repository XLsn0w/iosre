//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WNPasteMgr : MMObject
{
}

+ (void)clearPasteData;
+ (void)copy:(id)arg1 sections:(id)arg2 itemLocalId:(int)arg3;
+ (id)getDescOfAttachment:(id)arg1;
+ (id)getPasteData;
+ (id)getPasteSection;
+ (_Bool)hasPasteData;
+ (_Bool)needClear;
+ (void)resetFilePathForMessageInfo:(id)arg1;
+ (void)tryClearPasteData:(int)arg1;

@end

