//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCAdFeedDisplayInfo : NSObject <NSCoding>
{
    int contentDisplayType;
    int mediaDisplayMode;
    int basicRemWidth;
    int basicRootFontSize;
    double mediaDisplayWidth;
    double mediaDisplayHeight;
    NSString *mediaIconUrl;
    double mediaIconWidth;
    double mediaIconHeight;
    double mediaIconPaddingRight;
    double mediaIconPaddingBottom;
}

- (void).cxx_destruct;
@property(nonatomic) int basicRemWidth; // @synthesize basicRemWidth;
@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize;
@property(nonatomic) int contentDisplayType; // @synthesize contentDisplayType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double mediaDisplayHeight; // @synthesize mediaDisplayHeight;
@property(nonatomic) int mediaDisplayMode; // @synthesize mediaDisplayMode;
@property(nonatomic) double mediaDisplayWidth; // @synthesize mediaDisplayWidth;
@property(nonatomic) double mediaIconHeight; // @synthesize mediaIconHeight;
@property(nonatomic) double mediaIconPaddingBottom; // @synthesize mediaIconPaddingBottom;
@property(nonatomic) double mediaIconPaddingRight; // @synthesize mediaIconPaddingRight;
@property(retain, nonatomic) NSString *mediaIconUrl; // @synthesize mediaIconUrl;
@property(nonatomic) double mediaIconWidth; // @synthesize mediaIconWidth;

@end

