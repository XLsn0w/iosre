//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class BizAppMsgDetailInfo, BizMessage, BrandProfileMessageSectionData, NSMutableArray, NSString, UIFont;

@interface BrandProfileMessageBaseViewModel : MMObject
{
    double _viewHeight;
    unsigned long long _cellIndex;
    unsigned long long _cellPosition;
    struct CGSize _titleSize;
    NSMutableArray *_titleLabelStyles;
    struct CGSize _digestSize;
    NSMutableArray *_digestLabelStyles;
    BrandProfileMessageSectionData *_sectionData;
    id _oldTypeMsg;
    BizMessage *_groupMsg;
    BizAppMsgDetailInfo *_itemMsg;
    unsigned long long _cellCount;
}

+ (id)createViewModelWithGroupMsg:(id)arg1;
+ (id)createViewModelWithItemMsg:(id)arg1 cellCount:(unsigned long long)arg2 cellIndex:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cellCount; // @synthesize cellCount=_cellCount;
@property(readonly, nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(readonly, nonatomic) unsigned long long cellPosition;
- (void)clearLayoutCache;
@property(readonly, nonatomic) struct CGSize coverImgSize;
@property(readonly, nonatomic) NSString *coverImgURL;
@property(readonly, nonatomic) UIFont *digestFont;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property(readonly, nonatomic) unsigned long long digestLineNumber;
@property(readonly, nonatomic) double digestMaxWidth;
@property(readonly, nonatomic) struct CGSize digestSize;
@property(readonly, nonatomic) NSString *digestStr;
@property(readonly, nonatomic) UIFont *friendsReadFont;
@property(readonly, nonatomic) double friendsReadHeight;
@property(readonly, nonatomic) NSString *friendsReadStr;
@property(readonly, nonatomic) BizMessage *groupMsg; // @synthesize groupMsg=_groupMsg;
@property(readonly, nonatomic) _Bool hasLandingPage;
- (id)initWithGroupMsg:(id)arg1;
- (id)initWithItemMsg:(id)arg1 cellCount:(unsigned long long)arg2 cellIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool isShowLargeCover;
@property(readonly, nonatomic) BizAppMsgDetailInfo *itemMsg; // @synthesize itemMsg=_itemMsg;
@property(readonly, nonatomic) double normalCoverBottomMargin;
@property(readonly, nonatomic) double normalCoverTopMargin;
- (double)normalItemHeight;
@property(readonly, nonatomic) id oldTypeMsg; // @synthesize oldTypeMsg=_oldTypeMsg;
@property(nonatomic) __weak BrandProfileMessageSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (id)tableViewCellClassName;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property(readonly, nonatomic) unsigned long long titleLineNumber;
@property(readonly, nonatomic) double titleMaxWidth;
@property(readonly, nonatomic) struct CGSize titleSize;
@property(readonly, nonatomic) NSString *titleStr;
- (double)topItemHeight;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;

@end

