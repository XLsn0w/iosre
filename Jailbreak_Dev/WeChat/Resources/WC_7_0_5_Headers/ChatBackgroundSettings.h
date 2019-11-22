//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ChatBackgroundSettings : NSObject
{
    NSMutableArray *items;
    NSMutableDictionary *backgroundPreferences;
    long long currentCID;
    long long lastSyncListDate;
}

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *backgroundPreferences; // @synthesize backgroundPreferences;
- (unsigned long long)countOfItems;
@property(nonatomic) long long currentCID; // @synthesize currentCID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (id)getChatBackgroundItemByCID:(long long)arg1;
- (id)getDefaultBackgroundItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefault;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items;
- (id)keyPaths;
@property(nonatomic) long long lastSyncListDate; // @synthesize lastSyncListDate;
- (void)removeItem:(id)arg1;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;

@end
