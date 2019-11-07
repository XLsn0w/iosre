//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "FavForwardLogicDelegate.h"
#import "IFavCdnDownloadMgrExt.h"
#import "IFavoritesExt.h"
#import "IFavoritesRepairSvrDataExt.h"
#import "IMsgExt.h"
#import "IRecordDownloadExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WNArticleToolViewDelegate.h"
#import "WNParaCellViewDelegate.h"

@class CMessageWrap, FavDataItemWrap, FavoritesItem, FavoritesItemDataField, NSMutableArray, NSString, WCDataItem, WNEditingInfo, WNParagraphCellView, WNParagraphMgr;

@interface WNArticleDataController : MMObject <FavForwardLogicDelegate, IFavoritesRepairSvrDataExt, IMsgExt, IFavCdnDownloadMgrExt, UITableViewDataSource, UITableViewDelegate, WNParaCellViewDelegate, WNArticleToolViewDelegate, IFavoritesExt, IRecordDownloadExt>
{
    unsigned int _editTime;
    WNParagraphCellView *m_EditReminderCellView;
    WNParagraphMgr *m_wnParaMgr;
    unsigned int maxObjectId;
    int curUIStatus;
    WNEditingInfo *wnEditingInfo;
    _Bool _scheduleModified;
    _Bool bEditable;
    _Bool bEdited;
    _Bool bFromPreView;
    _Bool _m_holdOnAudio;
    _Bool _hasReportedTextEditOperation;
    id <WNArticleControllerDelegate> m_delegate;
    NSMutableArray *m_paraArray;
    NSMutableArray *m_allParaInfoArray;
    FavoritesItem *m_favItem;
    CMessageWrap *m_recordMsg;
    WCDataItem *m_wcDataItem;
    FavDataItemWrap *m_dataWrap;
    FavoritesItemDataField *_listeningDeleteData;
}

