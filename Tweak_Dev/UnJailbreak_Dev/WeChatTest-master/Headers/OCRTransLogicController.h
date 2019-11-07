//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseScanLogicController.h"

#import "CameraScannerStatusExt-Protocol.h"
#import "IOCRTransMgrExt-Protocol.h"
#import "OCRTransScannerDelegate-Protocol.h"

@class NSArray, NSString, OCRTransScanner, UIImage;

@interface OCRTransLogicController : BaseScanLogicController <OCRTransScannerDelegate, CameraScannerStatusExt, IOCRTransMgrExt>
{
    OCRTransScanner *_scanner;
    NSString *_orign;
    NSString *_translation;
    UIImage *_sourceImage;
    NSArray *_translations;
}

@property(retain, nonatomic) NSArray *translations; // @synthesize translations=_translations;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
- (void).cxx_destruct;
- (void)onSendDataLength:(unsigned int)arg1;
- (void)onOCRTransError:(int)arg1;
- (void)onGotOCRResult:(id)arg1;
- (void)onGotOCRResultOrign:(id)arg1 Translation:(id)arg2;
- (void)onRotate;
- (_Bool)shouldPopFromStack;
- (_Bool)shouldStartScanAnimation;
- (id)getDescriptionText;
- (float)getDescriptionLabelTopPadding;
- (id)getInfoLabelColor;
- (id)getInfoLabelFont;
- (float)getInfoLabelTopPadding;
- (id)getInfoText;
- (struct CGRect)getDrawCropRect;
- (void)setCropRect;
- (void)sendImage:(id)arg1;
- (void)fire;
- (void)stopScan;
- (void)startScan;
- (void)onCameraScannerViewDidInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

