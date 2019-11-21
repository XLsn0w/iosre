//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMIAppKinda : NSObject
{
    struct Handle<std::__1::shared_ptr<kinda::IAppKinda>> _cppRefHandle;
}

+ (id)getInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applicationBecomeActive;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)applicationReceiveMemoryWarning;
- (void)applicationResignActive;
- (void)applicationWillTerminate;
- (_Bool)getIsPaying;
- (id)initWithCpp:(const shared_ptr_98d3ea10 *)arg1;
- (_Bool)isInAnyUseCase;
- (_Bool)isUseCaseAlive:(id)arg1;
- (void)networkChange:(id)arg1;
- (void)notifyAllUseCases:(id)arg1;
- (void)notifyOfflineXmlMsg:(id)arg1;
- (void)popToUseCase:(id)arg1;
- (id)startUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (void)stopUseCase:(id)arg1;
- (void)takeScreenshot;

@end
