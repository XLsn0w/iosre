//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMKActionSheet.h"
#import "WCActionSheetDelegate.h"

@class NSMutableArray, NSString;

@interface KindaActionSheet : NSObject <WCActionSheetDelegate, MMKActionSheet>
{
    int _destructiveIndex;
    NSMutableArray *_callbacks;
    NSMutableArray *_buttonTitles;
    NSString *_cancelTitle;
    NSString *_actionSheetTitle;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addButtonImpl:(id)arg1 callback:(id)arg2;
- (id)init;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setDestructiveIndex:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

