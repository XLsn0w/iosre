//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface EmoticonSharedItem : NSObject <PBCoding, NSCopying>
{
    unsigned int m_packType;
    NSString *m_productId;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int m_packType; // @synthesize m_packType;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId;
- (id)toXML;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

