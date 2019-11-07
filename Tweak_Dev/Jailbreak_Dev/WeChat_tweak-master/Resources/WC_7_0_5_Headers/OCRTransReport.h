//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface OCRTransReport : NSObject
{
    _Bool _isBizImgTranslating;
    unsigned int _source;
    unsigned int _captureCost;
    unsigned int _result;
    unsigned int _uploadCost;
    unsigned int _ocrTranslateCost;
    unsigned int _totalCost;
    unsigned int _showOriginCount;
    unsigned int _hasSaveResult;
    unsigned int _hasSaveOrigin;
    NSDate *_startTime;
    NSDate *_captureTime;
    NSDate *_startUploadTime;
    NSDate *_endUploadTime;
    NSDate *_getResultTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int captureCost; // @synthesize captureCost=_captureCost;
@property(retain, nonatomic) NSDate *captureTime; // @synthesize captureTime=_captureTime;
- (void)dealloc;
@property(retain, nonatomic) NSDate *endUploadTime; // @synthesize endUploadTime=_endUploadTime;
@property(retain, nonatomic) NSDate *getResultTime; // @synthesize getResultTime=_getResultTime;
@property(nonatomic) unsigned int hasSaveOrigin; // @synthesize hasSaveOrigin=_hasSaveOrigin;
@property(nonatomic) unsigned int hasSaveResult; // @synthesize hasSaveResult=_hasSaveResult;
@property(nonatomic) _Bool isBizImgTranslating; // @synthesize isBizImgTranslating=_isBizImgTranslating;
@property(nonatomic) unsigned int ocrTranslateCost; // @synthesize ocrTranslateCost=_ocrTranslateCost;
- (void)report;
- (void)reset;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(nonatomic) unsigned int showOriginCount; // @synthesize showOriginCount=_showOriginCount;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSDate *startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(nonatomic) unsigned int totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) unsigned int uploadCost; // @synthesize uploadCost=_uploadCost;

@end

