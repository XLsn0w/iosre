//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RTETextView;

@protocol RTETextViewDataDelegate <NSObject>
- (void)onReplaceTextInRange:(struct _NSRange)arg1 withText:(NSString *)arg2 inTextView:(RTETextView *)arg3;
@end

