//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavClickStreamHelperDelegete.h"

@class FavClickStreamHelper, NSString;

@interface FavMMUIViewController : MMUIViewController <FavClickStreamHelperDelegete>
{
    FavClickStreamHelper *_clickHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavClickStreamHelper *clickHelper; // @synthesize clickHelper=_clickHelper;
- (id)sessionId;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

