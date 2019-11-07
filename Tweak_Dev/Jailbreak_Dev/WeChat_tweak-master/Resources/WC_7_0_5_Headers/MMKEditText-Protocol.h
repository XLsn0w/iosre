//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMKView.h"

@class MMKEditTextOnTextBeginChangeCallback, MMKEditTextOnTextChangedCallback, NSString;

@protocol MMKEditText <MMKView>
- (NSString *)encryptWith3Des;
- (long long)getClearButtonMode;
- (_Bool)getEnabled;
- (_Bool)getFocus;
- (NSString *)getHint;
- (long long)getHintColor;
- (long long)getKeyboardType;
- (int)getMaxLength;
- (int)getSelection;
- (NSString *)getText;
- (long long)getTextAlign;
- (long long)getTextColor;
- (NSString *)getTextFont;
- (float)getTextSize;
- (long long)getTintColor;
- (void)setClearButtonMode:(long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setFocus:(_Bool)arg1;
- (void)setHint:(NSString *)arg1;
- (void)setHintColor:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setMaxLength:(int)arg1;
- (void)setOnTextBeginChangeCallback:(MMKEditTextOnTextBeginChangeCallback *)arg1;
- (void)setOnTextChangedCallback:(MMKEditTextOnTextChangedCallback *)arg1;
- (void)setSelection:(int)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextAlign:(long long)arg1;
- (void)setTextColor:(long long)arg1;
- (void)setTextFont:(NSString *)arg1;
- (void)setTextSize:(float)arg1;
- (void)setTintColor:(long long)arg1;
@end

