//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IStreamVoiceInputExt.h"
#import "StreamVoiceInputControlViewDelegate.h"

@class MMUILabel, MMUISearchBar, MMVoiceSearchReport, NSString, StreamVoiceInputControlView, StreamVoiceInputLogic, UIImageView, UIView;

@interface MMVoiceSearchControl : NSObject <StreamVoiceInputControlViewDelegate, IStreamVoiceInputExt>
{
    _Bool _isVoiceRecording;
    _Bool _isVoiceTransfering;
    _Bool _isVoiceSearching;
    _Bool _bCancelByError;
    id <MMVoiceSearchControlDelegate> _delegate;
    MMUISearchBar *_searchBar;
    UIView *_voiceSearchCoverView;
    StreamVoiceInputControlView *_controlView;
    MMUILabel *_tipsLabel;
    MMVoiceSearchReport *_reporter;
    double _keyboardBottomPadding;
    UIImageView *_loadingView;
    MMUILabel *_loadingLabel;
    StreamVoiceInputLogic *_inputLogic;
    unsigned long long _currentInputId;
    NSString *_newestVoiceResult;
}

- (void).cxx_destruct;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
@property(nonatomic) _Bool bCancelByError; // @synthesize bCancelByError=_bCancelByError;
- (void)cancelRecord;
@property(retain, nonatomic) StreamVoiceInputControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) unsigned long long currentInputId; // @synthesize currentInputId=_currentInputId;
- (void)dealloc;
@property(nonatomic) __weak id <MMVoiceSearchControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideVoiceSearchView;
- (void)hideVoiceSearchViewAnimated:(_Bool)arg1;
- (id)initWithSearchBar:(id)arg1;
@property(retain, nonatomic) StreamVoiceInputLogic *inputLogic; // @synthesize inputLogic=_inputLogic;
@property(readonly, nonatomic) _Bool isVoiceRecording; // @synthesize isVoiceRecording=_isVoiceRecording;
@property(readonly, nonatomic) _Bool isVoiceSearching; // @synthesize isVoiceSearching=_isVoiceSearching;
@property(readonly, nonatomic) _Bool isVoiceTransfering; // @synthesize isVoiceTransfering=_isVoiceTransfering;
@property(nonatomic) double keyboardBottomPadding; // @synthesize keyboardBottomPadding=_keyboardBottomPadding;
- (void)layout;
- (void)loadView;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSString *newestVoiceResult; // @synthesize newestVoiceResult=_newestVoiceResult;
- (void)onExitSearch;
- (void)onFinishVoiceAction;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)onResultDone:(id)arg1;
- (void)onSearching;
- (void)onStartVoiceInputFail;
- (void)onTransfering;
- (void)onUpdateKeyboardBottomPadding:(double)arg1;
@property(retain, nonatomic) MMVoiceSearchReport *reporter; // @synthesize reporter=_reporter;
@property(readonly, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *voiceSearchCoverView; // @synthesize voiceSearchCoverView=_voiceSearchCoverView;
- (void)updateUIAnimated:(_Bool)arg1;
- (void)updateUIForTextChanged;
- (void)userDidHoldBegin;
- (void)userDidHoldEnd:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

