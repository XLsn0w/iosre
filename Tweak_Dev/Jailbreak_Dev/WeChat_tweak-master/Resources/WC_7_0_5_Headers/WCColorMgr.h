//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableDictionary, NSString;

@interface WCColorMgr : NSObject <NSXMLParserDelegate>
{
    NSString *m_colorName;
    NSMutableDictionary *_colorDic;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *colorDic; // @synthesize colorDic=_colorDic;
- (id)colorNames;
- (id)getColor:(id)arg1;
- (id)getColorValueForName:(id)arg1;
- (id)hexStringToColor:(id)arg1;
- (id)init;
- (void)loadColorFromXML;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

