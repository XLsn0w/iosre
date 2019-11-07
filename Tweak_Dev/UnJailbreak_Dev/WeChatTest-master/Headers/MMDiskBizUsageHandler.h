//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMBizFileMatchNode, MMPathComponent;

@interface MMDiskBizUsageHandler : NSObject
{
    MMBizFileMatchNode *m_rootMatchNode;
    MMPathComponent *m_pathComponent;
    MMBizFileMatchNode *m_nodeUserLibrary;
    MMBizFileMatchNode *m_nodeUserDocument;
}

@property(retain, nonatomic) MMBizFileMatchNode *m_nodeUserDocument; // @synthesize m_nodeUserDocument;
@property(retain, nonatomic) MMBizFileMatchNode *m_nodeUserLibrary; // @synthesize m_nodeUserLibrary;
@property(retain, nonatomic) MMPathComponent *m_pathComponent; // @synthesize m_pathComponent;
@property(retain, nonatomic) MMBizFileMatchNode *m_rootMatchNode; // @synthesize m_rootMatchNode;
- (void).cxx_destruct;
- (int)validateStoreTimeType:(const struct MMDiskUsageBizRule *)arg1;
- (_Bool)isAllSameBizType:(int)arg1 fromNode:(id)arg2;
- (_Bool)addPathComponent:(id)arg1 withRule:(const struct MMDiskUsageBizRule *)arg2 toRootNode:(id)arg3;
- (id)ruleDescription:(const struct MMDiskUsageBizRule *)arg1;
- (_Bool)isRuleValid:(const struct MMDiskUsageBizRule *)arg1;
- (void)configMatchNodeForPathPrefix;
- (void)loadPathMatchRules;
- (id)init;

@end

