//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMHeadImageView, NSMutableArray, RichTextView;

@interface BrandTimelineHeaderContactBtn : MMUIButton
{
    MMHeadImageView *_contactIconView;
    RichTextView *_contactNameLabel;
    NSMutableArray *_contactLabelStyles;
}

@property(retain, nonatomic) NSMutableArray *contactLabelStyles; // @synthesize contactLabelStyles=_contactLabelStyles;
@property(retain, nonatomic) RichTextView *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(retain, nonatomic) MMHeadImageView *contactIconView; // @synthesize contactIconView=_contactIconView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviewsWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

