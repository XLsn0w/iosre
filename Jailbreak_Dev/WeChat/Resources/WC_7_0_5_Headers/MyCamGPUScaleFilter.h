//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

#import "MCTmplItemFilterProtocol.h"

@class MCTmplItem, MCTmplMultiViewerElement, NSString;

@interface MyCamGPUScaleFilter : GPUImageFilter <MCTmplItemFilterProtocol>
{
    MCTmplMultiViewerElement *_multiViewerElement;
    MCTmplItem *_tmplItem;
    struct CGSize _preferOutputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MCTmplMultiViewerElement *multiViewerElement; // @synthesize multiViewerElement=_multiViewerElement;
@property(nonatomic) struct CGSize preferOutputSize; // @synthesize preferOutputSize=_preferOutputSize;
@property(retain, nonatomic) MCTmplItem *tmplItem; // @synthesize tmplItem=_tmplItem;
- (struct CGSize)sizeOfFBO;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
