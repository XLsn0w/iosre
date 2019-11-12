//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QBBeaconRequestPackage;

@interface QBBeaconReqDataPackage : NSObject
{
    QBBeaconRequestPackage *requestPackage;
    NSString *reqKey;
    NSString *reqServant;
    NSString *reqFunc;
    int zipAlg;
    int encAlg;
    NSString *encKey;
    NSString *aesKeyEncrypt;
    NSString *encPubKey;
}

+ (id)initWithRequestPkg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aesKeyEncrypt; // @synthesize aesKeyEncrypt;
- (id)createReqData:(id *)arg1;
- (void)dealloc;
@property(nonatomic) int encAlg; // @synthesize encAlg;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
- (id)getWithRspData:(id)arg1 error:(id *)arg2;
- (id)init;
@property(retain, nonatomic) NSString *reqFunc; // @synthesize reqFunc;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey;
@property(retain, nonatomic) NSString *reqServant; // @synthesize reqServant;
@property(retain, nonatomic) QBBeaconRequestPackage *requestPackage; // @synthesize requestPackage;
@property(nonatomic) int zipAlg; // @synthesize zipAlg;

@end
