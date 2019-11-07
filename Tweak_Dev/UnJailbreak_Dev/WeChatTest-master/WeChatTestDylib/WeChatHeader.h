//
//  WeChatHeader.h
//  WeChatTest
//
//  Created by caonongyun on 2018/5/26.
//  Copyright © 2018年 QSH. All rights reserved.
//

#ifndef WeChatHeader_h
#define WeChatHeader_h

@interface WCRedEnvelopesReceiveControlLogic : NSObject

- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;

@end 

@interface WCRedEnvelopesControlData:NSObject

- (id)m_structDicRedEnvelopesBaseInfo;

@end

@interface WCPayInfoItem:NSObject

- (NSString *)m_c2cNativeUrl;

@end

@interface CMessageWrap : NSObject

- (WCPayInfoItem *)m_oWCPayInfoItem;

@end

@interface WCBizUtil:NSObject

+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;

@end

@interface MMServiceCenter:NSObject

+ (id)defaultCenter;
- (id)getService:(id)arg1;

@end

@interface CContact:NSObject

- (id)getContactDisplayName;
- (id)m_nsHeadImgUrl;
- (id)m_nsUsrName;
@end

@interface CContactMgr:NSObject
- (id)getSelfContact;
@end


@interface MMMsgLogicManager:NSObject
- (id)GetCurrentLogicController;
@end

@interface WeixinContentLogicController:NSObject
- (id)m_contact;
@end

@interface WCPayLogicMgr:NSObject

- (void)setRealnameReportScene:(unsigned int)arg1;
- (void)checkHongbaoOpenLicense:(id)arg1 acceptCallback:(void(^)())arg2 denyCallback:(void(^)())arg3;

@end

@interface WCRedEnvelopesLogicMgr:NSObject
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
@end

@interface SKBuiltinString_t

@property(retain, nonatomic) NSString *string; // @dynamic string;

@end

@interface SKBuiltinBuffer_t


@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int iLen; // @dynamic iLen;
@end

@interface BaseResponse

@property(retain, nonatomic) SKBuiltinString_t *errMsg; // @dynamic errMsg;
@property(nonatomic) int ret; // @dynamic ret;


@end

@interface HongBaoRes

@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;

@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;


@end

@interface CMessageMgr:NSObject

- (NSMutableDictionary *)qsh_openRedEnvelopesRequestParamWithDictionary:(NSDictionary *)dict;
- (NSString *)qsh_getNickName;
- (NSString *)qsh_getHeadImg;
- (CContact *)qsh_getContactObj;
@end

@interface NewMainFrameViewController:UIViewController

@end

#endif /* WeChatHeader_h */
