//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WADynamicBackgroundGLContext;

@interface WADynamicBackgroundGLObject : NSObject
{
    WADynamicBackgroundGLContext *_context;
    union _GLKMatrix4 _modelMatrix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WADynamicBackgroundGLContext *context; // @synthesize context=_context;
- (void)draw:(id)arg1;
- (id)initWithGLContext:(id)arg1;
@property(nonatomic) union _GLKMatrix4 modelMatrix; // @synthesize modelMatrix=_modelMatrix;
- (void)update:(double)arg1;

@end

