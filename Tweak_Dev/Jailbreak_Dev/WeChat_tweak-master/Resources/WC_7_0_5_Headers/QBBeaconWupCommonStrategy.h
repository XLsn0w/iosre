//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSArray, NSDictionary, NSString;

@interface QBBeaconWupCommonStrategy : QBJceObjectV2
{
    int _jcev2_p_1_r_queryInterval;
    NSArray *_jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy;
    NSString *_jcev2_p_2_o_url;
    NSDictionary *_jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString;
}

+ (id)jceType;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=cloudParas, setter=setCloudParas:) NSDictionary *jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString=_jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString;
- (id)init;
@property(retain, nonatomic, getter=moduleList, setter=setModuleList:) NSArray *jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy; // @synthesize jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy=_jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy;
@property(nonatomic, getter=queryInterval, setter=setQueryInterval:) int jcev2_p_1_r_queryInterval; // @synthesize jcev2_p_1_r_queryInterval=_jcev2_p_1_r_queryInterval;
@property(retain, nonatomic, getter=url, setter=setUrl:) NSString *jcev2_p_2_o_url; // @synthesize jcev2_p_2_o_url=_jcev2_p_2_o_url;

@end

