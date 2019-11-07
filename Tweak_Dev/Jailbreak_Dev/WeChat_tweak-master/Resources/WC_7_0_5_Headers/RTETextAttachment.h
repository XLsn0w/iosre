//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@class RTEAttributeNode;

@interface RTETextAttachment : NSTextAttachment
{
    RTEAttributeNode *_attribute;
    struct CGSize _attachmentSize;
    struct CGRect _attachmentFrame;
}

- (void).cxx_destruct;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
@property(nonatomic) struct CGRect attachmentFrame; // @synthesize attachmentFrame=_attachmentFrame;
@property(nonatomic) struct CGSize attachmentSize; // @synthesize attachmentSize=_attachmentSize;
@property(retain, nonatomic) RTEAttributeNode *attribute; // @synthesize attribute=_attribute;
- (void)configFrame;
- (id)initWithAttachmentNode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int type;

@end

