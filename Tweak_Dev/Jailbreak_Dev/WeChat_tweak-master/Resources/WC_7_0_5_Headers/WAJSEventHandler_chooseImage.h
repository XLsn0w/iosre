//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSString;

@interface WAJSEventHandler_chooseImage : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    unsigned int m_imgCnt;
    long long m_sizeType;
    long long m_sourceType;
    _Bool _frontCamera;
}

- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncHandleCancel;
- (void)dealloc;
- (void)delayNotifyWeb:(id)arg1;
- (long long)getImagePickerSizeType:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (id)init;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)processImages:(id)arg1;
- (void)showImagePicker:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

