//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WSNativeSuggestionModel : NSObject
{
    int _nativeType;
    unsigned int _sugType;
    unsigned int _pos;
    unsigned int _sectionPos;
    NSString *_string;
    NSString *_expand;
    NSString *_docId;
}

+ (id)makeModel:(id)arg1 type:(int)arg2;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(retain, nonatomic) NSString *expand; // @synthesize expand=_expand;
@property(nonatomic) int nativeType; // @synthesize nativeType=_nativeType;
@property(nonatomic) unsigned int pos; // @synthesize pos=_pos;
@property(nonatomic) unsigned int sectionPos; // @synthesize sectionPos=_sectionPos;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) unsigned int sugType; // @synthesize sugType=_sugType;

@end

