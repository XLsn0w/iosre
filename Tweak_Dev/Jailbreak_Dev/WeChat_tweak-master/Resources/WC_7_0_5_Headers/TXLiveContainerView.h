//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface TXLiveContainerView : UIView
{
    UIView *_liveView;
    UIImageView *_snapshotImageView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView=_liveView;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
- (void)updateSnapshot;

@end

