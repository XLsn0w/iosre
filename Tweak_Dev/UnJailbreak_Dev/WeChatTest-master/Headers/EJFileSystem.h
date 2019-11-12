//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol EJFileSystemDelegate;

@interface EJFileSystem : NSObject
{
    id <EJFileSystemDelegate> delegate;
    NSMutableArray *_noretainObejcts;
}

@property(nonatomic) __weak id <EJFileSystemDelegate> delegate; // @synthesize delegate;
- (void)enterForeground;
- (void)addBackground:(id)arg1;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (void)dealloc;

@end
