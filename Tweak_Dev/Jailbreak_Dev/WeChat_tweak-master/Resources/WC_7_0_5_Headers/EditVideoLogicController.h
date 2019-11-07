//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSLock, NSMutableDictionary;

@interface EditVideoLogicController : MMObject
{
    NSMutableDictionary *_dicEditAsset;
    NSLock *_lock;
}

+ (void)NewVideoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)NewVideoCompostionWithAvAsset:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
+ (void)__NewVideoBGMCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)__NewVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)__customVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)__imageCompositionWithAsset:(id)arg1 withDefaultImg:(id)arg2 withAttr:(id)arg3 toFilePath:(id)arg4;
+ (struct CGAffineTransform)adjustPreferredTransform:(struct CGAffineTransform)arg1 withNaturalSize:(struct CGSize)arg2;
+ (void)customVideoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)customVideoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (id)getParamsForEntranceType:(unsigned long long)arg1 withAsset:(id)arg2;
+ (struct CGAffineTransform)getTransformFromAsset:(id)arg1;
+ (void)storyVideoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)useCustomVideoComposition;
+ (void)videoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)videoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getEditVideoAttr:(id)arg1;
- (id)init;
- (void)modifyAsset:(id)arg1 withEditImageAttr:(id)arg2 withEditedTimeRange:(CDStruct_e83c9415)arg3;
- (void)removeEditedAsset:(id)arg1;

@end

