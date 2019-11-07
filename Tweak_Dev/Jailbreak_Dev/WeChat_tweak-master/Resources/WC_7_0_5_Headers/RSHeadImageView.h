//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, MMHeadImageView, NSString, RadarSearchMember, UIImageView, UILabel;

@interface RSHeadImageView : MMUIView
{
    int _status;
    UILabel *_displayNameWhite;
    UIImageView *_normalBg;
    UIImageView *_statusBGView;
    UIImageView *_statusView;
    UIImageView *_selectedView;
    MMHeadImageView *_imageView;
    RadarSearchMember *_member;
    NSString *_verifyTicket;
    id <RSHeadImageViewDelegate> _delegate;
    int m_iPointIndex;
    CContact *m_contact;
}

+ (struct CGSize)getHeadImageSize;
- (void).cxx_destruct;
- (void)OnClickHeadImageView;
- (void)afterStatusViewHide;
- (void)animationShowDidStop;
@property(nonatomic) __weak id <RSHeadImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doStatusPopupAnimation;
- (id)genDisplayNameLabel;
- (id)getDisplayName;
- (void)hideStatusView;
@property(retain, nonatomic) MMHeadImageView *imageView; // @synthesize imageView=_imageView;
- (void)initBackgroundView;
- (void)initDisplayNameView;
- (void)initHeadImageView;
- (void)initStatusView;
- (void)initView;
- (id)initWithRadarSearchMember:(id)arg1;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) int m_iPointIndex; // @synthesize m_iPointIndex;
@property(retain, nonatomic) RadarSearchMember *member; // @synthesize member=_member;
- (void)setRemarkName:(id)arg1;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *verifyTicket; // @synthesize verifyTicket=_verifyTicket;
- (void)showStatusView;
- (void)updateStatusView;

@end

