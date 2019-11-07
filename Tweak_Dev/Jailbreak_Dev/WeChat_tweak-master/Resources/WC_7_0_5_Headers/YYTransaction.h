//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YYTransaction : NSObject
{
    id _target;
    SEL _selector;
}

+ (void)load;
+ (id)transactionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
- (void)commit;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id target; // @synthesize target=_target;

@end

