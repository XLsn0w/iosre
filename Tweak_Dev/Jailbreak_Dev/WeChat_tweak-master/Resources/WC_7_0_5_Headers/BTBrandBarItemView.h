//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

#import "BrandTimelineMsgMgrExt.h"

@class CContact, MMHeadImageView, MMUILabel, UIImageView;

@interface BTBrandBarItemView : MMUIButton <BrandTimelineMsgMgrExt>
{
    MMHeadImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIImageView *_dotImageView;
    CContact *_contact;
    unsigned long long _index;
}

+ (double)iconWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)dealloc;
@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
- (id)getCurrentContact;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)init;
- (void)initDotImageView;
- (void)initHeaderView;
- (void)initNickNameLabel;
- (void)initSubviews;
- (void)layoutSubviews;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void)onUpdateOftenReadContactByEnterSession:(id)arg1;
- (void)updateContact:(id)arg1;

@end

