//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface CAttach : NSObject <NSCoding>
{
    unsigned int m_uiFileType;
    NSMutableArray *m_arrFileList;
    NSString *m_nsAttachID;
    _Bool isCanPreview;
    unsigned int size;
    NSString *name;
    NSString *path;
}

- (void).cxx_destruct;
- (void)AddAttach:(id)arg1 ParentPath:(id)arg2;
- (id)GetAttachIDFromPath;
- (id)GetAttachPath:(id)arg1;
- (id)GetAttachPic;
- (id)GetAttachTempPath:(id)arg1;
- (unsigned int)GetPreviewType;
- (_Bool)IsCompressFile;
- (_Bool)IsTextFile;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isCanPreview; // @synthesize isCanPreview;
@property(retain, nonatomic) NSMutableArray *m_arrFileList; // @synthesize m_arrFileList;
@property(retain, nonatomic) NSString *m_nsAttachID; // @synthesize m_nsAttachID;
@property(nonatomic) unsigned int m_uiFileType; // @synthesize m_uiFileType;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(nonatomic) unsigned int size; // @synthesize size;

@end

