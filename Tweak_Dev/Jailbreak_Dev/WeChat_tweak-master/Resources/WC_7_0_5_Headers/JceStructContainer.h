//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JceStructContainer : NSObject
{
    void *_p;
    CDUnknownBlockType _allocator;
    CDUnknownBlockType _deallocator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType allocator; // @synthesize allocator=_allocator;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType deallocator; // @synthesize deallocator=_deallocator;
- (id)initWithAllocator:(CDUnknownBlockType)arg1 andDeallocator:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) void *p; // @synthesize p=_p;

@end

