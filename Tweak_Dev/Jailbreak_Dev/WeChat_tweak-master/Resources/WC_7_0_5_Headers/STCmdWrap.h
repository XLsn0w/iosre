//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface STCmdWrap : NSObject
{
    struct stCmd *_pCmd;
}

+ (id)createInstance:(struct stCmd)arg1;
- (void)dealloc;
@property(nonatomic) struct stCmd *pCmd; // @synthesize pCmd=_pCmd;

@end

