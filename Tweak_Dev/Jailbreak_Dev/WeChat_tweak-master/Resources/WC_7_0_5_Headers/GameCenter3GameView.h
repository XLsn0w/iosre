//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSString;

@interface GameCenter3GameView : MMUIView
{
    NSString *_title;
    NSString *_subTitle;
    NSArray *_gameList;
    _Bool _needRank;
    NSString *_moreDesc;
    NSString *_moreJumpUrl;
    unsigned int _uiArea;
    id <GameCenter3GameViewDelegate> _delegate;
}

+ (double)heightForRecommendData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GameCenter3GameViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getMoreRecommGameView:(double)arg1;
- (id)getOneRecomItemView:(int)arg1 GameItem:(id)arg2 MaxWidth:(double)arg3;
- (id)initWithData:(id)arg1 NeedRank:(_Bool)arg2 GameList:(id)arg3 MoreDesc:(id)arg4 MoreJumpUrl:(id)arg5;
- (void)onGameItemClicked:(id)arg1;
- (void)onMoreRecommGameClicked:(id)arg1;
@property(nonatomic) unsigned int uiArea; // @synthesize uiArea=_uiArea;
- (void)setupView;

@end

