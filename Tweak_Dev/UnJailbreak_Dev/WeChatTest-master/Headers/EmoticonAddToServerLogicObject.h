//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "EmoticonOperateCgiDelegate-Protocol.h"
#import "EmoticonUploadCgiDelegate-Protocol.h"

@class EmoticonOperateCgi, EmoticonUploadCgi, NSString;
@protocol EmoticonAddToServerLogicDelegate;

@interface EmoticonAddToServerLogicObject : MMObject <EmoticonOperateCgiDelegate, EmoticonUploadCgiDelegate>
{
    _Bool m_hasStartLogic;
    NSString *m_md5;
    EmoticonOperateCgi *m_addCgi;
    EmoticonUploadCgi *m_uploadCgi;
    id <EmoticonAddToServerLogicDelegate> m_delegate;
}

+ (unsigned int)getIdKeyAddToServerFailed;
+ (unsigned int)getIdKeyIdEmoticon;
@property(nonatomic) __weak id <EmoticonAddToServerLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic;
@property(retain, nonatomic) EmoticonUploadCgi *m_uploadCgi; // @synthesize m_uploadCgi;
@property(retain, nonatomic) EmoticonOperateCgi *m_addCgi; // @synthesize m_addCgi;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;
- (void).cxx_destruct;
- (void)onEmoticonUploadMd5Failed:(id)arg1;
- (void)onEmoticonUploadMd5Ok:(id)arg1;
- (void)onEmoticonOperateFailed:(id)arg1 opCode:(unsigned long long)arg2 isOverLimit:(_Bool)arg3;
- (void)onEmoticonOperateOk:(id)arg1 WithNeedBackupArray:(id)arg2 opCode:(unsigned long long)arg3;
- (_Bool)isActive;
- (void)startLogic;
- (id)initWithMd5:(id)arg1 WithDelegate:(id)arg2;
- (void)dealloc;

@end

