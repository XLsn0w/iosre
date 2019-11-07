//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ImageSelectorHandle : NSObject
{
    struct _Image *selectedImage;
    struct CGPoint lastPoint;
    int _mode;
}

+ (id)forebackImageFromOrignin:(id)arg1 backImage:(id)arg2;
+ (id)handleWithType:(int)arg1 image:(id)arg2;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (id)compositback:(id)arg1 width:(int)arg2;
- (void)dealloc;
- (id)getBackGroundUIImage;
- (struct _Image *)getForeGroundImage;
- (id)getForeGroundUIImage;
- (id)getOriginalUIImage;
- (struct _Image *)getSelectMask;
- (struct _Image *)getSelectedImage;
- (struct CGRect)getSelectedRect;
- (id)getSelectedUIImage;
- (id)initWithImage:(id)arg1;
- (_Bool)isRedImage;
- (struct _Image *)maskFromBack:(struct _Image *)arg1 rect:(struct CGRect)arg2 size:(struct CGSize)arg3 maskSize:(struct CGSize)arg4;
- (struct _Image *)maskFromFore:(struct _Image *)arg1 rect:(struct CGRect)arg2 size:(struct CGSize)arg3 maskSize:(struct CGSize)arg4;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)redo;
- (void)setImage:(id)arg1;
- (void)setMaskImage:(struct _Image *)arg1 withRect:(struct CGRect)arg2;
- (void)setSelectMask:(struct _Image *)arg1;
- (void)touchBeganAt:(struct CGPoint)arg1;
- (void)touchEnded;
- (void)touchMovedTo:(struct CGPoint)arg1 radius:(float)arg2 extend:(float)arg3;
- (void)undo;

@end

