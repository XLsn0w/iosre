//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class NSDictionary, NSMutableArray, QAnnotationView;

@interface WAJSEventHandler_translateMapMarker : WAJSEventHandler_BaseEvent
{
    NSMutableArray *_keyFrames;
    NSDictionary *_dic;
    QAnnotationView *_markerView;
}

- (void).cxx_destruct;
- (void)checkNextFrameAnimation;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
- (void)handleJSEvent:(id)arg1;
@property(retain, nonatomic) NSMutableArray *keyFrames; // @synthesize keyFrames=_keyFrames;
@property(nonatomic) __weak QAnnotationView *markerView; // @synthesize markerView=_markerView;
- (void)startKeyFrameAnimation;

@end

