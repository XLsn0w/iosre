//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface UICollectionViewFlowLayoutWithAlignment : UICollectionViewFlowLayout
{
    double _betweenOfCell;
    long long _cellType;
    double _sumWidth;
}

@property(nonatomic) double betweenOfCell; // @synthesize betweenOfCell=_betweenOfCell;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (id)init;
- (id)initWthType:(long long)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)setCellFrameWith:(id)arg1;
@property(nonatomic) double sumWidth; // @synthesize sumWidth=_sumWidth;

@end

