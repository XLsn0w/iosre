//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBRSA : NSObject
{
}

+ (id)dataToHexString:(id)arg1;
+ (id)encryptOAEPData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 padding:(unsigned int)arg2 publicKey:(id)arg3;
+ (id)encryptData:(id)arg1 padding:(unsigned int)arg2 withKeyRef:(struct __SecKey *)arg3;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;

@end

