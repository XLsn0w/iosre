//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WCPayFaceHBPayViewDelegate <NSObject>
- (void)OnCaptureScreen;
- (void)OnFaceHBDeleteHB;
- (void)OnFaceHBMyRedEnvelopesList;
- (void)OnFaceHBPayCancel;
- (void)OnFaceHBPayManage;
- (void)OnFaceHBViewDetail;
- (void)OnFaceHBViewHistory;
- (void)OnHBSlide:(unsigned int)arg1 select:(unsigned int)arg2 Type:(unsigned int)arg3;
- (void)OnLoadMoreRedEnvelopesList;
- (NSString *)loadActionSheetTip;
@end