- (void).cxx_destruct;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnListStyleTextKeyboardReturn:(id)arg1 inCellView:(id)arg2 Atlocation:(int)arg3;
- (void)OnNoteSecurityCheck:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)OnObjectCellAddTextLeft:(id)arg1 inCellView:(id)arg2 newText:(id)arg3;
- (void)OnObjectCellAddTextRight:(id)arg1 inCellView:(id)arg2 newText:(id)arg3;
- (void)OnObjectCellDelTextLeft:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellDelTextRight:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellKeyboardReturnLeft:(id)arg1 inCellView:(id)arg2;
- (void)OnObjectCellKeyboardReturnRight:(id)arg1 inCellView:(id)arg2;
- (void)OnRecordEnd;
- (void)OnTodoCheckChange;
- (void)OnUpdateItems:(id)arg1;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
@property(nonatomic) _Bool bEdited; // @synthesize bEdited;
@property(nonatomic) _Bool bFromPreView; // @synthesize bFromPreView;
- (_Bool)backupArticle;
- (_Bool)canEdit;
- (_Bool)canShowMoreBtn;
- (_Bool)chectHTMLWithDataId:(id)arg1 isSuccess:(_Bool)arg2;
- (void)configFavItem:(id)arg1;
- (void)configMsg:(id)arg1;
- (void)configParaInfoObjectId:(id)arg1;
- (void)configWCDataItem:(id)arg1;
- (void)configWithDataWrap:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)cutTextSetListStyle:(int)arg1 InCellView:(id)arg2;
- (void)dealloc;
- (void)forceShowKeyboard;
- (void)geWNNotetNextPage;
- (id)genHeaderView;
- (double)getBottomEmptyHeight;
- (int)getCurrentHtmlIdIndex;
- (id)getCursorPostionString:(id)arg1;
- (id)getDataArray;
- (id)getEditingCellView;
- (id)getFavForawrdViewController;
- (id)getFavItem;
- (int)getIndexOf:(id)arg1;
- (void)getNextPage:(double)arg1;
- (id)getParaInfo:(long long)arg1;
- (int)getTextLength:(id)arg1;
- (id)getViewController;
- (void)getWNNoteFirstPage;
- (_Bool)hasEditingCellView;
- (_Bool)hasOriginHtml;
@property(nonatomic) _Bool hasReportedTextEditOperation; // @synthesize hasReportedTextEditOperation=_hasReportedTextEditOperation;
- (void)hideKeyboard;
- (void)holdOnAudio;
- (_Bool)ifCanInsertItems:(id)arg1;
- (_Bool)ifHasReachedSizeLimit;
- (_Bool)ifNonTextParaInfoNumExceedLimit:(long long)arg1;
- (_Bool)ifTextLengthExceedLimit:(long long)arg1;
- (_Bool)ignoreCmdBecauseOfVoiceActive:(id)arg1;
- (id)init;
- (void)initArrayData;
- (void)insertItem:(id)arg1 AtIndex:(unsigned long long)arg2;
- (void)insertItems:(id)arg1;
- (_Bool)isEditing;
- (_Bool)isEmpty;
- (_Bool)isInsertingInCurrentView:(id)arg1;
- (_Bool)isOlLiParagraph;
- (_Bool)isSelectedTextBold;
- (_Bool)isTodoParagraph;
- (_Bool)isUlLiParagraph;
@property(retain, nonatomic) FavoritesItemDataField *listeningDeleteData; // @synthesize listeningDeleteData=_listeningDeleteData;
- (void)loadAllParaInfoArray;
- (void)loadParaInfoToIndex:(unsigned int)arg1;
@property(retain, nonatomic) NSMutableArray *m_allParaInfoArray; // @synthesize m_allParaInfoArray;
@property(readonly, nonatomic) FavDataItemWrap *m_dataWrap; // @synthesize m_dataWrap;
@property(nonatomic) __weak id <WNArticleControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem;
@property(nonatomic) _Bool m_holdOnAudio; // @synthesize m_holdOnAudio=_m_holdOnAudio;
@property(retain, nonatomic) NSMutableArray *m_paraArray; // @synthesize m_paraArray;
@property(retain, nonatomic) CMessageWrap *m_recordMsg; // @synthesize m_recordMsg;
@property(retain, nonatomic) WCDataItem *m_wcDataItem; // @synthesize m_wcDataItem;
- (void)notifyEdited;
- (void)notifyScheduleModified;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)objectCount;
- (void)onCellContentChanged:(id)arg1;
- (void)onCellViewResighFirstResponser;
- (void)onChatNewMsgSent:(id)arg1;
- (void)onMainTextKeyboardBack:(id)arg1 inCellView:(id)arg2;
- (void)onParagraphSetOl;
- (void)onParagraphSetUl;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(_Bool *)arg2;
- (void)onSelectAll;
- (void)onSelectObjectView:(id)arg1;
- (void)onSelectionChanged:(struct _NSRange)arg1;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (void)onTextChanged:(id)arg1 newText:(id)arg2;
- (void)onTextSetBold;
- (void)onTextTooLongNeedCut:(id)arg1 inRange:(struct _NSRange)arg2 withText:(id)arg3;
- (void)onTextViewPaste;
- (void)onToolViewParagraphSetTodo;
- (void)realScrollToEditingCell;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)resetEditingInfo;
- (void)resetEditingKeyboard;
- (_Bool)saveWNArticle;
- (void)scrollToEditingCell;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectCopy:(id)arg1;
- (void)selectCut:(id)arg1;
- (void)selectDelete:(id)arg1;
- (void)selectPaste:(id)arg1;
- (void)setEditingCellView:(id)arg1;
- (void)setInitialKeyboard;
- (void)setPreviousSelectedToDelete;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)textCellDidBeginEditing:(id)arg1;
- (void)textCellShouldBeginEditing:(id)arg1;
- (void)textCellShouldEndEditing:(id)arg1;
- (void)tryAddToLoadArray:(id)arg1 atArrayIndex:(int)arg2 withEditingIndex:(int)arg3;
- (void)tryScrollToVisibleArea:(int)arg1;
- (void)updataTableViewHeight:(id)arg1;
- (void)updateAllOlIndexUI;
- (void)updateCellViewUIHeight:(int)arg1;
- (void)updateEditingCellInfo:(id)arg1;
- (void)updateLastTextFlag;
- (void)updateParagraphFlags;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

