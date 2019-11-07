//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMCPLabel.h"

#import "MMRichTextCoverViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CTFrameWrap, MMRichTextCoverView, NSMutableArray, NSMutableAttributedString, NSString;

@interface CTRichTextView : MMCPLabel <UIGestureRecognizerDelegate, UIScrollViewDelegate, MMRichTextCoverViewDelegate>
{
    NSMutableAttributedString *_attString;
    struct __CTFramesetter *_framesetter;
    CTFrameWrap *_frame;
    NSMutableArray *_images;
    NSMutableArray *_colors;
    NSMutableArray *_tempImages;
    double _fWidth;
    double _fHeight;
    unsigned long long _parserType;
    id <ILinkEventExt> _linkDelegate;
    _Bool _bUpdateFramesIfNeeded;
    _Bool _bWholeField;
    _Bool _bIsLongPressHandled;
    struct CGRect _touchedRect;
    _Bool _bTouchesPassOn;
    _Bool _bHandleLongPress;
    _Bool _bSelectable;
    _Bool _isCHS;
    double _lineSpace;
    MMRichTextCoverView *_richTextCoverView;
}

- (void).cxx_destruct;
- (id)attributedText;
@property(nonatomic) _Bool bHandleLongPress; // @synthesize bHandleLongPress=_bHandleLongPress;
@property(nonatomic) _Bool bSelectable; // @synthesize bSelectable=_bSelectable;
@property(nonatomic) _Bool bTouchesPassOn; // @synthesize bTouchesPassOn=_bTouchesPassOn;
- (void)baseInit;
- (double)boundingHeight;
- (double)boundingHeightForWidth:(double)arg1;
- (double)boundingWidth;
- (double)boundingWidthForHeight:(double)arg1;
- (struct _NSRange)characterRangeAtIndex:(long long)arg1;
- (id)createParser:(unsigned long long)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) double fHeight; // @synthesize fHeight=_fHeight;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
- (float)getLineHeight;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (id)getSelectRectsWithRange:(struct _NSRange)arg1;
- (id)getStringWithRange:(struct _NSRange)arg1;
- (id)getTextString;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint)arg1 FrontCursor:(_Bool)arg2;
- (struct _NSRange)getTouchRangeWithTouchPoint:(struct CGPoint)arg1;
- (double)heightForContent:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isCHS; // @synthesize isCHS=_isCHS;
- (_Bool)isEmojiLocation:(unsigned long long)arg1 bStart:(_Bool)arg2;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
- (void)longPressOnAddressEvent:(id)arg1;
- (void)longPressOnLinkEvent:(id)arg1;
- (void)longPressOnPhoneEvent:(id)arg1;
- (void)longPressOnTextEvent:(id)arg1;
- (unsigned long long)numberOfLinesAfterLayout;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
- (struct _NSRange)rangeIntersection:(struct _NSRange)arg1 withSecond:(struct _NSRange)arg2;
@property(retain, nonatomic) MMRichTextCoverView *richTextCoverView; // @synthesize richTextCoverView=_richTextCoverView;
- (void)setAttributedText:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateFrame;
- (void)updateFrameSetting;
- (void)updateFrames;
- (void)updateFramesIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

