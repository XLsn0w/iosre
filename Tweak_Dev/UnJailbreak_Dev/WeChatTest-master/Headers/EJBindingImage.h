//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EJBindingEventedBase.h"

#import "EJDrawable-Protocol.h"
#import "EJEnterForegroundDelegate-Protocol.h"

@class EJTexture, NSOperation, NSString;

@interface EJBindingImage : EJBindingEventedBase <EJDrawable, EJEnterForegroundDelegate>
{
    EJTexture *texture;
    NSString *path;
    _Bool loading;
    NSOperation *loadCallback;
}

+ (id)_const_tagName;
+ (id)_const_nodeName;
+ (void *)_ptr_to_get_complete;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_set_src;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get_src;
@property(readonly, nonatomic) EJTexture *texture; // @synthesize texture;
- (struct OpaqueJSValue *)_get_complete:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
- (void)_set_src:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_instance:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_src:(struct OpaqueJSContext *)arg1;
- (void)setTexture:(id)arg1 path:(id)arg2;
- (void)triggerEvent:(id)arg1;
- (void)endLoad;
- (void)onEnterForeground;
- (void)dealloc;
- (void)prepareGarbageCollection;
- (void)beginLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

