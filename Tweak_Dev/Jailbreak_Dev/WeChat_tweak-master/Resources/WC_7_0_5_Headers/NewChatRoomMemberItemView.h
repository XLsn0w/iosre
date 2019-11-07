//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, MMCPLabel, MMMaskHeadImageView, NSString, UIButton, UIColor, UIImageView;

@interface NewChatRoomMemberItemView : MMUIView
{
    UIButton *m_viewMemberBtn;
    UIButton *m_addMemberBtn;
    UIButton *m_deleteMemberBtn;
    UIButton *m_actionBtn;
    MMMaskHeadImageView *m_headImageView;
    MMCPLabel *m_labelDisplayName;
    MMCPLabel *m_labelSubDesc;
    UIImageView *m_trackIcon;
    UIButton *m_smallDeleteBtn;
    CContact *m_contact;
    CContact *m_groupContact;
    id <NewChatRoomMemberItemViewDelegate> m_delegate;
    SEL m_updateItemViewForDeleteSel;
    _Bool m_bDeleteStatus;
    unsigned int m_uiIndex;
    UIColor *m_textColor;
    double m_fLeftMargin;
    double m_fRightMargin;
    _Bool m_noDisplayName;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    unsigned int _m_scence;
}

- (void).cxx_destruct;
- (void)OnClickDeleteBtn;
- (void)OnClickHeadImage;
- (void)OnClickViewBtn;
- (void)handleLongPressEx:(id)arg1;
- (void)hiddenAllSubViews;
- (id)initViewInChatRoomProfile;
- (id)initViewInChatRoomProfile:(double)arg1 nameSize:(double)arg2;
- (_Bool)isDisplayNameUnsafe;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <NewChatRoomMemberItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly) double m_fLeftMargin; // @synthesize m_fLeftMargin;
@property(readonly) double m_fRightMargin; // @synthesize m_fRightMargin;
@property(retain, nonatomic) CContact *m_groupContact; // @synthesize m_groupContact;
@property(nonatomic) unsigned int m_scence; // @synthesize m_scence=_m_scence;
@property(nonatomic) unsigned int m_uiIndex; // @synthesize m_uiIndex;
- (void)setNoDisplayName:(_Bool)arg1;
- (void)setTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)showTrackFlag;
- (void)updateAddItemViewForDelete;
- (void)updateAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateCPState;
- (void)updateContact;
- (void)updateContactItemSubview;
- (void)updateContactItemViewForDelete;
- (void)updateDeleteItemViewForDelete;
- (void)updateItemViewForDelete:(_Bool)arg1;
- (void)updateOpenim;
- (void)updateWithAddMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithContactEx:(id)arg1 atIndex:(unsigned long long)arg2 withColumn:(unsigned long long)arg3;
- (void)updateWithDeleteMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithViewMemberBtnAtIndexEx:(unsigned long long)arg1;
- (void)updateWithViewMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;

@end

