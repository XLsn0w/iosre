//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class NSString, WASubscriptionMessagePageSheetViewModel;

@interface WASubscriptionMessageRequestSubscribeCgi : WCBaseCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_username;
    unsigned long long _scene;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)createRequest;
- (void)didFailWithError:(id)arg1 reponse:(id)arg2;
- (void)didGetResponse:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
- (id)initWithViewModel:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)subscribeStatusInBrand:(id)arg1;
- (id)subscribeStatusInWeapp:(id)arg1;

@end

