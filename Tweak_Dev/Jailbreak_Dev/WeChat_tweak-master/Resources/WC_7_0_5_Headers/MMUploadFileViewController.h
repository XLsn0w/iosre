//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILogReportExt.h"
#import "MMPackageDownloadMgrExt.h"
#import "MMResourceMgrExt.h"

@class MMLoadingView, MMProgressView, NSArray, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, WebMailViewController;

@interface MMUploadFileViewController : MMUIViewController <MMResourceMgrExt, ILogReportExt, MMPackageDownloadMgrExt>
{
    WebMailViewController *m_mailViewCtrl;
    NSArray *_uploadFileNames;
    NSString *_attachDataName;
    MMProgressView *m_progressView;
    UILabel *m_labelProgress;
    UIImageView *m_recoverView;
    UILabel *m_noneFile;
    UILabel *m_tips;
    UILabel *m_uploadFileName;
    UIButton *m_uploadBtn;
    UILabel *m_warningLabel;
    UITapGestureRecognizer *_tap;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
- (void)OnResponse:(id)arg1;
- (void)UploadFail;
- (void)UploadSuccess;
- (void)adjustTableViewRect;
- (void)dealloc;
- (void)didTap;
- (void)downloadPackage:(id)arg1;
- (void)hiddenUpView;
- (id)init;
- (void)initView;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)onFinish;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (void)sendMail:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setUploadFail;
- (void)setUploadSuc;
- (void)testData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

