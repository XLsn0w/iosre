//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QAppKeyCheck : NSObject
{
    NSString *_miniProgramID;
    NSString *_businessKey;
}

- (void).cxx_destruct;
- (id)appendParameterStringFor:(id)arg1;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
- (id)initWithMiniProgramID:(id)arg1 businessKey:(id)arg2;
@property(copy, nonatomic) NSString *miniProgramID; // @synthesize miniProgramID=_miniProgramID;
- (void)onURLFinishLoading:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startAppKeyCheck:(CDUnknownBlockType)arg1;

@end

