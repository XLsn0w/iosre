//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QMapServices : NSObject
{
    NSString *_APIKey;
}

+ (id)sharedServices;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
- (void)notifyAppKeyCheckResult:(int)arg1;
- (id)sdkVersion;

@end
