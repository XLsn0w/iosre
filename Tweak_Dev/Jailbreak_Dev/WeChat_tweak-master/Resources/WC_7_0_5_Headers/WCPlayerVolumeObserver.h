//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPVolumeView;

@interface WCPlayerVolumeObserver : NSObject
{
    id <WCPlayerVolumeObserverDelegate> _delegate;
    MPVolumeView *_volumeView;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WCPlayerVolumeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onSystemVolumeDidChange:(id)arg1;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
- (void)startObserveVolumeChangeEvent;
- (void)stopObserveVolumeChangeEvent;
- (float)volume;

@end

