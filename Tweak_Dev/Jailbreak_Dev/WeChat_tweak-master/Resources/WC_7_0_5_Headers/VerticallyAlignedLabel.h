//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface VerticallyAlignedLabel : UILabel
{
    int verticalAlignment_;
}

- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=verticalAlignment_;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;

@end

