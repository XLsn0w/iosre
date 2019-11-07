//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImageSelectorHandle.h"

@interface PaintSelectorHandle : ImageSelectorHandle
{
    struct PaintSelection *paintSelector;
    int redoCount;
}

- (_Bool)canRedo;
- (_Bool)canUndo;
- (_Bool)canUpdateUndoMark;
- (struct CGRect)getSelectedRect;
- (_Bool)isRedImage;
- (void)redo;
- (void)setImage:(id)arg1;
- (void)setMode:(int)arg1;
- (void)touchBeganAt:(struct CGPoint)arg1;
- (void)touchEnded;
- (void)touchMovedTo:(struct CGPoint)arg1 radius:(float)arg2 extend:(float)arg3;
- (void)undo;
- (void)updateUndoMark;

@end

