//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DetailSubIcon, RedDot, TableCellViewData, UIImage;

@interface DetailContainerData : NSObject
{
    TableCellViewData *_cellData;
    RedDot *_redDot;
    DetailSubIcon *_subIcon;
    UIImage *_rightIcon;
}

- (void).cxx_destruct;
@property(retain) TableCellViewData *cellData; // @synthesize cellData=_cellData;
@property(retain) RedDot *redDot; // @synthesize redDot=_redDot;
@property(retain) UIImage *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain) DetailSubIcon *subIcon; // @synthesize subIcon=_subIcon;

@end

