//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface WCHardLinkMergeOperation : NSOperation
{
    CDUnknownBlockType _mergeCompletion;
}

- (void).cxx_destruct;
- (void)hardlinkTheSameFile;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
@property(copy) CDUnknownBlockType mergeCompletion; // @synthesize mergeCompletion=_mergeCompletion;
- (void)start;

@end

