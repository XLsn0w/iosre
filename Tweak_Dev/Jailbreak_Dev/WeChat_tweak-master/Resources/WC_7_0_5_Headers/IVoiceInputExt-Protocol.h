//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IVoiceInputExt <NSObject>

@optional
- (void)OnEndRecord;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnGetText:(NSString *)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnStartRecord;
@end

