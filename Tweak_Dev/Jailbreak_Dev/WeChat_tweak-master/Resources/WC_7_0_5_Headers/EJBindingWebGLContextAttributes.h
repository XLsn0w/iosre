//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingBase.h"

@interface EJBindingWebGLContextAttributes : EJBindingBase
{
    _Bool _mAlpha;
    _Bool _mDepth;
    _Bool _mStencil;
    _Bool _mAntialias;
    _Bool _mPremultipliedAlpha;
    _Bool _mPreserveDrawingBuffer;
}

+ (void *)_ptr_to_get_alpha;
+ (void *)_ptr_to_get_antialias;
+ (void *)_ptr_to_get_depth;
+ (void *)_ptr_to_get_premultipliedAlpha;
+ (void *)_ptr_to_get_preserveDrawingBuffer;
+ (void *)_ptr_to_get_stencil;
- (struct OpaqueJSValue *)_get_alpha:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_antialias:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_depth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_premultipliedAlpha:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_preserveDrawingBuffer:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_stencil:(struct OpaqueJSContext *)arg1;
@property _Bool _mAlpha; // @synthesize _mAlpha;
@property _Bool _mAntialias; // @synthesize _mAntialias;
@property _Bool _mDepth; // @synthesize _mDepth;
@property _Bool _mPremultipliedAlpha; // @synthesize _mPremultipliedAlpha;
@property _Bool _mPreserveDrawingBuffer; // @synthesize _mPreserveDrawingBuffer;
@property _Bool _mStencil; // @synthesize _mStencil;

@end

