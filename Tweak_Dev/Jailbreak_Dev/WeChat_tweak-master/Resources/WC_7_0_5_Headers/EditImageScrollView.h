//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "EditImageOperationDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class EditImageView, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface EditImageScrollView : MMUIScrollView <UIScrollViewDelegate, EditImageOperationDelegate, UIGestureRecognizerDelegate>
{
    double _naturalTopLength;
    _Bool _isZooming;
    _Bool _isScrolling;
    unsigned int _gestureMonitor;
    double _minimunScaleWhenInit;
    unsigned int _fromEntrance;
    id <EditImageOperationDelegate> m_delegate;
    EditImageView *oEditImageView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotateGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    unsigned long long _rotationOrientationOverall;
    unsigned long long _editImageUIStyle;
    double __lastScale;
    unsigned long long _editImageContentType;
    struct CGPoint __lastOffset;
    struct CGRect _imageFrame;
    struct CGRect _cropFrame;
    struct CGRect _initialFrame;
    struct CGRect __lastGridFrame;
    struct CGRect __lastCropFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect _cropFrame; // @synthesize _cropFrame;
@property(nonatomic) struct CGRect _imageFrame; // @synthesize _imageFrame;
@property(nonatomic) struct CGRect _initialFrame; // @synthesize _initialFrame;
@property(nonatomic) struct CGRect _lastCropFrame; // @synthesize _lastCropFrame=__lastCropFrame;
@property(nonatomic) struct CGRect _lastGridFrame; // @synthesize _lastGridFrame=__lastGridFrame;
@property(nonatomic) struct CGPoint _lastOffset; // @synthesize _lastOffset=__lastOffset;
@property(nonatomic) double _lastScale; // @synthesize _lastScale=__lastScale;
@property(retain, nonatomic) UILongPressGestureRecognizer *_longPressGesture; // @synthesize _longPressGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *_panGesture; // @synthesize _panGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *_pinchGesture; // @synthesize _pinchGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer *_rotateGesture; // @synthesize _rotateGesture;
@property(nonatomic) unsigned long long _rotationOrientationOverall; // @synthesize _rotationOrientationOverall;
@property(retain, nonatomic) UITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture;
- (void)activateCustomGestures;
- (void)adjustScrollViewContentInset;
- (void)adjustScrollViewZoomScale;
- (void)adjustScroolViewToFreeContentInset;
- (_Bool)canMosaicUndo;
- (_Bool)canPenUndo;
- (_Bool)canRedo;
- (void)changeLineColor:(id)arg1;
- (void)changeLineStyle:(unsigned long long)arg1;
- (void)changeLineWidth:(double)arg1;
- (int)checkToolType;
- (void)cropImage:(struct CGRect)arg1;
- (void)deactivateCustomGestures;
- (void)dragaAndDropWidget;
@property(nonatomic) unsigned long long editImageContentType; // @synthesize editImageContentType=_editImageContentType;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
- (void)editImageViewDidStartDraw;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewPOIWidgetHiddenStateChange:(_Bool)arg1;
- (void)editImageViewdidEndDraw;
@property(nonatomic) unsigned int fromEntrance; // @synthesize fromEntrance=_fromEntrance;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getEditImageAttr;
- (void)handleLongPressGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)hideStoryMainTextImage;
- (void)initGestures;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadImage:(id)arg1 withDrawLayerArray:(id)arg2 withEditEntrance:(unsigned int)arg3;
- (void)loadOriginalImage:(id)arg1 withImageData:(id)arg2;
@property(nonatomic) __weak id <EditImageOperationDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) EditImageView *oEditImageView; // @synthesize oEditImageView;
- (void)onClickCancelBtn;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (void)onImageRotatedByOrientation:(unsigned long long)arg1;
- (void)redo;
- (void)reloadViews:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setCancelBtnFrame:(struct CGRect)arg1;
- (void)setMusicLyricIsOn:(_Bool)arg1;
- (void)setStoryMainTextImage:(id)arg1 didEditBlock:(CDUnknownBlockType)arg2;
- (void)undoMosaic;
- (void)undoPen;
- (void)updateFixedPositionWidgetWithTipsButton:(id)arg1 lineView:(id)arg2;
- (void)updateMusicLyrics:(id)arg1;
- (void)useImageTool:(int)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

