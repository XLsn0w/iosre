//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKOnePxLineView.h"

@class NSString, TrueKindaOnePxLineView;

@interface KindaOnePxLineView : KindaView <MMKOnePxLineView>
{
    TrueKindaOnePxLineView *_line;
}

- (void).cxx_destruct;
- (id)getView;
@property(retain, nonatomic) TrueKindaOnePxLineView *line; // @synthesize line=_line;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

