//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@interface EditImageBorderView : MMUIView
{
    double _viewScale;
    unsigned long long _editImageUIStyle;
}

@property(nonatomic) double _viewScale; // @synthesize _viewScale;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withScale:(double)arg2;
- (void)resizeFrame:(struct CGRect)arg1 withScale:(double)arg2;

@end

