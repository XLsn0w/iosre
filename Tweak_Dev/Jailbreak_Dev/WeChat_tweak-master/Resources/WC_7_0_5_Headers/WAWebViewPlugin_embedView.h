//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

@interface WAWebViewPlugin_embedView : WAWebViewPluginBase
{
}

- (id)getChildView:(unsigned int)arg1;
- (id)getChildViews;
- (id)getChildViewsByClass:(Class)arg1;
- (unsigned int)getViewId:(id)arg1;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (_Bool)removeChildView:(unsigned int)arg1;
- (void)resizeView:(unsigned int)arg1 region:(struct CGRect)arg2;
- (void)setViewFixed:(_Bool)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)setViewFullScreen:(id)arg1;
- (void)setViewVisible:(unsigned int)arg1 visible:(_Bool)arg2;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (void)updateZIndex:(long long)arg1 ViewId:(unsigned int)arg2;

@end

