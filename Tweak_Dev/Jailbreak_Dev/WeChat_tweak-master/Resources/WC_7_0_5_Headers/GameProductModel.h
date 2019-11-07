//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"

@class NSMutableArray, NSString;

@interface GameProductModel : NSObject <NSMutableCopying>
{
    NSString *_name;
    NSString *_price;
    NSString *_coinCount;
    NSString *_exCoinCount;
    NSMutableArray *_gamePropertiesPresented;
    NSString *_productId;
    NSString *_sendExt;
}

+ (id)gameProductModel:(id)arg1 productId:(id)arg2 price:(id)arg3 coinCount:(id)arg4 exCoinCount:(id)arg5 sendExt:(id)arg6;
@property(retain, nonatomic) NSString *coinCount; // @synthesize coinCount=_coinCount;
- (void)dealloc;
@property(retain, nonatomic) NSString *exCoinCount; // @synthesize exCoinCount=_exCoinCount;
@property(readonly, nonatomic) NSMutableArray *gamePropertiesPresented; // @synthesize gamePropertiesPresented=_gamePropertiesPresented;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)myCompare:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *sendExt; // @synthesize sendExt=_sendExt;

@end

