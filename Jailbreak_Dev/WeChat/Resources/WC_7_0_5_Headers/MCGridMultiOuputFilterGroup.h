//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

#import "GPUImageInput.h"

@class MCGridMultiInputFilter, NSArray, NSMutableArray, NSString;

@interface MCGridMultiOuputFilterGroup : GPUImageOutput <GPUImageInput>
{
    NSMutableArray *filters;
    _Bool isEndProcessing;
    NSArray *_faceAnalyzers;
    NSArray *_handBoxes;
    MCGridMultiInputFilter *_recordFrameBufferFilter;
    NSArray *_initialFilters;
    struct CGSize _preferPrefixInputScale;
}

+ (id)filterGroupWithInputFilters:(id)arg1 terminalFilter:(id)arg2;
- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)cleanFilters;
- (void)endProcessing;
@property(retain, nonatomic) NSArray *faceAnalyzers; // @synthesize faceAnalyzers=_faceAnalyzers;
- (id)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize)arg1;
- (id)framebufferForOutput;
@property(retain, nonatomic) NSArray *handBoxes; // @synthesize handBoxes=_handBoxes;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1 buffers:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSArray *initialFilters; // @synthesize initialFilters=_initialFilters;
- (struct CGSize)maximumOutputSize;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (struct CGSize)outputFrameSize;
@property(nonatomic) struct CGSize preferPrefixInputScale; // @synthesize preferPrefixInputScale=_preferPrefixInputScale;
- (long long)processCurrentFilterListId:(id)arg1 atIndex:(long long)arg2;
@property(retain, nonatomic) MCGridMultiInputFilter *recordFrameBufferFilter; // @synthesize recordFrameBufferFilter=_recordFrameBufferFilter;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (_Bool)shouldProcessCurrentFilterList:(id)arg1 atIndex:(long long)arg2;
- (_Bool)wantsMonochromeInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
