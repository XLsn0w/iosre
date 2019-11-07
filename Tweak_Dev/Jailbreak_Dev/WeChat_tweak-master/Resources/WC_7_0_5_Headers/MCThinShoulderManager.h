//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, ThinShoulderParameters;

@interface MCThinShoulderManager : NSObject
{
    _Bool _enable;
    _Bool _hasSeenValid;
    int _currentIdx;
    int _smoothedWithinFrames;
    ThinShoulderParameters *_previousValidParams;
    double _validDuration;
    double _lastValidTime;
    NSMutableArray *_previousParams;
    NSMutableArray *_previousValidFrames;
    ThinShoulderParameters *_smoothedParams;
    ThinShoulderParameters *_params;
}

- (void).cxx_destruct;
- (void)calculateMiddleLineWithNormalizedPoints:(id)arg1;
@property(nonatomic) int currentIdx; // @synthesize currentIdx=_currentIdx;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool hasSeenValid; // @synthesize hasSeenValid=_hasSeenValid;
- (id)init;
@property(nonatomic) double lastValidTime; // @synthesize lastValidTime=_lastValidTime;
@property(retain, nonatomic) ThinShoulderParameters *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *previousParams; // @synthesize previousParams=_previousParams;
@property(retain, nonatomic) NSMutableArray *previousValidFrames; // @synthesize previousValidFrames=_previousValidFrames;
@property(retain, nonatomic) ThinShoulderParameters *previousValidParams; // @synthesize previousValidParams=_previousValidParams;
- (void)resetState;
@property(retain, nonatomic) ThinShoulderParameters *smoothedParams; // @synthesize smoothedParams=_smoothedParams;
@property(nonatomic) int smoothedWithinFrames; // @synthesize smoothedWithinFrames=_smoothedWithinFrames;
@property(nonatomic) double validDuration; // @synthesize validDuration=_validDuration;
- (void)setupNormalizedPoints:(id)arg1 toFilter:(id)arg2;

@end

