//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class NSMutableDictionary, NSString;

@interface WAJSEventHandler_searchContacts : WAJSEventHandler_BaseEvent
{
    NSMutableDictionary *_dicAddressBookPhoneNumber;
    NSString *_targetPhoneNum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicAddressBookPhoneNumber; // @synthesize dicAddressBookPhoneNumber=_dicAddressBookPhoneNumber;
- (unsigned int)getAddressBookStatus;
- (id)getMathPhoneNumberArray;
- (void)handleJSEvent:(id)arg1;
- (id)init;
- (void)loadAddressBook;
@property(copy, nonatomic) NSString *targetPhoneNum; // @synthesize targetPhoneNum=_targetPhoneNum;
- (void)tryGetArthorizationAndLoad;

@end

