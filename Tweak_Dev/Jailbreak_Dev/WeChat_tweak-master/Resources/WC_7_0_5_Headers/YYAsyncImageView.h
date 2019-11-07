//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class YYImage;

@interface YYAsyncImageView : UIImageView
{
    YYImage *m_image;
    YYImage *m_highlightedImage;
    YYImage *m_defaultImage;
    _Bool m_highlighted;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)newAsyncDisplayTask;
- (void)setDefaultImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

