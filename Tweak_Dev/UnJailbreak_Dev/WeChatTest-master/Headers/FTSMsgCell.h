//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSMsgCellStyle, FTSMsgItem, MMHeadImageView, MMUILabel, NSArray, NSString;

@interface FTSMsgCell : MMTableViewCell
{
    FTSMsgItem *_msgItem;
    unsigned long long _mergeCount;
    NSString *_searchText;
    NSArray *_arrKeyword;
    MMHeadImageView *_headImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    MMUILabel *_timeLabel;
    MMUILabel *_prefixDetailLabel;
    _Bool _hiddenMode;
    FTSMsgCellStyle *_cellStyleInfo;
    _Bool _bGroupMemberMsg;
    int _cellStyle;
}

@property(nonatomic) int cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool bGroupMemberMsg; // @synthesize bGroupMemberMsg=_bGroupMemberMsg;
@property(nonatomic) _Bool hiddenMode; // @synthesize hiddenMode=_hiddenMode;
@property(retain, nonatomic) NSArray *arrKeyword; // @synthesize arrKeyword=_arrKeyword;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateMsgItem:(id)arg1 searchText:(id)arg2 keywords:(id)arg3 mergeCount:(unsigned long long)arg4;
- (void)updateStatus:(_Bool)arg1;
- (void)updateDetailTextAsMsgContent:(id)arg1 highlighted:(_Bool)arg2;
- (void)updateDetailTextAsMergeCount;
- (_Bool)isTrailSurrogates:(unsigned short)arg1;
- (void)updateCellStyle;
- (void)initCellStyle;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 hiddenMode:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

