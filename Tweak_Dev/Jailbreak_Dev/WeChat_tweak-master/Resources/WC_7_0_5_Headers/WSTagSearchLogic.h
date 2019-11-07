//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTagTextField, MMUISearchBar, NSMutableArray, NSString;

@interface WSTagSearchLogic : NSObject
{
    _Bool _bForbidTagDeletion;
    id <WSTagSearchDelegate> _deletage;
    NSString *_tipsWhenEmptyNormalText;
    MMUISearchBar *_searchBar;
    MMTagTextField *_textField;
    NSMutableArray *_tagList;
    NSString *_tagText;
    NSString *_normalText;
}

- (void).cxx_destruct;
- (void)addTagName:(id)arg1 withType:(unsigned int)arg2 withExtraInfo:(id)arg3;
@property(nonatomic) _Bool bForbidTagDeletion; // @synthesize bForbidTagDeletion=_bForbidTagDeletion;
- (void)dealloc;
@property(nonatomic) __weak id <WSTagSearchDelegate> deletage; // @synthesize deletage=_deletage;
- (id)getCurrentTips;
- (id)getFont;
- (id)getTagList;
- (id)getTagQueryInfo:(id)arg1;
- (id)getTagSearchText;
- (id)getTagText;
- (void)handleNormalTextChanged:(id)arg1;
- (void)handleSearchInputChanged:(id)arg1;
- (id)initWithTagSearchBar:(id)arg1;
- (id)initWithTagTextField:(id)arg1;
@property(retain, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
- (void)resetTagSearchStatus;
- (void)resetTypingAttributes;
@property(nonatomic) __weak MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)setDefaultTextAttributes;
- (void)setTagAttributeText:(id)arg1;
- (void)setTagHolders:(id)arg1 withNormalText:(id)arg2;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(nonatomic) __weak MMTagTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSString *tipsWhenEmptyNormalText; // @synthesize tipsWhenEmptyNormalText=_tipsWhenEmptyNormalText;
- (void)tagSearchBarTextDidChanged:(id)arg1;
- (_Bool)tagSearchObj:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)updateSearchBarCustomTips;
- (void)updateTagSearchContent;
- (void)updateTagText;
- (id)userQuery:(id)arg1;

@end

