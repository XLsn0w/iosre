//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@class ColorBalanceFilter, HSVAdjuster2;

@interface Fen2Filter : MultiFilterConnect
{
    ColorBalanceFilter *balance1;
    ColorBalanceFilter *balance2;
    HSVAdjuster2 *hsv2;
    _Bool smoothEnabled;
}

- (void).cxx_destruct;
- (void)NewFilter;
- (id)initWithSmooth:(_Bool)arg1;
- (void)setProperty:(id)arg1 value:(id)arg2;

@end
