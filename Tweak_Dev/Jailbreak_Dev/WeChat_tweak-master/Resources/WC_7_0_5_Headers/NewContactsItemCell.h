//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

#import "ContactsItemViewDelegate.h"

@class ContactsItemView, NSString;

@interface NewContactsItemCell : MMMultiMenuTableViewCell <ContactsItemViewDelegate>
{
    ContactsItemView *m_contactsItemView;
    _Bool _m_bHideOpenIMDesc;
    id <NewContactsItemCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NewContactsItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool m_bHideOpenIMDesc; // @synthesize m_bHideOpenIMDesc=_m_bHideOpenIMDesc;
- (void)onContectsItemViewHeadViewDoubleClick:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithContact:(id)arg1;
- (void)updateWithContact:(id)arg1 shouldShowUnreadStoryMask:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

