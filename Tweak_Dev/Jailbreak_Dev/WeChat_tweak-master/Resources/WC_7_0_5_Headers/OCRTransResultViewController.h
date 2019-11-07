//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IOCRTransMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMLoadingView, NSArray, NSMutableDictionary, NSString, OCRTransReport, UIButton, UIColor, UIImage, UIImageView, UILabel, UIScrollView, UIView;

@interface OCRTransResultViewController : MMUIViewController <IOCRTransMgrExt, UIScrollViewDelegate, MMTipsViewControllerDelegate>
{
    UIImageView *_souceImageView;
    UIView *_resultView;
    MMLoadingView *_loadingView;
    _Bool _showOrigin;
    NSMutableDictionary *_fontDic;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIColor *_bgColor;
    UIColor *_textColor;
    struct CGPoint _offsetPoint;
    struct CGRect _newImageRect;
    char *_rgba;
    UILabel *_tipLabel;
    UIButton *_closeBtn;
    UIButton *_showOriginBtn;
    UIButton *_saveBtn;
    UIImageView *_topBar;
    UIImageView *_bottomBar;
    struct CGRect _imageRect;
    _Bool _viewIsAppeared;
    UIImage *_showOriginNormalImage;
    UIImage *_showOriginSelectedImage;
    UIImage *_showOriginNormalImageHL;
    UIImage *_showOriginSelectedImageHL;
    unsigned long long _ZHResultStrCount;
    unsigned long long _allResultStrCount;
    UIImage *_image;
    UIImage *_grayImage;
    NSArray *_translations;
    double _angle;
    OCRTransReport *_transReport;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _translateFinishBlock;
    UIView *_animationView;
    UIView *_topLine;
    UIView *_rightLine;
    UIView *_bottomLine;
    UIView *_leftLine;
    UIImageView *_scanLineImgView;
    struct CGRect _imageCropRect;
}

- (void).cxx_destruct;
- (void)OnOploadOCRImageFinish:(_Bool)arg1;
- (void)OnSendOCRImage:(id)arg1 pbCGIWrap:(id)arg2;
- (void)OnTakeOCRGrayImage:(id)arg1;
- (void)OnTakeOCRImage:(id)arg1;
- (void)adjustViewAndTryToAnimate;
@property(nonatomic) double angle; // @synthesize angle=_angle;
- (void)animate;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void)close;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)expandForInfo:(id)arg1 withFont:(id)arg2;
- (void)expandToDownForInfo:(id)arg1 font:(id)arg2;
- (void)expandToLeftForInfo:(id)arg1 font:(id)arg2;
- (void)expandToRightForInfo:(id)arg1 font:(id)arg2;
- (void)expandToUpForInfo:(id)arg1 font:(id)arg2;
- (id)exportImage;
- (void)getBitmap;
@property(retain, nonatomic) UIImage *grayImage; // @synthesize grayImage=_grayImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect imageCropRect; // @synthesize imageCropRect=_imageCropRect;
- (id)init;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (void)onClickTipsBtn:(unsigned long long)arg1;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
- (void)saveToAlbum:(id)arg1;
@property(retain, nonatomic) UIImageView *scanLineImgView; // @synthesize scanLineImgView=_scanLineImgView;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setBackgroundAndTextColorForLabel:(id)arg1 withInfo:(id)arg2;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) OCRTransReport *transReport; // @synthesize transReport=_transReport;
@property(copy, nonatomic) CDUnknownBlockType translateFinishBlock; // @synthesize translateFinishBlock=_translateFinishBlock;
@property(retain, nonatomic) NSArray *translations; // @synthesize translations=_translations;
- (void)setTranslations:(id)arg1 andAngle:(double)arg2;
- (void)setupShowOriginButtonImage;
- (void)showDialogWithWording:(id)arg1;
- (struct CGSize)sizeForText:(id)arg1 withSize:(struct CGSize)arg2 font:(id)arg3 isMerge:(_Bool)arg4;
- (void)switchText;
- (void)updateAngle;
- (void)updateResult;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

