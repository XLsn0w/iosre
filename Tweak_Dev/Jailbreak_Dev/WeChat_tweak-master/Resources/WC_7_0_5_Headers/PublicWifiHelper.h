//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface PublicWifiHelper : MMObject
{
}

+ (int)combineRetCodeWithProtoType:(int)arg1 ErrorScene:(int)arg2 ErrorNum:(int)arg3;
+ (int)combineStageCodeWithProtoType:(int)arg1 ErrorScene:(int)arg2;
+ (id)genSessionKey;
+ (int)getProtoTypeWithApBase:(id)arg1;
+ (int)getSvrTypeFromWifiScene:(unsigned int)arg1;
+ (_Bool)isNeedSpecialHandling;
+ (_Bool)isWifiConnected;
+ (void)logApcheck:(id)arg1 apMac:(id)arg2 clientMac:(id)arg3 apKey:(id)arg4 sessionKey:(id)arg5 httpTimeCost:(int)arg6 httpStatusCode:(int)arg7 httpContent:(id)arg8 cofgEchoStr:(id)arg9 errorMsg:(id)arg10;
+ (void)logClickBackButtonOfCompletePageWithAPMac:(id)arg1 url:(id)arg2;
+ (void)logClickBackButtonOfFrontPageWithAPMac:(id)arg1 url:(id)arg2;
+ (void)logClickCompleteButtonOfCompletePageWithAPMac:(id)arg1 followBrand:(int)arg2 protoType:(int)arg3;
+ (void)logClickCompleteButtonOfSuccessPageWithAPMac:(id)arg1 followBrand:(int)arg2 protoType:(int)arg3;
+ (void)logClickConnectButtonOfFrontPageWithAPMac:(id)arg1 protoType:(int)arg2;
+ (void)logClickHomeBarWithAPMac:(id)arg1 url:(id)arg2;
+ (void)logCloseGuidePageOfProtoFourWithAPMac:(id)arg1;
+ (void)logCloseGuidePageOfProtoOneWithAPMac:(id)arg1;
+ (void)logLaunchWeChatThroughUrlSchemeWithSessionKey:(id)arg1 apMac:(id)arg2 qValue:(id)arg3;
+ (void)logProto31APACInfoRespWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5;
+ (void)logProto31APAuthWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5 appId:(id)arg6 extend:(id)arg7 timestamp:(id)arg8 openid:(id)arg9 tid:(id)arg10 authUrl:(id)arg11;
+ (void)logProto31CheckProtoTypeWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5;
+ (void)logProto31GetPageInfoRespWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5;
+ (void)logProto31GetPortalApInfoRespWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5;
+ (void)logProtoFourApAuthRespWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5;
+ (void)logProtoFourChangeSsidRespWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5;
+ (void)logProtoFourSecondApAuthRespWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4 qValue:(id)arg5;
+ (void)logReqGetA8KeyWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logReqGetAuthKeyWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logReqLoginAPWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logReqWeixinAuthWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logRespGetA8KeyWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logRespGetAuthKeyWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logRespLoginAPWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logRespWeixinAuthWithSessionKey:(id)arg1 apMac:(id)arg2 status:(int)arg3 scene:(unsigned int)arg4;
+ (void)logViewCompletePageWithAPMac:(id)arg1 url:(id)arg2 hasFollowed:(int)arg3 protoType:(int)arg4;
+ (void)logViewFrontPageWithAPMac:(id)arg1 url:(id)arg2 protoType:(int)arg3;
+ (void)logViewGuidePageOfProtoFourWithAPMac:(id)arg1 url:(id)arg2;
+ (void)logViewGuidePageOfProtoOneWithAPMac:(id)arg1 url:(id)arg2;
+ (void)logViewSuccessPageWithAPMac:(id)arg1 url:(id)arg2 hasFollowed:(int)arg3 protoType:(int)arg4;
+ (id)parseFreeWifiMsg:(id)arg1;
+ (id)parseQueryString:(id)arg1;
+ (id)standardFormatMAC:(id)arg1;
+ (id)stringForNow;

@end

