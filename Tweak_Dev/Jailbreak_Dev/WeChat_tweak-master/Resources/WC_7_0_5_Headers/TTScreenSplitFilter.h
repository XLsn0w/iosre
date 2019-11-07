//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@class NSObject<TTScreenSplitDelegate>;

@interface TTScreenSplitFilter : GPUImageTwoInputFilter
{
    NSObject<TTScreenSplitDelegate> *_delegate;
    double _splitX;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<TTScreenSplitDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
@property(nonatomic) double splitX; // @synthesize splitX=_splitX;

@end

