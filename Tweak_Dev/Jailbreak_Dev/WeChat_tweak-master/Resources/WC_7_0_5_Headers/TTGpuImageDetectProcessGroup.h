//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

#import "MCFaceDetectFilterDelegate.h"
#import "TTImageDetectProcessProtocol.h"

@class MCFaceDetectFilter, NSArray, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, TTGpuImageDetectVirtualFilter, TTImageDetectFaceTask, TTImageDetectHandTask, TTImageDetectObject;

@interface TTGpuImageDetectProcessGroup : GPUImageFilterGroup <MCFaceDetectFilterDelegate, TTImageDetectProcessProtocol>
{
    long long _lastFaceDetectOrientation;
    _Bool _enable;
    _Bool _enableFace;
    _Bool _enableHand;
    _Bool _enableUseSystemFace;
    _Bool _enableYoutuDetector;
    _Bool _flipSysFaceOri;
    _Bool _detectSyncEnable;
    _Bool _enableUseUserInputFacePoints;
    _Bool _disableGetFeatureFromPool;
    _Bool _isFinishInit;
    _Bool _willUpdateDetectFaceOri;
    MCFaceDetectFilter *_detectScaleFilter;
    double _targetMaxEdge;
    TTImageDetectFaceTask *_detectFace;
    TTImageDetectHandTask *_detectHand;
    NSArray *_systemFaceMetaList;
    long long _orientation;
    NSObject<OS_dispatch_queue> *_detectProcessGroupQueue;
    NSObject<OS_dispatch_group> *_detectTasksGroup;
    TTImageDetectObject *_currentDetectingObject;
    TTImageDetectObject *_lastDetectedObject;
    NSObject<OS_dispatch_group> *_multiProcessSyncGroup;
    TTGpuImageDetectVirtualFilter *_virtualTerminalForTargetFilter;
    NSMutableArray *_detectedObjectPool;
    struct CGRect _detectCropRect;
}

- (void).cxx_destruct;
- (void)MCFaceDetectImageProcessed:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)_startDetectImage:(id)arg1 originSize:(struct CGSize)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)_startDetectImageObject:(id)arg1 waitUntilDone:(_Bool)arg2;
- (void)_startDetectImageObjectSync:(id)arg1 faceRect:(struct CGRect)arg2;
- (long long)_updateOrientatationFromFaceList;
- (void)cleanupDetectorParams;
- (void)clearImageDetectObjectsPool;
@property(retain, nonatomic) TTImageDetectObject *currentDetectingObject; // @synthesize currentDetectingObject=_currentDetectingObject;
@property(nonatomic) struct CGRect detectCropRect; // @synthesize detectCropRect=_detectCropRect;
@property(retain, nonatomic) TTImageDetectFaceTask *detectFace; // @synthesize detectFace=_detectFace;
@property(retain, nonatomic) TTImageDetectHandTask *detectHand; // @synthesize detectHand=_detectHand;
- (id)detectImageObject:(id)arg1 time:(CDStruct_1b6d18a9)arg2 type:(unsigned long long)arg3;
- (id)detectPixbuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 type:(unsigned long long)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *detectProcessGroupQueue; // @synthesize detectProcessGroupQueue=_detectProcessGroupQueue;
@property(retain, nonatomic) MCFaceDetectFilter *detectScaleFilter; // @synthesize detectScaleFilter=_detectScaleFilter;
@property(nonatomic) _Bool detectSyncEnable; // @synthesize detectSyncEnable=_detectSyncEnable;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *detectTasksGroup; // @synthesize detectTasksGroup=_detectTasksGroup;
- (id)detectedImageObjectAtFrameTime:(CDStruct_1b6d18a9)arg1 clearCahceObjBefore:(_Bool)arg2;
@property(retain, nonatomic) NSMutableArray *detectedObjectPool; // @synthesize detectedObjectPool=_detectedObjectPool;
@property(nonatomic) _Bool disableGetFeatureFromPool; // @synthesize disableGetFeatureFromPool=_disableGetFeatureFromPool;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool enableFace; // @synthesize enableFace=_enableFace;
@property(nonatomic) _Bool enableHand; // @synthesize enableHand=_enableHand;
@property(nonatomic) _Bool enableUseSystemFace; // @synthesize enableUseSystemFace=_enableUseSystemFace;
@property(nonatomic) _Bool enableUseUserInputFacePoints; // @synthesize enableUseUserInputFacePoints=_enableUseUserInputFacePoints;
@property(nonatomic) _Bool enableYoutuDetector; // @synthesize enableYoutuDetector=_enableYoutuDetector;
@property(nonatomic) _Bool flipSysFaceOri; // @synthesize flipSysFaceOri=_flipSysFaceOri;
- (id)init;
- (id)initWithFaceDetectTargetMaxEdge:(double)arg1;
- (id)initWithFaceDetectTargetMaxEdge:(double)arg1 async:(_Bool)arg2;
@property(nonatomic) _Bool isFinishInit; // @synthesize isFinishInit=_isFinishInit;
@property(retain, nonatomic) TTImageDetectObject *lastDetectedObject; // @synthesize lastDetectedObject=_lastDetectedObject;
@property(nonatomic) long long lastFaceDetectOrientation;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *multiProcessSyncGroup; // @synthesize multiProcessSyncGroup=_multiProcessSyncGroup;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (id)popDetectedObjectAtFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)pushDetectedObject:(id)arg1;
- (void)setNeedUpdateDetectFaceFilterOrientation;
@property(retain) NSArray *systemFaceMetaList; // @synthesize systemFaceMetaList=_systemFaceMetaList;
@property(retain, nonatomic) TTGpuImageDetectVirtualFilter *virtualTerminalForTargetFilter; // @synthesize virtualTerminalForTargetFilter=_virtualTerminalForTargetFilter;
@property _Bool willUpdateDetectFaceOri; // @synthesize willUpdateDetectFaceOri=_willUpdateDetectFaceOri;
- (void)setupDetectParamsWithItem:(id)arg1;
- (id)startDetectImage:(id)arg1;
- (id)startDetectImage:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)startDetectImageObj:(id)arg1;
- (void)startDetectImageObjSync:(id)arg1 faceRect:(struct CGRect)arg2;
@property(readonly, nonatomic) double targetMaxEdge; // @synthesize targetMaxEdge=_targetMaxEdge;
- (void)updateDetectFaceFilterOri;
- (_Bool)waitDetectEnd:(id)arg1 timeout:(double)arg2;
- (_Bool)waitDetectEndWithParams:(id)arg1 timeout:(double)arg2;
- (_Bool)waitDetectEndWithTime:(CDStruct_1b6d18a9)arg1 timeout:(double)arg2;
- (_Bool)waitDetectEndWithType:(unsigned long long)arg1 timeout:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

