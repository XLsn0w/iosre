//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ManualFaceLongLegHandle : NSObject
{
    struct _Image *internImage;
    struct ManualHandleBase *handle;
}

- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)dealloc;
- (struct _NSRange)getRange;
- (id)initWithUIImage:(id)arg1;
- (void)redo;
- (id)resultImage;
- (void)setMagValue:(float)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (void)undo;

@end

