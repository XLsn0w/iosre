//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoStreamPlayerView.h"

@class NSString;

@interface HttpVideoStreamPlayerView : VideoStreamPlayerView
{
    NSString *m_filePath;
}

- (void).cxx_destruct;
- (id)getFormalVideoPath;
- (_Bool)hasFileCache;
- (id)initWithFrame:(struct CGRect)arg1 url:(id)arg2 filePath:(id)arg3;
- (_Bool)isPlaying;
- (_Bool)isStreamingPlayMode;
- (unsigned long long)startDownloadVideo;

@end

