//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface PBMainFrameCellData : NSObject <PBCoding>
{
    NSString *m_nsHeadImgUsrName;
    NSString *m_nsHeadImgUrl;
    _Bool m_timeIsMoreThanAWeek;
    float m_widthForTimeLabelText;
    float m_widthForNameLabelText;
    int m_widthCacheVersion;
    _Bool m_bIsSenderFromSelf;
    NSString *m_textForNameLabel;
    NSString *m_textForMessageLabel;
    NSString *m_textForGreenLabel;
    NSString *m_textForTimeLabel;
    NSString *m_prefixTextForQuoteMessage;
    NSString *m_subfixTextForQuoteMessage;
    float m_widthForMessageLabelText;
    float m_widthForGreenLabelText;
    _Bool m_isRealTimeTalkRoomEmpty;
    NSString *m_textForMemberCntLabel;
    unsigned int m_memberCnt;
    _Bool m_bIsRoomDisplayEmpty;
    unsigned long long m_n64MesSvrID;
    _Bool m_bContainsEmoji;
}

+ (void)deleteCellDataFromLocal:(id)arg1;
+ (void)deleteCellDataFromLocalWithUsrName:(id)arg1;
+ (id)dirForCellDataFile;
+ (void)initialize;
+ (id)loadCellDataFromLocal:(id)arg1;
+ (id)pathForCellData:(id)arg1;
+ (void)saveCellDataToLocal:(id)arg1 nsUsrName:(id)arg2 filePath:(id)arg3;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool m_bContainsEmoji; // @synthesize m_bContainsEmoji;
@property(nonatomic) _Bool m_bIsRoomDisplayEmpty; // @synthesize m_bIsRoomDisplayEmpty;
@property(nonatomic) _Bool m_bIsSenderFromSelf; // @synthesize m_bIsSenderFromSelf;
@property(nonatomic) _Bool m_isRealTimeTalkRoomEmpty; // @synthesize m_isRealTimeTalkRoomEmpty;
@property(nonatomic) unsigned int m_memberCnt; // @synthesize m_memberCnt;
@property(nonatomic) unsigned long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUsrName; // @synthesize m_nsHeadImgUsrName;
@property(retain, nonatomic) NSString *m_prefixTextForQuoteMessage; // @synthesize m_prefixTextForQuoteMessage;
@property(retain, nonatomic) NSString *m_subfixTextForQuoteMessage; // @synthesize m_subfixTextForQuoteMessage;
@property(retain, nonatomic) NSString *m_textForGreenLabel; // @synthesize m_textForGreenLabel;
@property(retain, nonatomic) NSString *m_textForMemberCntLabel; // @synthesize m_textForMemberCntLabel;
@property(retain, nonatomic) NSString *m_textForMessageLabel; // @synthesize m_textForMessageLabel;
@property(retain, nonatomic) NSString *m_textForNameLabel; // @synthesize m_textForNameLabel;
@property(retain, nonatomic) NSString *m_textForTimeLabel; // @synthesize m_textForTimeLabel;
@property(nonatomic) _Bool m_timeIsMoreThanAWeek; // @synthesize m_timeIsMoreThanAWeek;
@property(nonatomic) int m_widthCacheVersion; // @synthesize m_widthCacheVersion;
@property(nonatomic) float m_widthForGreenLabelText; // @synthesize m_widthForGreenLabelText;
@property(nonatomic) float m_widthForMessageLabelText; // @synthesize m_widthForMessageLabelText;
@property(nonatomic) float m_widthForNameLabelText; // @synthesize m_widthForNameLabelText;
@property(nonatomic) float m_widthForTimeLabelText; // @synthesize m_widthForTimeLabelText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

