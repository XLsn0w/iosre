//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTriggerElement.h"

@class NSArray, NSString;

@interface MCMeshElement : MCTriggerElement
{
    int _frameType;
    NSString *_elementID;
    double _frameDuration;
    long long _frames;
    NSArray *_meshElements;
    NSString *_folderPath;
    long long _currentFrameNumber;
}

- (void).cxx_destruct;
- (id)MCObjectSafe:(id)arg1 atIntegerIndex:(long long)arg2;
- (void)advanceTime:(double)arg1;
- (void)clearResource;
@property(nonatomic) long long currentFrameNumber; // @synthesize currentFrameNumber=_currentFrameNumber;
- (id)currentMeshItem;
- (id)currentMeshItem:(id)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) int frameType; // @synthesize frameType=_frameType;
@property(nonatomic) long long frames; // @synthesize frames=_frames;
- (id)initWithDictionary:(id)arg1 item:(id)arg2;
@property(retain) NSArray *meshElements; // @synthesize meshElements=_meshElements;
- (void)preloadResource;
- (void)resetTime;

@end

