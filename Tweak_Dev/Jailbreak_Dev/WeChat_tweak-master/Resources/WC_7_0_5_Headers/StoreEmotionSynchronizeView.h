//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface StoreEmotionSynchronizeView : UIView
{
    UILabel *_statusLabel;
}

- (void).cxx_destruct;
- (void)configStatusLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isOnWifi;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)updateView;

@end

