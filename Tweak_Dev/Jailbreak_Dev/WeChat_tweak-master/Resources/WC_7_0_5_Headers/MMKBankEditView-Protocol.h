//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMKView.h"

@class MMITransmitKvData, MMKBankEditViewOnSeletBankCallback, NSString;

@protocol MMKBankEditView <MMKView>
- (_Bool)getFocus;
- (void)setData:(MMITransmitKvData *)arg1;
- (void)setFocus:(_Bool)arg1;
- (void)setOnSeletBankCallback:(MMKBankEditViewOnSeletBankCallback *)arg1;
- (void)setSelected:(NSString *)arg1;
@end

