//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseMessageViewModel.h"

@class NSString;

@interface WCPayTransferMessageViewModel : WCPayBaseMessageViewModel
{
    NSString *_bgImageName;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (unsigned long long)bubbleType;
- (id)cellViewClassName;
- (id)descTailText;
- (id)descText;
- (id)iconName;
- (double)iconSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)sourceTitle;
- (id)titleText;

@end

