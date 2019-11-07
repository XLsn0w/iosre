//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MMRTCMenuResponder : NSObject
{
    _Bool _disableLongPress;
    _Bool _disableSelectAll;
    id <MMRTCMenuSelectDelegate> _selectDelegate;
    id <MMRTCMenuResponderDelegate> _responderDelegate;
    NSArray *_originMenuItems;
}

- (void).cxx_destruct;
- (_Bool)canRespondsToMenuAction:(SEL)arg1;
@property(nonatomic) _Bool disableLongPress; // @synthesize disableLongPress=_disableLongPress;
@property(nonatomic) _Bool disableSelectAll; // @synthesize disableSelectAll=_disableSelectAll;
- (id)getMenuActionResponder:(SEL)arg1;
- (id)getSelectMenuItem;
- (void)onMenuHidden;
- (void)onSelectAllText:(id)arg1;
- (void)onSelectTextCopy:(id)arg1;
- (void)onSelectTextForward:(id)arg1;
@property(retain, nonatomic) NSArray *originMenuItems; // @synthesize originMenuItems=_originMenuItems;
@property(nonatomic) __weak id <MMRTCMenuResponderDelegate> responderDelegate; // @synthesize responderDelegate=_responderDelegate;
@property(nonatomic) __weak id <MMRTCMenuSelectDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;

@end

