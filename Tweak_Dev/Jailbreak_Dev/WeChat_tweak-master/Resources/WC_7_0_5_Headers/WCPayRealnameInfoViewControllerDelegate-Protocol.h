//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GetRealnameWordingRsp, WCPayControlData, WCPayRealnameAuthenReq;

@protocol WCPayRealnameInfoViewControllerDelegate <NSObject>
- (void)FillRealnameInfoCancel;
- (_Bool)FillRealnameInfoLayoutV2;
- (void)FillRealnameInfoLayoutV2ClickConfirm:(WCPayRealnameAuthenReq *)arg1;
- (void)FillRealnameInfoNext:(WCPayControlData *)arg1;
- (GetRealnameWordingRsp *)FillRealnameInfoWording;

@optional
- (void)ReturnToAddCard;
@end

