//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWKMessageAttachment.h"

@class NSData, NSString;

@interface WWKMessageFileAttachment : WWKMessageAttachment
{
    NSString *_filename;
    NSString *_path;
    NSData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)initWithDict:(id)arg1;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)writeToDict:(id)arg1;

@end

