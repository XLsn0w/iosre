//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

@interface ImageProvider : GPUImageOutput
{
    int imageWidth;
    int imageHeight;
}

- (void)changeFilter;
- (void)openHFImage:(id)arg1;
- (void)openImage:(id)arg1;
- (void)openImageWithURL:(id)arg1;
- (void)openInternImage:(struct _Image *)arg1;
- (void)setInputTextureImage:(struct _Image *)arg1;
- (void)setInputTextureUIImage:(id)arg1;

@end

