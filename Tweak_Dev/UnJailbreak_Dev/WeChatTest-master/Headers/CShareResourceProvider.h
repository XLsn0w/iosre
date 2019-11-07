//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMThemeManagerExt-Protocol.h"

@interface CShareResourceProvider : NSObject <MMThemeManagerExt>
{
}

+ (id)GetFailReceiverImageWithTriangle:(_Bool)arg1;
+ (id)GetMessageSenderCoverImage;
+ (id)GetMessageReceiverCoverImage;
+ (id)selfCreateImagePath;
+ (double)GetTableViewSeperatorLineHeight;
+ (id)GetContactIndexTitleColor;
+ (id)GetLinkBtnWithTitle:(id)arg1;
+ (id)GetShadowLogoImage;
+ (id)GetNavigationBarTintColor;
+ (id)GetBackGroundView;
+ (id)GetGrayBlueColor;
+ (id)GetLoginLinkColor;
+ (id)GetSendMsgDisabledColor;
+ (id)GetTableViewValueColor;
+ (id)GetMessageNodeTimeColor;
+ (id)GetMessageListTimeColor;
+ (id)GetButtonWithTitle:(id)arg1 normalImage:(id)arg2 highlightImage:(id)arg3 andRect:(struct CGRect)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCShareResourceProvider;
+ (void)initialize;
- (void)onThemeChanged;
- (void)dealloc;
- (id)init;

@end

