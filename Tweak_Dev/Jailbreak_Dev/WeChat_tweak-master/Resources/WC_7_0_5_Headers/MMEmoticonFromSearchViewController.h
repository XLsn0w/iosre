//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomManageAddLogicDelegate.h"
#import "IStoreEmotionDesignerInfoMgrExt.h"
#import "IStoreEmotionSingleDownloadMgrExt.h"
#import "WCActionSheetDelegate.h"

@class EmoticonCustomManageAddLogic, MMSearchEmotWrap, MMWebImageView, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface MMEmoticonFromSearchViewController : MMUIViewController <IStoreEmotionSingleDownloadMgrExt, EmoticonCustomManageAddLogicDelegate, IStoreEmotionDesignerInfoMgrExt, WCActionSheetDelegate>
{
    MMSearchEmotWrap *m_emotWrap;
    UIView *m_emotContentView;
    UIActivityIndicatorView *m_activityIndicatorView;
    MMWebImageView *m_emotView;
    UIButton *m_saveBtn;
    UIButton *m_sendBtn;
    _Bool m_isEmotExpand;
    _Bool m_isAnimating;
    UIView *m_operateContentView;
    UIButton *m_operateBtn;
    UILabel *m_operatePrefixLabel;
    UILabel *m_operateTitleLabel;
    MMWebImageView *m_operateThumbView;
    int m_internalStatus;
    EmoticonCustomManageAddLogic *m_emoticonAddLogic;
}

- (void).cxx_destruct;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncDownloadCustomEmoticon:(id)arg1;
- (unsigned int)currentLaunchType;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)doAddEmot;
- (void)doAddEmotReport;
- (void)doExchangeProcess;
- (void)doForwardEmot;
- (void)doSendEmotReport;
- (void)doubleTapEmotView:(id)arg1;
- (int)emojiTypeForImageData:(id)arg1;
- (id)getOperateImgUrlStr;
- (id)getOperateTitle;
- (void)initEmotContent;
- (void)initEmotData;
- (void)initOperateContent;
- (void)initTitleArea;
- (void)initView;
- (id)initWithEmojiWrap:(id)arg1;
- (_Bool)isCustomEmoticon;
- (_Bool)isOperateContentClickable;
- (_Bool)isStoreEmoticon;
- (_Bool)isWeappOperateContent;
- (void)jumpEmotDesiger;
- (void)jumpEmotStore;
- (void)jumpSourceWebView;
- (void)jumpWeappProfile;
- (void)onAddEmot:(id)arg1;
- (void)onDownloadCustomEmoticonFail;
- (void)onDownloadCustomEmoticonFinishWithData:(id)arg1;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(_Bool)arg2;
- (void)onExposeEmot:(id)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)onMore:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onReturn;
- (void)onSaveEmot:(id)arg1;
- (void)onSendEmot:(id)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)reportEmotOperationForSearch:(int)arg1;
- (void)reportPageLaunch;
- (void)reportViewDisplay;
- (void)setButton:(id)arg1 enable:(_Bool)arg2;
- (_Bool)shouldDisplayOperateContent;
- (_Bool)shouldDisplayOperateImageView;
- (_Bool)shouldDisplaySendButtonToContent;
- (void)updateCustomEmotMd5:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

