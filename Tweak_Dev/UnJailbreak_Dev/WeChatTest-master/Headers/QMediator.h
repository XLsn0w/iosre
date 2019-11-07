//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QAnnotationContainerView, QBasicMapView, QOverlayContainer;

@interface QMediator : NSObject
{
    QBasicMapView *_basicMapView;
    QAnnotationContainerView *_annotationContainerView;
    QOverlayContainer *_overlayContainer;
}

+ (id)mediatorWithBasicMapView:(id)arg1 annotationContainerView:(id)arg2 overlayContainer:(id)arg3;
@property(nonatomic) __weak QOverlayContainer *overlayContainer; // @synthesize overlayContainer=_overlayContainer;
@property(nonatomic) __weak QAnnotationContainerView *annotationContainerView; // @synthesize annotationContainerView=_annotationContainerView;
@property(nonatomic) __weak QBasicMapView *basicMapView; // @synthesize basicMapView=_basicMapView;
- (void).cxx_destruct;
- (id)initWithBasicMapView:(id)arg1 annotationContainerView:(id)arg2 overlayContainer:(id)arg3;
- (void)event_mapStatusChanged;
- (void)makeDirty;
- (double)zoomLevel;
- (CDStruct_02837cd9)visibleMapRect;
- (void)updateMapToCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toMapPointFromView:(id)arg2;
- (struct CGPoint)convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;

@end

