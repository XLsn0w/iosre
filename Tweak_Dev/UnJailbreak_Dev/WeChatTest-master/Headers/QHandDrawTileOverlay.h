//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTileOverlay.h"

@class QHandDrawTileOverlayDataProvider;

@interface QHandDrawTileOverlay : QTileOverlay
{
    QHandDrawTileOverlayDataProvider *_provider;
}

@property(retain, nonatomic) QHandDrawTileOverlayDataProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onHandDrawMapVesionCheck:(id)arg1;
- (void)saveTileData:(id)arg1 atPath:(CDStruct_cf57a58b)arg2;
- (id)loadTileImageAtPath:(CDStruct_cf57a58b)arg1;
- (id)URLForTilePath:(CDStruct_cf57a58b)arg1;

@end

