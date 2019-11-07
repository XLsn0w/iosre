//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMImageUtil : NSObject
{
}

+ (void)addNodeViewPathToContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3;
+ (void)addReceiverNodeViewPathToContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3;
+ (void)addSenderNodeViewPathToContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3;
+ (unsigned long long)amountOfFreeMemory;
+ (struct CGRect)calculateImageFitRectForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
+ (struct CGSize)calculateImageFitSizeForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
+ (id)compressImageToFullScreen:(id)arg1;
+ (id)createMetaData:(id)arg1 exifDic:(id)arg2 tiffDic:(id)arg3 gpsDic:(id)arg4;
+ (id)exifInfoWithImageData:(id)arg1;
+ (id)exifLogInfoWithAsset:(id)arg1;
+ (id)exifLogInfoWithImageData:(id)arg1;
+ (id)exifLogInfoWithImageData:(id)arg1 image:(id)arg2;
+ (id)exifLogInfoWithImageData:(id)arg1 image:(id)arg2 originImageSize:(struct CGSize)arg3;
+ (id)fitImageOfLongImage:(id)arg1;
+ (id)genarateOriginImageDataFromUIImage:(id)arg1;
+ (id)generateVideoThumbImage:(id)arg1 atTime:(double)arg2;
+ (id)generateVideoThumbImageWithAsset:(id)arg1 atTime:(double)arg2;
+ (unsigned int)getCGIOrientationFromImage:(id)arg1;
+ (id)getDataCompressedImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)getImageByColor:(id)arg1 inSize:(struct CGSize)arg2 isSender:(_Bool)arg3;
+ (unsigned int)getMaxImageSizeAreaFitMemory;
+ (id)getNormalCompressedImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)hdImageWithContentsOfFile:(id)arg1;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2 withOrientation:(long long)arg3 imageData:(id)arg4;
+ (id)maskImage:(id)arg1 addTriangle:(_Bool)arg2 isSender:(_Bool)arg3 inSize:(struct CGSize)arg4;
+ (id)maskImage:(id)arg1 isSender:(_Bool)arg2 inSize:(struct CGSize)arg3;
+ (id)maskedFourRoundedCornerImageForColor:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)maskedThumbImageForMessageImage:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)maskedThumbImageForMessageImage:(id)arg1 imageSize:(struct CGSize)arg2 isSender:(_Bool)arg3;
+ (struct CGSize)maskedThumbImageSize:(struct CGSize)arg1;
+ (struct CGSize)maskedThumbImageSizeForMessageImage:(struct CGSize)arg1;
+ (void)mov2mp4withInputURL:(id)arg1 withOutputURL:(id)arg2 withTarget:(id)arg3 withSel:(SEL)arg4 withQuality:(id)arg5;
+ (id)resizeToMinSideLenDisplayMode:(long long)arg1 originImage:(id)arg2;
+ (id)resizeToNormalCompressImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)saveImageWithImageData:(id)arg1 Properties:(id)arg2;
+ (id)scaleImageToFitMemory:(id)arg1;
+ (id)scaleImageToFitMemory:(id)arg1 data:(id)arg2;
+ (id)scaledImageWithData:(id)arg1 withSize:(struct CGSize)arg2 scale:(double)arg3 orientation:(long long)arg4;
+ (void)writeImageToFile:(id)arg1 withURL:(id)arg2;

@end

