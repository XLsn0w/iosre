//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol OCRTransScannerDelegate <NSObject>

@optional
- (void)onGotOCRResult:(NSArray *)arg1;
- (void)onGotOCRResultOrign:(NSString *)arg1 Translation:(NSString *)arg2;
- (void)onOCRTransError:(int)arg1;
- (void)onSendDataLength:(unsigned int)arg1;
@end

