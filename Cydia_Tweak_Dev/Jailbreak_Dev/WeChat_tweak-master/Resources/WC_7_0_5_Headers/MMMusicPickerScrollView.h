//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView, UITapGestureRecognizer;

@interface MMMusicPickerScrollView : MMUIView <UIScrollViewDelegate>
{
    id <MMMusicPickerScrollViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_musicPickerContentViews;
    unsigned long long _selectedIndex;
    UITapGestureRecognizer *_tap;
}

- (void).cxx_destruct;
- (void)changeSelectStateForToNextIndex:(long long)arg1;
@property(nonatomic) __weak id <MMMusicPickerScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initData;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAnimating;
@property(retain, nonatomic) NSMutableArray *musicPickerContentViews; // @synthesize musicPickerContentViews=_musicPickerContentViews;
- (void)onChangeToNextIndex:(long long)arg1;
- (void)prepareScrollView:(id)arg1;
- (void)readyToPlay;
- (void)replay;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)setCurrentContentState:(_Bool)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
- (void)setupMusicData:(id)arg1 withMoveTo:(int)arg2;
- (void)tapAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
