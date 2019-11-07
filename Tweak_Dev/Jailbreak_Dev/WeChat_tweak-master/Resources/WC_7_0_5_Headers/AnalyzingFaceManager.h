//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AnalyzingFaceModel, FaceDetectorFeature, NSMutableArray;

@interface AnalyzingFaceManager : NSObject
{
    _Bool _lastDetectResult;
    _Bool _isKiss;
    int _lastDetectStat;
    long long _faceIndex;
    double _charmValue;
    double _charmGenerateTime;
    AnalyzingFaceModel *_analyzingFaceModel;
    double _ageValue;
    double _genderValue;
    double _popularValue;
    double _cpValue;
    long long _rawIndex;
    NSMutableArray *_faceStack;
    double _lastDetectTime;
    FaceDetectorFeature *_feature;
    struct CGPoint _facePosition;
}

+ (_Bool)detectAudioHZStat:(int)arg1 withFFT:(float *)arg2 fftLength:(int)arg3 range:(struct _NSRange)arg4 deciel:(float)arg5;
+ (_Bool)detectAudioStat:(int)arg1 withFFT:(id)arg2;
+ (_Bool)detectBodyStat:(int)arg1;
+ (_Bool)detectHandStat:(int)arg1 withHandBoxes:(id)arg2;
+ (struct CGPoint)midFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
+ (void)reMarkFeature:(float (*)[2])arg1;
+ (void)reMarkFeatureVersion2:(float (*)[2])arg1;
- (void).cxx_destruct;
@property(nonatomic) double ageValue; // @synthesize ageValue=_ageValue;
@property(retain, nonatomic) AnalyzingFaceModel *analyzingFaceModel; // @synthesize analyzingFaceModel=_analyzingFaceModel;
- (_Bool)analyzingJumpEyebrow;
- (_Bool)analyzingKiss;
- (_Bool)analyzingLeftWink;
- (_Bool)analyzingNod;
- (_Bool)analyzingOpenMouth;
- (_Bool)analyzingRightWink;
- (_Bool)analyzingShookHead;
@property(nonatomic) double charmGenerateTime; // @synthesize charmGenerateTime=_charmGenerateTime;
@property(nonatomic) double charmValue; // @synthesize charmValue=_charmValue;
- (_Bool)checkFaceFeatureOutOfSreen:(float [90][2])arg1 imageSize:(struct CGSize)arg2;
- (void)clearFaceFeatures;
@property(nonatomic) double cpValue; // @synthesize cpValue=_cpValue;
- (_Bool)detectFaceStat:(int)arg1;
@property(nonatomic) long long faceIndex; // @synthesize faceIndex=_faceIndex;
@property(nonatomic) struct CGPoint facePosition; // @synthesize facePosition=_facePosition;
@property(retain, nonatomic) NSMutableArray *faceStack; // @synthesize faceStack=_faceStack;
@property(retain, nonatomic) FaceDetectorFeature *feature; // @synthesize feature=_feature;
@property(nonatomic) double genderValue; // @synthesize genderValue=_genderValue;
- (id)getCurrentFaceFeature;
- (id)getFaceStatus:(id)arg1;
- (struct CGSize)getFeatureImageSize;
- (void)getFeaturePoints:(float [90][2])arg1;
- (void)getFeaturePointsVersion2:(float [95][2])arg1;
- (void)getLastModelPitch:(double *)arg1 yaw:(double *)arg2 roll:(double *)arg3;
- (id)init;
- (void)inputFaceFeature:(id)arg1;
@property(nonatomic) _Bool isKiss; // @synthesize isKiss=_isKiss;
- (_Bool)isPositiveFace;
@property(nonatomic) _Bool lastDetectResult; // @synthesize lastDetectResult=_lastDetectResult;
@property(nonatomic) int lastDetectStat; // @synthesize lastDetectStat=_lastDetectStat;
@property(nonatomic) double lastDetectTime; // @synthesize lastDetectTime=_lastDetectTime;
- (double)pointPairToBearingDegrees:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
@property(nonatomic) double popularValue; // @synthesize popularValue=_popularValue;
@property(nonatomic) long long rawIndex; // @synthesize rawIndex=_rawIndex;
- (void)reMarkFeature:(float (*)[2])arg1;
- (void)reMarkFeatureVersion2:(float (*)[2])arg1;
- (void)resetCharmValue;

@end

